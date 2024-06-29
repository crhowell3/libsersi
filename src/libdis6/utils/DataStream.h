#ifndef DIS6_UTILS_DATASTREAM_H_
#define DIS6_UTILS_DATASTREAM_H_

#include <cstdint>
#include <cstdlib>  // for std::size_t and NULL definition
#include <cstring>  // for memcpy
#include <string>   // for typedef, member
#include <vector>   // for typedef, member

#include "dis6/utils/Endian.h"  // for enum

namespace dis {
/// a class to support managing a network buffer.
/// the clients are responsible for managing the char buffer memory.
/// this class explicitly defines operators for expected types.
class DataStream {
 public:
  /// Setup the internal buffer's Endian type.
  /// @param stream the Endian type to use for the internal buffer,
  /// which will be used for network socket writes.
  explicit DataStream(Endian stream);

  /// Setup the internal buffer.
  /// @param buffer the data to copy and manage.
  /// @param length the number of bytes in the buffer.
  /// @param stream the Endian type to use for the internal buffer,
  DataStream(const char* buffer, std::size_t length, Endian stream);
  ~DataStream() = default;

  /// a method for reading the stored buffer data.
  /// @param offset the index distance with respect to the current read point.
  const char& operator[](uint32_t offset) const;

  /// take ownership of the data buffer.
  void SetStream(const char* buffer, std::size_t length, Endian order);

  // write operations
  DataStream& operator<<(bool b);
  DataStream& operator<<(char c);
  DataStream& operator<<(uint8_t c);
  DataStream& operator<<(float f);
  DataStream& operator<<(double d);
  DataStream& operator<<(int d);
  DataStream& operator<<(uint32_t d);
  DataStream& operator<<(int64_t d);
  DataStream& operator<<(uint64_t d);
  DataStream& operator<<(uint16_t d);
  DataStream& operator<<(int16_t d);

  // read operations
  DataStream& operator>>(bool& b);
  DataStream& operator>>(char& c);
  DataStream& operator>>(uint8_t& c);
  DataStream& operator>>(float& f);
  DataStream& operator>>(double& d);
  DataStream& operator>>(int& d);
  DataStream& operator>>(uint32_t& d);
  DataStream& operator>>(int64_t& d);
  DataStream& operator>>(uint64_t& d);
  DataStream& operator>>(uint16_t& d);
  DataStream& operator>>(int16_t& d);

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
    char ch[sizeof(T)];
    DoRead(ch, sizeof(T));
    DoFlip(ch, sizeof(T));
    memcpy(&t, ch, sizeof(t));
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

#endif  // DIS6_UTILS_DATASTREAM_H_
