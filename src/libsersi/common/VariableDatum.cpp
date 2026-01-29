#include "libsersi/common/VariableDatum.h"

#include <exception>
#include <iostream>

namespace dis {
constexpr auto kBits = 8;

VariableDatum::VariableDatum()
    : variable_datum_id_(0),
      variable_datum_length_(0),
      variable_datums_(static_cast<std::size_t>(STATIC_ARRAY_LENGTH),
                       static_cast<char>(0)),  // can (theoretically) throw
      array_length_(0) {}

VariableDatum::~VariableDatum() { variable_datums_.clear(); }

uint32_t VariableDatum::GetVariableDatumId() const { return variable_datum_id_; }

void VariableDatum::SetVariableDatumId(uint32_t value) { variable_datum_id_ = value; }

uint32_t VariableDatum::GetVariableDatumLength() const { return variable_datum_length_; }

void VariableDatum::SetVariableDatumLength(uint32_t value) { variable_datum_length_ = value; }

char* VariableDatum::GetVariableDatums() { return variable_datums_.data(); }

const char* VariableDatum::GetVariableDatums() const { return variable_datums_.data(); }

void VariableDatum::SetVariableDatums(const char* value, const uint32_t length) {
  variable_datum_length_ = length * kBits;

  uint32_t chunks = length / kBits;
  const auto remainder = length % kBits;
  if (remainder > 0) {
    chunks++;
  }
  array_length_ = chunks * kBits;

  if (variable_datums_.size() < length) {
    try {
      variable_datums_.resize(length);
    } catch (const std::exception& e) {
      std::cerr << e.what() << '\n';
      return;
    }
  }

  for (uint32_t i = 0; i < length; ++i) {
    variable_datums_[i] = value[i];
  }
  for (uint32_t i = length; i < variable_datums_.size(); ++i) {
    variable_datums_[i] = 0;
  }
}

Result<void, std::string> VariableDatum::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << variable_datum_id_;
  byte_buffer << variable_datum_length_;

  for (uint32_t i = 0; i < array_length_; ++i) {
    byte_buffer << variable_datums_[i];
  }

  return Result<void, std::string>::Ok();
}

Result<void, std::string> VariableDatum::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> variable_datum_id_;
  byte_buffer >> variable_datum_length_;

  const auto byte_length = variable_datum_length_ / kBits;
  auto chunks = byte_length / kBits;
  if (byte_length % kBits > 0) {
    chunks++;
  }
  array_length_ = chunks * kBits;

  if (variable_datums_.size() < array_length_) {
    try {
      variable_datums_.resize(array_length_);
    } catch (const std::exception& e) {
      return Result<void, std::string>::Err(e.what());
    }
  }

  for (uint32_t idx = 0; idx < array_length_; idx++) {
    byte_buffer >> variable_datums_[idx];
  }
  for (uint64_t idx = array_length_; idx < variable_datums_.size(); idx++) {
    variable_datums_[idx] = 0;
  }

  return Result<void, std::string>::Ok();
}

bool VariableDatum::operator==(const VariableDatum& rhs) const {
  bool ivars_equal = true;

  if (!(variable_datum_id_ == rhs.variable_datum_id_)) {
    ivars_equal = false;
  }
  if (!(variable_datum_length_ == rhs.variable_datum_length_)) {
    ivars_equal = false;
  }
  if (!(variable_datums_.size() == rhs.variable_datums_.size())) {
    ivars_equal = false;
  } else {
    for (std::size_t i = 0; i < variable_datums_.size(); ++i) {
      if (!(variable_datums_[i] == rhs.variable_datums_[i])) {
        ivars_equal = false;
        break;
      }
    }
  }

  return ivars_equal;
}

std::size_t VariableDatum::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(variable_datum_id_) + sizeof(variable_datum_length_) + array_length_;
  return marshal_size;
}

}  // namespace dis
