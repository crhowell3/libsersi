#include "libsersi/simulation_management_reliable/SetRecordReliablePdu.h"

namespace dis {
SetRecordReliablePdu::SetRecordReliablePdu()
    : request_id_(0),
      required_reliability_service_(0),
      pad1_(0),
      pad2_(0),
      number_of_record_sets_(0) {
  SetPduType(64);
}

SetRecordReliablePdu::~SetRecordReliablePdu() { record_sets_.clear(); }

uint32_t SetRecordReliablePdu::GetRequestId() const { return request_id_; }

void SetRecordReliablePdu::SetRequestId(uint32_t value) { request_id_ = value; }

uint8_t SetRecordReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void SetRecordReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint16_t SetRecordReliablePdu::GetPad1() const { return pad1_; }

void SetRecordReliablePdu::SetPad1(uint16_t value) { pad1_ = value; }

uint8_t SetRecordReliablePdu::GetPad2() const { return pad2_; }

void SetRecordReliablePdu::SetPad2(uint8_t value) { pad2_ = value; }

uint32_t SetRecordReliablePdu::GetNumberOfRecordSets() const {
  return record_sets_.size();
}

std::vector<RecordSet>& SetRecordReliablePdu::GetRecordSets() {
  return record_sets_;
}

const std::vector<RecordSet>& SetRecordReliablePdu::GetRecordSets() const {
  return record_sets_;
}

void SetRecordReliablePdu::SetRecordSets(const std::vector<RecordSet>& value) {
  record_sets_ = value;
}

void SetRecordReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << request_id_;
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << pad2_;
  data_stream << static_cast<uint32_t>(record_sets_.size());

  for (auto x : record_sets_) {
    x.Marshal(data_stream);
  }
}

void SetRecordReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> request_id_;
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> pad2_;
  data_stream >> number_of_record_sets_;

  record_sets_.clear();
  for (std::size_t idx = 0; idx < number_of_record_sets_; idx++) {
    RecordSet x;
    x.Unmarshal(data_stream);
    record_sets_.push_back(x);
  }
}

bool SetRecordReliablePdu::operator==(const SetRecordReliablePdu& rhs) const {
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

  for (std::size_t idx = 0; idx < record_sets_.size(); idx++) {
    if (!(record_sets_[idx] == rhs.record_sets_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t SetRecordReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(request_id_) + sizeof(required_reliability_service_) +
      sizeof(pad1_) + sizeof(pad2_) + sizeof(number_of_record_sets_);

  for (auto list_element : record_sets_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
