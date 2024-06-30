#include "libdis6/synthetic_environment/GridAxisRecordRepresentation2.h"

namespace dis {
GridAxisRecordRepresentation2::GridAxisRecordRepresentation2()
    : number_of_values_(0) {}

GridAxisRecordRepresentation2::~GridAxisRecordRepresentation2() {
  data_values_.clear();
}

uint16_t GridAxisRecordRepresentation2::GetNumberOfValues() const {
  return data_values_.size();
}

std::vector<uint32_t>& GridAxisRecordRepresentation2::GetDataValues() {
  return data_values_;
}

const std::vector<uint32_t>& GridAxisRecordRepresentation2::GetDataValues()
    const {
  return data_values_;
}

void GridAxisRecordRepresentation2::SetDataValues(
    const std::vector<uint32_t>& value) {
  data_values_ = value;
}

void GridAxisRecordRepresentation2::Marshal(DataStream& data_stream) const {
  GridAxisRecord::Marshal(data_stream);
  data_stream << static_cast<uint16_t>(data_values_.size());

  for (const auto& x : data_values_) {
    data_stream << x;
  }
}

void GridAxisRecordRepresentation2::Unmarshal(DataStream& data_stream) {
  GridAxisRecord::Unmarshal(data_stream);
  data_stream >> number_of_values_;

  data_values_.clear();
  for (std::size_t idx = 0; idx < number_of_values_; idx++) {
    uint32_t x;
    data_stream >> x;
    data_values_.push_back(x);
  }
}

bool GridAxisRecordRepresentation2::operator==(
    const GridAxisRecordRepresentation2& rhs) const {
  bool ivars_equal = true;

  ivars_equal = GridAxisRecord::operator==(rhs);

  for (std::size_t idx = 0; idx < data_values_.size(); idx++) {
    if (!(data_values_[idx] == rhs.data_values_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t GridAxisRecordRepresentation2::GetMarshalledSize() const {
  std::size_t marshal_size =
      GridAxisRecord::GetMarshalledSize() + sizeof(number_of_values_);

  for (const uint32_t& list_element : data_values_) {
    marshal_size += sizeof(list_element);
  }

  return marshal_size;
}

}  // namespace dis
