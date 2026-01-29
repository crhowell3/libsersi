#include "libsersi/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"

namespace dis {
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
    ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);  // Marshal information in superclass first
  originating_entity_id_.Marshal(byte_buffer);
  receiving_entity_id_.Marshal(byte_buffer);
}

void SimulationManagementWithReliabilityFamilyPdu::Unmarshal(
    ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);  // unmarshal information in superclass first
  originating_entity_id_.Unmarshal(byte_buffer);
  receiving_entity_id_.Unmarshal(byte_buffer);
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
