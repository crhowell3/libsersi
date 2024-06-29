#include "dis6/entity_management/Relationship.h"

#include <cstddef>

namespace dis {
Relationship::Relationship() : nature_(0), position_(0) {}

uint16_t Relationship::GetNature() const { return nature_; }

void Relationship::SetNature(uint16_t value) { nature_ = value; }

uint16_t Relationship::GetPosition() const { return position_; }

void Relationship::SetPosition(uint16_t value) { position_ = value; }

void Relationship::Marshal(DataStream& data_stream) const {
  data_stream << nature_;
  data_stream << position_;
}

void Relationship::Unmarshal(DataStream& data_stream) {
  data_stream >> nature_;
  data_stream >> position_;
}

bool Relationship::operator==(const Relationship& rhs) const {
  bool ivars_equal = true;

  if (!(nature_ == rhs.nature_)) {
    ivars_equal = false;
  }
  if (!(position_ == rhs.position_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t Relationship::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(nature_) + sizeof(position_);
  return marshal_size;
}

}  // namespace dis
