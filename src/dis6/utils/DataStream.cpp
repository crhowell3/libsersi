#include "dis6/utils/DataStream.h"

namespace dis {

DataStream::DataStream(Endian stream)
    : read_pos_(0),
      write_pos_(0),
      stream_endian_(stream),
      machine_endian_(kLittle) {
  int32_t one(1);
  char e = (reinterpret_cast<char*>(&one))[0];

  if (e == static_cast<char>(1)) {
    machine_endian_ = kLittle;
  } else {
    machine_endian_ = kBig;
  }
}

DataStream::DataStream(const char* buffer, std::size_t length, Endian stream)
    : read_pos_(0),
      write_pos_(0),
      stream_endian_(stream),
      machine_endian_(kLittle) {
  int32_t one(1);
  char e = (reinterpret_cast<char*>(&one))[0];

  if (e == static_cast<char>(1)) {
    machine_endian_ = kLittle;
  } else {
    machine_endian_ = kBig;
  }

  SetStream(buffer, length, stream);
}

Endian DataStream::GetStreamEndian() const { return stream_endian_; }

Endian DataStream::GetMachineEndian() const { return machine_endian_; }

std::size_t DataStream::GetWritePos() const { return write_pos_; }

std::size_t DataStream::GetReadPos() const { return read_pos_; }

std::size_t DataStream::Size() const { return buffer_.size(); }

void DataStream::Clear() {
  write_pos_ = 0;
  read_pos_ = 0;
  buffer_.clear();
}

bool DataStream::Empty() const { return buffer_.empty(); }

const char& DataStream::operator[](uint32_t offset) const {
  return buffer_[read_pos_ + offset];
}

// currently copies the source data.
void DataStream::SetStream(const char* buffer, std::size_t length,
                           Endian order) {
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

void DataStream::DoFlip(char* buf, std::size_t bufsize) {
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

void DataStream::DoWrite(const char* buf, std::size_t bufsize) {
  for (uint32_t i = 0; i < bufsize; ++i) {
    // ignores the write_pos_ value currently,
    // this should allow for values to always be appended to the end of the
    // buffer.
    buffer_.push_back(buf[i]);
  }
}

void DataStream::DoRead(char* ch, std::size_t bufsize) {
  for (uint32_t i = 0; i < bufsize; i++) {
    ch[i] = buffer_.at(read_pos_ + i);
  }
}

// write stuff
DataStream& DataStream::operator<<(char c) {
  WriteAlgorithm(c);
  return *this;
}

DataStream& DataStream::operator<<(uint8_t c) {
  WriteAlgorithm(c);
  return *this;
}

DataStream& DataStream::operator<<(float f) {
  WriteAlgorithm(f);
  return *this;
}

DataStream& DataStream::operator<<(double d) {
  WriteAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator<<(int d) {
  WriteAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator<<(uint32_t d) {
  WriteAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator<<(int64_t d) {
  WriteAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator<<(uint64_t d) {
  WriteAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator<<(uint16_t d) {
  WriteAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator<<(int16_t d) {
  WriteAlgorithm(d);
  return *this;
}

// read stuff
DataStream& DataStream::operator>>(char& c) {
  ReadAlgorithm(c);
  return *this;
}

DataStream& DataStream::operator>>(uint8_t& c) {
  ReadAlgorithm(c);
  return *this;
}

DataStream& DataStream::operator>>(float& f) {
  ReadAlgorithm(f);
  return *this;
}

DataStream& DataStream::operator>>(double& d) {
  ReadAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator>>(int& d) {
  ReadAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator>>(uint32_t& d) {
  ReadAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator>>(int64_t& d) {
  ReadAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator>>(uint64_t& d) {
  ReadAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator>>(uint16_t& d) {
  ReadAlgorithm(d);
  return *this;
}

DataStream& DataStream::operator>>(int16_t& d) {
  ReadAlgorithm(d);
  return *this;
}

}  // namespace dis
