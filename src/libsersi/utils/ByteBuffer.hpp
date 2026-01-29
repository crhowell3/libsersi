#pragma once

#include <array>
#include <cstdint>
#include <cstdlib>  // for std::size_t and NULL definition
#include <cstring>  // for memcpy
#include <vector>   // for typedef, member

#include "libsersi/utils/Endian.h"  // for enum

namespace dis {
/// a class to support managing a network buffer.
/// the clients are responsible for managing the char buffer memory.
/// this class explicitly defines operators for expected types.
class ByteBuffer {
 public:
  /// Setup the internal buffer's Endian type.
  /// @param stream the Endian type to use for the internal buffer,
  /// which will be used for network socket writes.
  explicit ByteBuffer(Endian stream);

  /// Setup the internal buffer.
  /// @param buffer the data to copy and manage.
  /// @param length the number of bytes in the buffer.
  /// @param stream the Endian type to use for the internal buffer,
  ByteBuffer(const char* buffer, std::size_t length, Endian stream);
  ~ByteBuffer() = default;

  /// a method for reading the stored buffer data.
  /// @param offset the index distance with respect to the current read point.
  const char& operator[](uint32_t offset) const;

  /// take ownership of the data buffer.
  void SetStream(const char* buffer, std::size_t length, Endian order);

  // write operations
  ByteBuffer& operator<<(bool b);
  ByteBuffer& operator<<(char c);
  ByteBuffer& operator<<(uint8_t c);
  ByteBuffer& operator<<(float f);
  ByteBuffer& operator<<(double d);
  ByteBuffer& operator<<(int d);
  ByteBuffer& operator<<(uint32_t d);
  ByteBuffer& operator<<(int64_t d);
  ByteBuffer& operator<<(uint64_t d);
  ByteBuffer& operator<<(uint16_t d);
  ByteBuffer& operator<<(int16_t d);

  // read operations
  ByteBuffer& operator>>(bool& b);
  ByteBuffer& operator>>(char& c);
  ByteBuffer& operator>>(uint8_t& c);
  ByteBuffer& operator>>(float& f);
  ByteBuffer& operator>>(double& d);
  ByteBuffer& operator>>(int& d);
  ByteBuffer& operator>>(uint32_t& d);
  ByteBuffer& operator>>(int64_t& d);
  ByteBuffer& operator>>(uint64_t& d);
  ByteBuffer& operator>>(uint16_t& d);
  ByteBuffer& operator>>(int16_t& d);

  [[nodiscard]] Endian GetStreamEndian() const;
  [[nodiscard]] Endian GetMachineEndian() const;

  [[nodiscard]] std::size_t GetWritePos() const;
  [[nodiscard]] std::size_t GetReadPos() const;

  [[nodiscard]] std::size_t Size() const;

  void Clear();

  [[nodiscard]] bool Empty() const;

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
    DoRead(ch.data(), sizeof(T));
    DoFlip(ch.data(), sizeof(T));
    memcpy(&t, ch.data(), sizeof(t));
    IncrementPointer<T>(read_pos_);
  }

  /// will flip the buffer if the buffer endian is different than the machine's.
  void DoFlip(char* buf, std::size_t bufsize);

  void DoWrite(const char* buf, std::size_t bufsize);

  void DoRead(char* ch, std::size_t bufsize);

  using BufferType = std::vector<char>;
  // const BufferType& GetBuffer() const;

  BufferType buffer_;

  /// the location of the read/write.
  std::size_t read_pos_;
  std::size_t write_pos_;

  /// the requirement for the managed buffer
  Endian stream_endian_;

  /// the native endian type
  Endian machine_endian_;
};
}  // namespace dis
