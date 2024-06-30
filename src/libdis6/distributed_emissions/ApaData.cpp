#include "libdis6/distributed_emissions/ApaData.h"

#include <cstddef>

namespace dis {
ApaData::ApaData() : parameter_index_(0), parameter_value_(0) {}

uint16_t ApaData::GetParameterIndex() const { return parameter_index_; }

void ApaData::SetParameterIndex(uint16_t value) { parameter_index_ = value; }

int16_t ApaData::GetParameterValue() const { return parameter_value_; }

void ApaData::SetParameterValue(int16_t value) { parameter_value_ = value; }

void ApaData::Marshal(DataStream& data_stream) const {
  data_stream << parameter_index_;
  data_stream << parameter_value_;
}

void ApaData::Unmarshal(DataStream& data_stream) {
  data_stream >> parameter_index_;
  data_stream >> parameter_value_;
}

bool ApaData::operator==(const ApaData& rhs) const {
  bool ivars_equal = true;

  if (!(parameter_index_ == rhs.parameter_index_)) {
    ivars_equal = false;
  }
  if (!(parameter_value_ == rhs.parameter_value_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t ApaData::GetMarshalledSize() {
  std::size_t marshal_size =
      sizeof(parameter_index_) + sizeof(parameter_value_);
  return marshal_size;
}

}  // namespace dis
