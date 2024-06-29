#include "dis6/common/RecordSet.h"

namespace dis {
RecordSet::RecordSet()
    : record_id_(0),
      record_set_serial_number_(0),
      record_length_(0),
      record_count_(0),
      record_values_(0),
      pad4_(0) {}

uint32_t RecordSet::GetRecordId() const { return record_id_; }

void RecordSet::SetRecordId(uint32_t value) { record_id_ = value; }

uint32_t RecordSet::GetRecordSetSerialNumber() const {
  return record_set_serial_number_;
}

void RecordSet::SetRecordSetSerialNumber(uint32_t value) {
  record_set_serial_number_ = value;
}

uint16_t RecordSet::GetRecordLength() const { return record_length_; }

void RecordSet::SetRecordLength(uint16_t value) { record_length_ = value; }

uint16_t RecordSet::GetRecordCount() const { return record_count_; }

void RecordSet::SetRecordCount(uint16_t value) { record_count_ = value; }

uint16_t RecordSet::GetRecordValues() const { return record_values_; }

void RecordSet::SetRecordValues(uint16_t value) { record_values_ = value; }

uint8_t RecordSet::GetPad4() const { return pad4_; }

void RecordSet::SetPad4(uint8_t value) { pad4_ = value; }

void RecordSet::Marshal(DataStream& data_stream) const {
  data_stream << record_id_;
  data_stream << record_set_serial_number_;
  data_stream << record_length_;
  data_stream << record_count_;
  data_stream << record_values_;
  data_stream << pad4_;
}

void RecordSet::Unmarshal(DataStream& data_stream) {
  data_stream >> record_id_;
  data_stream >> record_set_serial_number_;
  data_stream >> record_length_;
  data_stream >> record_count_;
  data_stream >> record_values_;
  data_stream >> pad4_;
}

bool RecordSet::operator==(const RecordSet& rhs) const {
  bool ivars_equal = true;

  if (!(record_id_ == rhs.record_id_)) {
    ivars_equal = false;
  }
  if (!(record_set_serial_number_ == rhs.record_set_serial_number_)) {
    ivars_equal = false;
  }
  if (!(record_length_ == rhs.record_length_)) {
    ivars_equal = false;
  }
  if (!(record_count_ == rhs.record_count_)) {
    ivars_equal = false;
  }
  if (!(record_values_ == rhs.record_values_)) {
    ivars_equal = false;
  }
  if (!(pad4_ == rhs.pad4_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t RecordSet::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(record_id_) +
                             sizeof(record_set_serial_number_) +
                             sizeof(record_length_) + sizeof(record_count_) +
                             sizeof(record_values_) + sizeof(pad4_);

  return marshal_size;
}

}  // namespace dis
