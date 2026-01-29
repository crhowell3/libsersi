#include "libsersi/common/FixedDatum.h"

namespace dis {
FixedDatum::FixedDatum() : fixed_datum_id_(0), fixed_datum_value_(0) {}

uint32_t FixedDatum::GetFixedDatumId() const { return fixed_datum_id_; }

void FixedDatum::SetFixedDatumId(uint32_t value) { fixed_datum_id_ = value; }

uint32_t FixedDatum::GetFixedDatumValue() const { return fixed_datum_value_; }

void FixedDatum::SetFixedDatumValue(uint32_t value) { fixed_datum_value_ = value; }

Result<void, std::string> FixedDatum::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << fixed_datum_id_;
  byte_buffer << fixed_datum_value_;

  return Result<void, std::string>::Ok();
}

Result<void, std::string> FixedDatum::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> fixed_datum_id_;
  byte_buffer >> fixed_datum_value_;

  return Result<void, std::string>::Ok();
}

bool FixedDatum::operator==(const FixedDatum& rhs) const {
  bool ivars_equal = true;

  if (!(fixed_datum_id_ == rhs.fixed_datum_id_)) {
    ivars_equal = false;
  }
  if (!(fixed_datum_value_ == rhs.fixed_datum_value_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t FixedDatum::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(fixed_datum_id_) + sizeof(fixed_datum_value_);
  return marshal_size;
}

}  // namespace dis
