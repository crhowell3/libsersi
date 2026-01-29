#include "libsersi/common/BurstDescriptor.h"

namespace dis {
BurstDescriptor::BurstDescriptor()
    : warhead_(0), fuse_(0), quantity_(0), rate_(0) {}

dis::EntityType& BurstDescriptor::GetMunition() { return munition_; }

const dis::EntityType& BurstDescriptor::GetMunition() const {
  return munition_;
}

void BurstDescriptor::SetMunition(const dis::EntityType& value) { munition_ = value; }

uint16_t BurstDescriptor::GetWarhead() const { return warhead_; }

void BurstDescriptor::SetWarhead(uint16_t value) { warhead_ = value; }

uint16_t BurstDescriptor::GetFuse() const { return fuse_; }

void BurstDescriptor::SetFuse(uint16_t value) { fuse_ = value; }

uint16_t BurstDescriptor::GetQuantity() const { return quantity_; }

void BurstDescriptor::SetQuantity(uint16_t value) { quantity_ = value; }

uint16_t BurstDescriptor::GetRate() const { return rate_; }

void BurstDescriptor::SetRate(uint16_t value) { rate_ = value; }

void BurstDescriptor::Marshal(ByteBuffer& byte_buffer) const {
  munition_.Marshal(byte_buffer);
  byte_buffer << warhead_;
  byte_buffer << fuse_;
  byte_buffer << quantity_;
  byte_buffer << rate_;
}

void BurstDescriptor::Unmarshal(ByteBuffer& byte_buffer) {
  munition_.Unmarshal(byte_buffer);
  byte_buffer >> warhead_;
  byte_buffer >> fuse_;
  byte_buffer >> quantity_;
  byte_buffer >> rate_;
}

bool BurstDescriptor::operator==(const BurstDescriptor& rhs) const {
  bool ivars_equal = true;

  if (!(munition_ == rhs.munition_)) {
    ivars_equal = false;
  }
  if (!(warhead_ == rhs.warhead_)) {
    ivars_equal = false;
  }
  if (!(fuse_ == rhs.fuse_)) {
    ivars_equal = false;
  }
  if (!(quantity_ == rhs.quantity_)) {
    ivars_equal = false;
  }
  if (!(rate_ == rhs.rate_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t BurstDescriptor::GetMarshalledSize() const {
  std::size_t marshal_size = munition_.GetMarshalledSize() + sizeof(warhead_) +
                        sizeof(fuse_) + sizeof(quantity_) + sizeof(rate_);
  return marshal_size;
}

}  // namespace dis
