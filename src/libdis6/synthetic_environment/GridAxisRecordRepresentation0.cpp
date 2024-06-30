#include "libdis6/synthetic_environment/GridAxisRecordRepresentation0.h"

namespace dis {
GridAxisRecordRepresentation0::GridAxisRecordRepresentation0()
    : number_of_bytes_(0) {}

GridAxisRecordRepresentation0::~GridAxisRecordRepresentation0() {
  data_values_.clear();
}

uint16_t GridAxisRecordRepresentation0::GetNumberOfBytes() const {
  return data_values_.size();
}

std::vector<uint8_t>& GridAxisRecordRepresentation0::GetDataValues() {
  return data_values_;
}

const std::vector<uint8_t>& GridAxisRecordRepresentation0::GetDataValues()
    const {
  return data_values_;
}

void GridAxisRecordRepresentation0::SetDataValues(
    const std::vector<uint8_t>& value) {
  data_values_ = value;
}

void GridAxisRecordRepresentation0::Marshal(DataStream& data_stream) const {
  GridAxisRecord::Marshal(data_stream);
  data_stream << static_cast<uint16_t>(data_values_.size());

  for (const auto& byte : data_values_) {
    data_stream << byte;
  }
}

void GridAxisRecordRepresentation0::Unmarshal(DataStream& data_stream) {
  GridAxisRecord::Unmarshal(data_stream);
  data_stream >> number_of_bytes_;

  data_values_.clear();
  for (auto idx = 0; idx < number_of_bytes_; ++idx) {
    uint8_t x;
    data_stream >> x;
    data_values_.push_back(x);
  }
}

bool GridAxisRecordRepresentation0::operator==(
    const GridAxisRecordRepresentation0& rhs) const {
  auto ivars_equal = true;

  ivars_equal =
      GridAxisRecord::operator==(rhs) && data_values_ == rhs.data_values_;

  return ivars_equal;
}

std::size_t GridAxisRecordRepresentation0::GetMarshalledSize() const {
  std::size_t marshal_size =
      GridAxisRecord::GetMarshalledSize() + sizeof(number_of_bytes_);
  for (auto byte : data_values_) {
    marshal_size += sizeof(byte);
  }

  return marshal_size;
}

}  // namespace dis
