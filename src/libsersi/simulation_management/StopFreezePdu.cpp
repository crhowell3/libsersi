#include "libsersi/simulation_management/StopFreezePdu.h"

namespace dis {
StopFreezePdu::StopFreezePdu()
    : reason_(0), frozen_behavior_(0), padding1_(0), request_id_(0) {
  SetPduType(14);
}

ClockTime& StopFreezePdu::GetRealWorldTime() { return real_world_time_; }

const ClockTime& StopFreezePdu::GetRealWorldTime() const {
  return real_world_time_;
}

void StopFreezePdu::SetRealWorldTime(const ClockTime& value) {
  real_world_time_ = value;
}

uint8_t StopFreezePdu::GetReason() const { return reason_; }

void StopFreezePdu::SetReason(uint8_t value) { reason_ = value; }

uint8_t StopFreezePdu::GetFrozenBehavior() const { return frozen_behavior_; }

void StopFreezePdu::SetFrozenBehavior(uint8_t value) {
  frozen_behavior_ = value;
}

int16_t StopFreezePdu::GetPadding1() const { return padding1_; }

void StopFreezePdu::SetPadding1(int16_t value) { padding1_ = value; }

uint32_t StopFreezePdu::GetRequestId() const { return request_id_; }

void StopFreezePdu::SetRequestId(uint32_t value) { request_id_ = value; }

void StopFreezePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementFamilyPdu::Marshal(data_stream);
  real_world_time_.Marshal(data_stream);
  data_stream << reason_;
  data_stream << frozen_behavior_;
  data_stream << padding1_;
  data_stream << request_id_;
}

void StopFreezePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementFamilyPdu::Unmarshal(data_stream);
  real_world_time_.Unmarshal(data_stream);
  data_stream >> reason_;
  data_stream >> frozen_behavior_;
  data_stream >> padding1_;
  data_stream >> request_id_;
}

bool StopFreezePdu::operator==(const StopFreezePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

  if (!(real_world_time_ == rhs.real_world_time_)) {
    ivars_equal = false;
  }
  if (!(reason_ == rhs.reason_)) {
    ivars_equal = false;
  }
  if (!(frozen_behavior_ == rhs.frozen_behavior_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t StopFreezePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() +
      real_world_time_.GetMarshalledSize() + sizeof(reason_) +
      sizeof(frozen_behavior_) + sizeof(padding1_) + sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
