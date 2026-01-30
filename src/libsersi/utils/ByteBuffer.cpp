#include utils/ByteBuffer.hpp"

namespace dis {

ByteBuffer::ByteBuffer(Endian stream)
    : read_pos_(0),
      write_pos_(0),
      stream_endian_(stream),
      machine_endian_(Endian::kLittle) {
  int32_t one(1);
  char e = (reinterpret_cast<char*>(&one))[0];

  if (e == static_cast<char>(1)) {
    machine_endian_ = Endian::kLittle;
  } else {
    machine_endian_ = Endian::kBig;
  }
}

ByteBuffer::ByteBuffer(const char* buffer, std::size_t length, Endian stream)
    : read_pos_(0),
      write_pos_(0),
      stream_endian_(stream),
      machine_endian_(Endian::kLittle) {
  int32_t one(1);
  char e = (reinterpret_cast<char*>(&one))[0];

  if (e == static_cast<char>(1)) {
    machine_endian_ = Endian::kLittle;
  } else {
    machine_endian_ = Endian::kBig;
  }

  SetStream(buffer, length, stream);
}

Endian ByteBuffer::GetStreamEndian() const { return stream_endian_; }

Endian ByteBuffer::GetMachineEndian() const { return machine_endian_; }

std::size_t ByteBuffer::GetWritePos() const { return write_pos_; }

std::size_t ByteBuffer::GetReadPos() const { return read_pos_; }

std::size_t ByteBuffer::Size() const { return buffer_.size(); }

void ByteBuffer::Clear() {
  write_pos_ = 0;
  read_pos_ = 0;
  buffer_.clear();
}

bool ByteBuffer::Empty() const { return buffer_.empty(); }

const char& ByteBuffer::operator[](uint32_t offset) const {
  return buffer_[read_pos_ + offset];
}

// currently copies the source data.
void ByteBuffer::SetStream(const char* buffer, std::size_t length,
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

void ByteBuffer::DoFlip(char* buf, std::size_t bufsize) {
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

void ByteBuffer::DoWrite(const char* buf, std::size_t bufsize) {
  for (uint32_t i = 0; i < bufsize; ++i) {
    // ignores the write_pos_ value currently,
    // this should allow for values to always be appended to the end of the
    // buffer.
    buffer_.push_back(buf[i]);
  }
}

void ByteBuffer::DoRead(char* ch, std::size_t bufsize) {
  for (uint32_t i = 0; i < bufsize; i++) {
    ch[i] = buffer_.at(read_pos_ + i);
  }
}

// write stuff
ByteBuffer& ByteBuffer::operator<<(char c) {
  WriteAlgorithm(c);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(uint8_t c) {
  WriteAlgorithm(c);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(float f) {
  WriteAlgorithm(f);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(double d) {
  WriteAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(int d) {
  WriteAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(uint32_t d) {
  WriteAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(int64_t d) {
  WriteAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(uint64_t d) {
  WriteAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(uint16_t d) {
  WriteAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator<<(int16_t d) {
  WriteAlgorithm(d);
  return *this;
}

// read stuff
ByteBuffer& ByteBuffer::operator>>(char& c) {
  ReadAlgorithm(c);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(uint8_t& c) {
  ReadAlgorithm(c);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(float& f) {
  ReadAlgorithm(f);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(double& d) {
  ReadAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(int& d) {
  ReadAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(uint32_t& d) {
  ReadAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(int64_t& d) {
  ReadAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(uint64_t& d) {
  ReadAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(uint16_t& d) {
  ReadAlgorithm(d);
  return *this;
}

ByteBuffer& ByteBuffer::operator>>(int16_t& d) {
  ReadAlgorithm(d);
  return *this;
}

}  // namespace dis
