#include "libsersi/simulation_management_reliable/StopFreezeReliablePdu.h"

namespace dis {
StopFreezeReliablePdu::StopFreezeReliablePdu()
    : reason_(0),
      frozen_behavior_(0),
      required_reliability_service_(0),
      pad1_(0),
      request_id_(0) {
  SetPduType(54);
}

ClockTime& StopFreezeReliablePdu::GetRealWorldTime() {
  return real_world_time_;
}

const ClockTime& StopFreezeReliablePdu::GetRealWorldTime() const {
  return real_world_time_;
}

void StopFreezeReliablePdu::SetRealWorldTime(const ClockTime& value) {
  real_world_time_ = value;
}

uint8_t StopFreezeReliablePdu::GetReason() const { return reason_; }

void StopFreezeReliablePdu::SetReason(uint8_t value) { reason_ = value; }

uint8_t StopFreezeReliablePdu::GetFrozenBehavior() const {
  return frozen_behavior_;
}

void StopFreezeReliablePdu::SetFrozenBehavior(uint8_t value) {
  frozen_behavior_ = value;
}

uint8_t StopFreezeReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void StopFreezeReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint8_t StopFreezeReliablePdu::GetPad1() const { return pad1_; }

void StopFreezeReliablePdu::SetPad1(uint8_t value) { pad1_ = value; }

uint32_t StopFreezeReliablePdu::GetRequestId() const { return request_id_; }

void StopFreezeReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

void StopFreezeReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  real_world_time_.Marshal(data_stream);
  data_stream << reason_;
  data_stream << frozen_behavior_;
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << request_id_;
}

void StopFreezeReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  real_world_time_.Unmarshal(data_stream);
  data_stream >> reason_;
  data_stream >> frozen_behavior_;
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> request_id_;
}

bool StopFreezeReliablePdu::operator==(const StopFreezeReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

  if (!(real_world_time_ == rhs.real_world_time_)) {
    ivars_equal = false;
  }
  if (!(reason_ == rhs.reason_)) {
    ivars_equal = false;
  }
  if (!(frozen_behavior_ == rhs.frozen_behavior_)) {
    ivars_equal = false;
  }
  if (!(required_reliability_service_ == rhs.required_reliability_service_)) {
    ivars_equal = false;
  }
  if (!(pad1_ == rhs.pad1_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t StopFreezeReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      real_world_time_.GetMarshalledSize() + sizeof(reason_) +
      sizeof(frozen_behavior_) + sizeof(required_reliability_service_) +
      sizeof(pad1_) + sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
