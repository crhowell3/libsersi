#include "libsersi/synthetic_environment/GridAxisRecord.h"

namespace dis {
GridAxisRecord::GridAxisRecord() : sample_type_(0), data_representation_(0) {}

GridAxisRecord::~GridAxisRecord() = default;

uint16_t GridAxisRecord::GetSampleType() const { return sample_type_; }

void GridAxisRecord::SetSampleType(uint16_t value) { sample_type_ = value; }

uint16_t GridAxisRecord::GetDataRepresentation() const {
  return data_representation_;
}

void GridAxisRecord::SetDataRepresentation(uint16_t value) {
  data_representation_ = value;
}

void GridAxisRecord::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << sample_type_;
  byte_buffer << data_representation_;
}

void GridAxisRecord::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> sample_type_;
  byte_buffer >> data_representation_;
}

bool GridAxisRecord::operator==(const GridAxisRecord& rhs) const {
  bool ivars_equal = true;

  if (!(sample_type_ == rhs.sample_type_)) {
    ivars_equal = false;
  }
  if (!(data_representation_ == rhs.data_representation_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t GridAxisRecord::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(sample_type_) + sizeof(data_representation_);
  return marshal_size;
}

}  // namespace dis
