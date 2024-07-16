#include "libsersi/synthetic_environment/GridAxisRecordRepresentation1.h"

namespace dis {
GridAxisRecordRepresentation1::GridAxisRecordRepresentation1()
    : field_scale_(0.0), field_offset_(0.0), number_of_values_(0) {}

GridAxisRecordRepresentation1::~GridAxisRecordRepresentation1() {
  data_values_.clear();
}

float GridAxisRecordRepresentation1::GetFieldScale() const {
  return field_scale_;
}

void GridAxisRecordRepresentation1::SetFieldScale(float value) {
  field_scale_ = value;
}

float GridAxisRecordRepresentation1::GetFieldOffset() const {
  return field_offset_;
}

void GridAxisRecordRepresentation1::SetFieldOffset(float value) {
  field_offset_ = value;
}

uint16_t GridAxisRecordRepresentation1::GetNumberOfValues() const {
  return data_values_.size();
}

std::vector<uint16_t>& GridAxisRecordRepresentation1::GetDataValues() {
  return data_values_;
}

const std::vector<uint16_t>& GridAxisRecordRepresentation1::GetDataValues()
    const {
  return data_values_;
}

void GridAxisRecordRepresentation1::SetDataValues(
    const std::vector<uint16_t>& value) {
  data_values_ = value;
}

void GridAxisRecordRepresentation1::Marshal(DataStream& data_stream) const {
  GridAxisRecord::Marshal(data_stream);
  data_stream << field_scale_;
  data_stream << field_offset_;
  data_stream << static_cast<uint16_t>(data_values_.size());

  for (const auto& x : data_values_) {
    data_stream << x;
  }
}

void GridAxisRecordRepresentation1::Unmarshal(DataStream& data_stream) {
  GridAxisRecord::Unmarshal(data_stream);
  data_stream >> field_scale_;
  data_stream >> field_offset_;
  data_stream >> number_of_values_;

  data_values_.clear();
  for (std::size_t idx = 0; idx < number_of_values_; idx++) {
    uint16_t x;
    data_stream >> x;
    data_values_.push_back(x);
  }
}

bool GridAxisRecordRepresentation1::operator==(
    const GridAxisRecordRepresentation1& rhs) const {
  bool ivars_equal = true;

  ivars_equal = GridAxisRecord::operator==(rhs);

  if (!(field_scale_ == rhs.field_scale_)) {
    ivars_equal = false;
  }
  if (!(field_offset_ == rhs.field_offset_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < data_values_.size(); idx++) {
    if (!(data_values_[idx] == rhs.data_values_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t GridAxisRecordRepresentation1::GetMarshalledSize() const {
  std::size_t marshal_size = GridAxisRecord::GetMarshalledSize() +
                             sizeof(field_scale_) + sizeof(field_offset_) +
                             sizeof(number_of_values_);

  for (const uint16_t& list_element : data_values_) {
    marshal_size += sizeof(list_element);
  }

  return marshal_size;
}

}  // namespace dis
