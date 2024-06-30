#include "libdis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"

namespace dis {
SimulationManagementWithReliabilityFamilyPdu::
    SimulationManagementWithReliabilityFamilyPdu() {
  SetProtocolFamily(10);
}

EntityID&
SimulationManagementWithReliabilityFamilyPdu::GetOriginatingEntityId() {
  return originating_entity_id_;
}

const EntityID&
SimulationManagementWithReliabilityFamilyPdu::GetOriginatingEntityId() const {
  return originating_entity_id_;
}

void SimulationManagementWithReliabilityFamilyPdu::SetOriginatingEntityId(
    const EntityID& value) {
  originating_entity_id_ = value;
}

EntityID& SimulationManagementWithReliabilityFamilyPdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID&
SimulationManagementWithReliabilityFamilyPdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void SimulationManagementWithReliabilityFamilyPdu::SetReceivingEntityId(
    const EntityID& value) {
  receiving_entity_id_ = value;
}

void SimulationManagementWithReliabilityFamilyPdu::Marshal(
    DataStream& data_stream) const {
  Pdu::Marshal(data_stream);  // Marshal information in superclass first
  originating_entity_id_.Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
}

void SimulationManagementWithReliabilityFamilyPdu::Unmarshal(
    DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);  // unmarshal information in superclass first
  originating_entity_id_.Unmarshal(data_stream);
  receiving_entity_id_.Unmarshal(data_stream);
}

bool SimulationManagementWithReliabilityFamilyPdu::operator==(
    const SimulationManagementWithReliabilityFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  if (!(originating_entity_id_ == rhs.originating_entity_id_)) {
    ivars_equal = false;
  }
  if (!(receiving_entity_id_ == rhs.receiving_entity_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t SimulationManagementWithReliabilityFamilyPdu::GetMarshalledSize()
    const {
  std::size_t marshal_size = Pdu::GetMarshalledSize() +
                             originating_entity_id_.GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
