#include "libdis6/simulation_management_reliable/RemoveEntityReliablePdu.h"

namespace dis {
RemoveEntityReliablePdu::RemoveEntityReliablePdu()
    : required_reliability_service_(0), pad1_(0), pad2_(0), request_id_(0) {
  SetPduType(52);
}

uint8_t RemoveEntityReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void RemoveEntityReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint16_t RemoveEntityReliablePdu::GetPad1() const { return pad1_; }

void RemoveEntityReliablePdu::SetPad1(uint16_t value) { pad1_ = value; }

uint8_t RemoveEntityReliablePdu::GetPad2() const { return pad2_; }

void RemoveEntityReliablePdu::SetPad2(uint8_t value) { pad2_ = value; }

uint32_t RemoveEntityReliablePdu::GetRequestId() const { return request_id_; }

void RemoveEntityReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

void RemoveEntityReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << pad2_;
  data_stream << request_id_;
}

void RemoveEntityReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> pad2_;
  data_stream >> request_id_;
}

bool RemoveEntityReliablePdu::operator==(
    const RemoveEntityReliablePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SimulationManagementWithReliabilityFamilyPdu::operator==(rhs);

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

std::size_t RemoveEntityReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(required_reliability_service_) + sizeof(pad1_) + sizeof(pad2_) +
      sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
