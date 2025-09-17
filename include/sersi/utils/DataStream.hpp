#pragma once

#include <concepts>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <vector>

#include "libsersi/utils/Endian.hpp"

namespace dis {
/// a class to support managing a network buffer.
/// the clients are responsible for managing the char buffer memory.
/// this class explicitly defines operators for expected types.
class DataStream {
 public:
  /// Setup the internal buffer's Endian type.
  /// @param stream the Endian type to use for the internal buffer,
  /// which will be used for network socket writes.
  explicit DataStream(Endian stream) : stream_endian_(stream) {
    int32_t one(1);
    const char e = (reinterpret_cast<char*>(&one))[0];

    if (e == static_cast<char>(1)) {
      machine_endian_ = kLittle;
    } else {
      machine_endian_ = kBig;
    }
  }

  /// Setup the internal buffer.
  /// @param buffer the data to copy and manage.
  /// @param length the number of bytes in the buffer.
  /// @param stream the Endian type to use for the internal buffer,
  DataStream(const char* buffer, std::size_t length, Endian stream) {
    int32_t one(1);
    const char e = (reinterpret_cast<char*>(&one))[0];

    if (e == static_cast<char>(1)) {
      machine_endian_ = kLittle;
    } else {
      machine_endian_ = kBig;
    }

    SetStream(buffer, length, stream);
  }
  ~DataStream() = default;

  /// a method for reading the stored buffer data.
  /// @param offset the index distance with respect to the current read point.
  const char& operator[](uint32_t offset) const {
    return buffer_[read_pos_ + offset];
  }

  /// take ownership of the data buffer.
  void SetStream(const char* buffer, std::size_t length, Endian order) {
    // reassign the endian
    stream_endian_ = order;

    write_pos_ = length;
    read_pos_ = 0;

    // resize the array
    if (buffer_.size() < length) {
      buffer_.resize(length);
    }

    // take ownership of the data
    // copy the data, expensive!
    for (uint32_t i = 0; i < length; ++i) {
      buffer_[i] = buffer[i];
    }
  }

  // write operations
  template <std::arithmetic T>
  DataStream& operator<<(T value) {
    WriteAlgorithm(value);
    return *this;
  }

  // read operations
  template <std::arithmetic T>
  DataStream& operator>>(T& value) {
    ReadAlgorithm(value);
    return *this;
  }

  [[nodiscard]] Endian GetStreamEndian() const { return stream_endian_; }

  [[nodiscard]] Endian GetMachineEndian() const { return machine_endian_; }

  [[nodiscard]] std::size_t GetWritePos() const { return write_pos_; }
  [[nodiscard]] std::size_t GetReadPos() const { return read_pos_; }

  [[nodiscard]] std::size_t Size() const { return buffer_.size(); }

  void Clear() {
    write_pos_ = 0;
    read_pos_ = 0;
    buffer_.clear();
  }

  [[nodiscard]] bool Empty() const { return buffer_.empty(); }

 private:
  template <typename T, typename IterT>
  void IncrementPointer(IterT& iter) {
    iter += sizeof(T);
  }

  template <typename T, typename IterT>
  void DecrementPointer(IterT& iter) {
    iter -= sizeof(T);
  }

  /// this algorithm should only be used for primitive types,
  /// because the class size takes into account the virtual function table.
  template <typename T>
  void WriteAlgorithm(T t) {
    char* ch = reinterpret_cast<char*>(&t);
    DoFlip(ch, sizeof(T));
    DoWrite(ch, sizeof(T));
    IncrementPointer<T>(write_pos_);
  }

  /// this algorithm should only be used for primitive types,
  /// because the class size takes into account the virtual function table.
  template <typename T>
  void ReadAlgorithm(T& t) {
    std::array<char, sizeof(T)> ch;
    DoRead(ch, sizeof(T));
    DoFlip(ch, sizeof(T));
    memcpy(&t, ch, sizeof(t));
    IncrementPointer<T>(read_pos_);
  }

  /// will flip the buffer if the buffer endian is different than the machine's.
  void DoFlip(char* buf, std::size_t bufsize) {
    if (machine_endian_ == stream_endian_ || bufsize < 2) {
      return;
    }

    // flip it, this fills back to front
    char* start = &buf[0];
    char* end = &buf[bufsize - 1];
    while (start < end) {
      /// save the beginning of the buffer
      char temp = *start;

      /// overwrite the beginning of the buffer
      *start = *end;
      *end = temp;

      ++start;
      --end;
    }
  }

  void DoWrite(const char* buf, std::size_t bufsize) {
    for (uint32_t i = 0; i < bufsize; ++i) {
      // ignores the write_pos_ value currently,
      // this should allow for values to always be appended to the end of the
      // buffer.
      buffer_.push_back(buf[i]);
    }
  }

  void DoRead(char* ch, std::size_t bufsize) {
    for (uint32_t i = 0; i < bufsize; i++) {
      ch[i] = buffer_.at(read_pos_ + i);
    }
  }

  using BufferType = std::vector<char>;
  // const BufferType& GetBuffer() const;

  BufferType buffer_;

  /// the location of the read/write.
  std::size_t read_pos_{};
  std::size_t write_pos_{};

  /// the requirement for the managed buffer
  Endian stream_endian_;

  /// the native endian type
  Endian machine_endian_ = kLittle;
};

}  // namespace dis
