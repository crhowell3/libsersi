#include "libdis6/simulation_management_reliable/StartResumeReliablePdu.h"

namespace dis {
StartResumeReliablePdu::StartResumeReliablePdu()
    : required_reliability_service_(0), pad1_(0), pad2_(0), request_id_(0) {
  SetPduType(53);
}

StartResumeReliablePdu::~StartResumeReliablePdu() = default;

ClockTime& StartResumeReliablePdu::GetRealWorldTime() {
  return real_world_time_;
}

const ClockTime& StartResumeReliablePdu::GetRealWorldTime() const {
  return real_world_time_;
}

void StartResumeReliablePdu::SetRealWorldTime(const ClockTime& value) {
  real_world_time_ = value;
}

ClockTime& StartResumeReliablePdu::GetSimulationTime() {
  return simulation_time_;
}

const ClockTime& StartResumeReliablePdu::GetSimulationTime() const {
  return simulation_time_;
}

void StartResumeReliablePdu::SetSimulationTime(const ClockTime& value) {
  simulation_time_ = value;
}

uint8_t StartResumeReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void StartResumeReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint16_t StartResumeReliablePdu::GetPad1() const { return pad1_; }

void StartResumeReliablePdu::SetPad1(uint16_t value) { pad1_ = value; }

uint8_t StartResumeReliablePdu::GetPad2() const { return pad2_; }

void StartResumeReliablePdu::SetPad2(uint8_t value) { pad2_ = value; }

uint32_t StartResumeReliablePdu::GetRequestId() const { return request_id_; }

void StartResumeReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

void StartResumeReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  real_world_time_.Marshal(data_stream);
  simulation_time_.Marshal(data_stream);
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << pad2_;
  data_stream << request_id_;
}

void StartResumeReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  real_world_time_.Unmarshal(data_stream);
  simulation_time_.Unmarshal(data_stream);
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> pad2_;
  data_stream >> request_id_;
}

bool StartResumeReliablePdu::operator==(
    const StartResumeReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

  if (!(real_world_time_ == rhs.real_world_time_)) {
    ivars_equal = false;
  }
  if (!(simulation_time_ == rhs.simulation_time_)) {
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
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t StartResumeReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      real_world_time_.GetMarshalledSize() +
      simulation_time_.GetMarshalledSize() +
      sizeof(required_reliability_service_) + sizeof(pad1_) + sizeof(pad2_) +
      sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
