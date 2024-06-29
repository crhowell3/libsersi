#include "dis6/synthetic_environment/Environment.h"

namespace dis {
Environment::Environment()
    : environment_type_(0),
      length_(0),
      index_(0),
      padding1_(0),
      geometry_(0),
      padding2_(0) {}

uint32_t Environment::GetEnvironmentType() const { return environment_type_; }

void Environment::SetEnvironmentType(uint32_t value) {
  environment_type_ = value;
}

uint8_t Environment::GetLength() const { return length_; }

void Environment::SetLength(uint8_t value) { length_ = value; }

uint8_t Environment::GetIndex() const { return index_; }

void Environment::SetIndex(uint8_t value) { index_ = value; }

uint8_t Environment::GetPadding1() const { return padding1_; }

void Environment::SetPadding1(uint8_t value) { padding1_ = value; }

uint8_t Environment::GetGeometry() const { return geometry_; }

void Environment::SetGeometry(uint8_t value) { geometry_ = value; }

uint8_t Environment::GetPadding2() const { return padding2_; }

void Environment::SetPadding2(uint8_t value) { padding2_ = value; }

void Environment::Marshal(DataStream& data_stream) const {
  data_stream << environment_type_;
  data_stream << length_;
  data_stream << index_;
  data_stream << padding1_;
  data_stream << geometry_;
  data_stream << padding2_;
}

void Environment::Unmarshal(DataStream& data_stream) {
  data_stream >> environment_type_;
  data_stream >> length_;
  data_stream >> index_;
  data_stream >> padding1_;
  data_stream >> geometry_;
  data_stream >> padding2_;
}

bool Environment::operator==(const Environment& rhs) const {
  bool ivars_equal = true;

  if (!(environment_type_ == rhs.environment_type_)) {
    ivars_equal = false;
  }
  if (!(length_ == rhs.length_)) {
    ivars_equal = false;
  }
  if (!(index_ == rhs.index_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(geometry_ == rhs.geometry_)) {
    ivars_equal = false;
  }
  if (!(padding2_ == rhs.padding2_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t Environment::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(environment_type_) + sizeof(length_) +
                             sizeof(index_) + sizeof(padding1_) +
                             sizeof(geometry_) + sizeof(padding2_);

  return marshal_size;
}

}  // namespace dis
