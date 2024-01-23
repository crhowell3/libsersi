#include "dis6/simulation_management_reliable/CreateEntityReliablePdu.h"

namespace dis {
CreateEntityReliablePdu::CreateEntityReliablePdu()
    : required_reliability_service_(0), pad1_(0), pad2_(0), request_id_(0) {
  SetPduType(51);
}

uint8_t CreateEntityReliablePdu::GetRequiredReliabilityService() const {
  return required_reliability_service_;
}

void CreateEntityReliablePdu::SetRequiredReliabilityService(uint8_t value) {
  required_reliability_service_ = value;
}

uint16_t CreateEntityReliablePdu::GetPad1() const { return pad1_; }

void CreateEntityReliablePdu::SetPad1(uint16_t value) { pad1_ = value; }

uint8_t CreateEntityReliablePdu::GetPad2() const { return pad2_; }

void CreateEntityReliablePdu::SetPad2(uint8_t value) { pad2_ = value; }

uint32_t CreateEntityReliablePdu::GetRequestId() const { return request_id_; }

void CreateEntityReliablePdu::SetRequestId(uint32_t value) {
  request_id_ = value;
}

void CreateEntityReliablePdu::Marshal(DataStream& data_stream) const {
  SimulationManagementWithReliabilityFamilyPdu::Marshal(data_stream);
  data_stream << required_reliability_service_;
  data_stream << pad1_;
  data_stream << pad2_;
  data_stream << request_id_;
}

void CreateEntityReliablePdu::Unmarshal(DataStream& data_stream) {
  SimulationManagementWithReliabilityFamilyPdu::Unmarshal(data_stream);
  data_stream >> required_reliability_service_;
  data_stream >> pad1_;
  data_stream >> pad2_;
  data_stream >> request_id_;
}

bool CreateEntityReliablePdu::operator==(
    const CreateEntityReliablePdu& rhs) const {
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

std::size_t CreateEntityReliablePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize() +
      sizeof(required_reliability_service_) + sizeof(pad1_) + sizeof(pad2_) +
      sizeof(request_id_);
  return marshal_size;
}

}  // namespace dis
