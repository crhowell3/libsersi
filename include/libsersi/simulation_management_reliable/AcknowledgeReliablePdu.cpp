#include "libsersi/simulation_management_reliable/AcknowledgeReliablePdu.h"

namespace dis {
AcknowledgeReliablePdu::AcknowledgeReliablePdu()
    : acknowledge_flag_(0), response_flag_(0), request_id_(0) {
  SetPduType(55);
}

uint16_t AcknowledgeReliablePdu::GetAcknowledgeFlag() const {
  return acknowledge_flag_;
}

void AcknowledgeReliablePdu::SetAcknowledgeFlag(uint16_t value) {
  acknowledge_flag_ = value;
}

uint16_t AcknowledgeReliablePdu::GetResponseFlag() const {
  return response_flag_;
}

void AcknowledgeReliablePdu::SetResponseFlag(uint16_t value) {
  response_flag_ = value;
}

uint32_t AcknowledgeReliablePdu::GetRequestId() const { return request_id_; }

void AcknowledgeReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

void AcknowledgeReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << acknowledge_flag_;
  data_stream << response_flag_;
  data_stream << request_id_;
}

void AcknowledgeReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> acknowledge_flag_;
  data_stream >> response_flag_;
  data_stream >> request_id_;
}

bool AcknowledgeReliablePdu::operator==(
    const AcknowledgeReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

  if (!(acknowledge_flag_ == rhs.acknowledge_flag_)) {
    ivars_equal = false;
  }
  if (!(response_flag_ == rhs.response_flag_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t AcknowledgeReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(acknowledge_flag_) + sizeof(response_flag_) + sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
