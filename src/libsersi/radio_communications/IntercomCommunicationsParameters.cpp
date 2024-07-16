#include "libsersi/radio_communications/IntercomCommunicationsParameters.h"

namespace dis {
IntercomCommunicationsParameters::IntercomCommunicationsParameters()
    : record_type_(0), record_length_(0), record_specific_field_(0) {}

uint16_t IntercomCommunicationsParameters::GetRecordType() const {
  return record_type_;
}

void IntercomCommunicationsParameters::SetRecordType(uint16_t value) {
  record_type_ = value;
}

uint16_t IntercomCommunicationsParameters::GetRecordLength() const {
  return record_length_;
}

void IntercomCommunicationsParameters::SetRecordLength(uint16_t value) {
  record_length_ = value;
}

uint32_t IntercomCommunicationsParameters::GetRecordSpecificField() const {
  return record_specific_field_;
}

void IntercomCommunicationsParameters::SetRecordSpecificField(uint32_t value) {
  record_specific_field_ = value;
}

void IntercomCommunicationsParameters::Marshal(DataStream& data_stream) const {
  data_stream << record_type_;
  data_stream << record_length_;
  data_stream << record_specific_field_;
}

void IntercomCommunicationsParameters::Unmarshal(DataStream& data_stream) {
  data_stream >> record_type_;
  data_stream >> record_length_;
  data_stream >> record_specific_field_;
}

bool IntercomCommunicationsParameters::operator==(
    const IntercomCommunicationsParameters& rhs) const {
  auto ivars_equal = true;

  if (!(record_type_ == rhs.record_type_)) {
    ivars_equal = false;
  }
  if (!(record_length_ == rhs.record_length_)) {
    ivars_equal = false;
  }
  if (!(record_specific_field_ == rhs.record_specific_field_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t IntercomCommunicationsParameters::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(record_type_) + sizeof(record_length_) +
                             sizeof(record_specific_field_);
  return marshal_size;
}

}  // namespace dis
