#include "libdis6/simulation_management/AcknowledgePdu.h"

namespace dis {
AcknowledgePdu::AcknowledgePdu()
    : acknowledge_flag_(0), response_flag_(0), request_id_(0) {
  SetPduType(15);
}

uint16_t AcknowledgePdu::GetAcknowledgeFlag() const {
  return acknowledge_flag_;
}

void AcknowledgePdu::SetAcknowledgeFlag(uint16_t value) {
  acknowledge_flag_ = value;
}

uint16_t AcknowledgePdu::GetResponseFlag() const { return response_flag_; }

void AcknowledgePdu::SetResponseFlag(uint16_t value) { response_flag_ = value; }

uint32_t AcknowledgePdu::GetRequestId() const { return request_id_; }

void AcknowledgePdu::SetRequestId(uint32_t value) { request_id_ = value; }

void AcknowledgePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementFamilyPdu::Marshal(data_stream);
  data_stream << acknowledge_flag_;
  data_stream << response_flag_;
  data_stream << request_id_;
}

void AcknowledgePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementFamilyPdu::Unmarshal(data_stream);
  data_stream >> acknowledge_flag_;
  data_stream >> response_flag_;
  data_stream >> request_id_;
}

bool AcknowledgePdu::operator==(const AcknowledgePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

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

std::size_t AcknowledgePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() +
      sizeof(acknowledge_flag_) + sizeof(response_flag_) + sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
