#include "dis6/simulation_management/StartResumePdu.h"

namespace dis {
StartResumePdu::StartResumePdu() : request_id_(0) { SetPduType(13); }

ClockTime& StartResumePdu::GetRealWorldTime() { return real_world_time_; }

const ClockTime& StartResumePdu::GetRealWorldTime() const {
  return real_world_time_;
}

void StartResumePdu::SetRealWorldTime(const ClockTime& value) {
  real_world_time_ = value;
}

ClockTime& StartResumePdu::GetSimulationTime() { return simulation_time_; }

const ClockTime& StartResumePdu::GetSimulationTime() const {
  return simulation_time_;
}

void StartResumePdu::SetSimulationTime(const ClockTime& value) {
  simulation_time_ = value;
}

uint32_t StartResumePdu::GetRequestId() const { return request_id_; }

void StartResumePdu::SetRequestId(uint32_t value) { request_id_ = value; }

void StartResumePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementFamilyPdu::Marshal(data_stream);
  real_world_time_.Marshal(data_stream);
  simulation_time_.Marshal(data_stream);
  data_stream << request_id_;
}

void StartResumePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementFamilyPdu::Unmarshal(data_stream);
  real_world_time_.Unmarshal(data_stream);
  simulation_time_.Unmarshal(data_stream);
  data_stream >> request_id_;
}

bool StartResumePdu::operator==(const StartResumePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementFamilyPdu::operator==(rhs);

  if (!(real_world_time_ == rhs.real_world_time_)) {
    ivars_equal = false;
  }
  if (!(simulation_time_ == rhs.simulation_time_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t StartResumePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementFamilyPdu::GetMarshalledSize() +
      real_world_time_.GetMarshalledSize() +
      simulation_time_.GetMarshalledSize() + sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
