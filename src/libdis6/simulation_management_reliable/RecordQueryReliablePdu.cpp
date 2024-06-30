#include "libdis6/simulation_management_reliable/RecordQueryReliablePdu.h"

namespace dis {
RecordQueryReliablePdu::RecordQueryReliablePdu()
    : request_id_(0),
      required_reliability_service_(0),
      pad1_(0),
      pad2_(0),
      event_type_(0),
      time_(0),
      number_of_records_(0) {
  SetPduType(63);
}

RecordQueryReliablePdu::~RecordQueryReliablePdu() { record_ids_.clear(); }

uint32_t RecordQueryReliablePdu::GetRequestId() const { return request_id_; }

void RecordQueryReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

uint8_t RecordQueryReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void RecordQueryReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint16_t RecordQueryReliablePdu::GetPad1() const { return pad1_; }

void RecordQueryReliablePdu::SetPad1(uint16_t value) { pad1_ = value; }

uint8_t RecordQueryReliablePdu::GetPad2() const { return pad2_; }

void RecordQueryReliablePdu::SetPad2(uint8_t value) { pad2_ = value; }

uint16_t RecordQueryReliablePdu::GetEventType() const { return event_type_; }

void RecordQueryReliablePdu::SetEventType(uint16_t value) {
  event_type_ = value;
}

uint32_t RecordQueryReliablePdu::GetTime() const { return time_; }

void RecordQueryReliablePdu::SetTime(uint32_t value) { time_ = value; }

uint32_t RecordQueryReliablePdu::GetNumberOfRecords() const {
  return record_ids_.size();
}

std::vector<uint32_t>& RecordQueryReliablePdu::GetRecordIDs() {
  return record_ids_;
}

const std::vector<uint32_t>& RecordQueryReliablePdu::GetRecordIDs() const {
  return record_ids_;
}

void RecordQueryReliablePdu::SetRecordIDs(const std::vector<uint32_t>& value) {
  record_ids_ = value;
}

void RecordQueryReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << request_id_;
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << pad2_;
  data_stream << event_type_;
  data_stream << time_;
  data_stream << static_cast<uint32_t>(record_ids_.size());

  for (unsigned int x : record_ids_) {
    data_stream << x;
  }
}

void RecordQueryReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> request_id_;
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> pad2_;
  data_stream >> event_type_;
  data_stream >> time_;
  data_stream >> number_of_records_;

  record_ids_.clear();
  for (std::size_t idx = 0; idx < number_of_records_; idx++) {
    uint32_t x;
    data_stream >> x;
    record_ids_.push_back(x);
  }
}

bool RecordQueryReliablePdu::operator==(
    const RecordQueryReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(required_reliability_service_ == rhs.required_reliability_service_)) {
    ivars_equal = false;
  }
  if (!(pad1_ == rhs.pad1_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(event_type_ == rhs.event_type_)) {
    ivars_equal = false;
  }
  if (!(time_ == rhs.time_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < record_ids_.size(); idx++) {
    if (!(record_ids_[idx] == rhs.record_ids_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t RecordQueryReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(request_id_) + sizeof(required_reliability_service_) +
      sizeof(pad1_) + sizeof(pad2_) + sizeof(event_type_) + sizeof(time_) +
      sizeof(number_of_records_);

  for (uint32_t list_element : record_ids_) {
    marshal_size += sizeof(list_element);
  }

  return marshal_size;
}

}  // namespace dis
