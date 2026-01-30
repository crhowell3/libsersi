#include simulation_management/SimulationManagementFamilyPdu.h"

namespace dis {
EntityID& SimulationManagementFamilyPdu::GetOriginatingEntityId() {
  return originating_entity_id_;
}

const EntityID& SimulationManagementFamilyPdu::GetOriginatingEntityId() const {
  return originating_entity_id_;
}

void SimulationManagementFamilyPdu::SetOriginatingEntityId(
    const EntityID& value) {
  originating_entity_id_ = value;
}

EntityID& SimulationManagementFamilyPdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID& SimulationManagementFamilyPdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void SimulationManagementFamilyPdu::SetReceivingEntityId(
    const EntityID& value) {
  receiving_entity_id_ = value;
}

void SimulationManagementFamilyPdu::Marshal(ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);
  originating_entity_id_.Marshal(byte_buffer);
  receiving_entity_id_.Marshal(byte_buffer);
}

void SimulationManagementFamilyPdu::Unmarshal(ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);
  originating_entity_id_.Unmarshal(byte_buffer);
  receiving_entity_id_.Unmarshal(byte_buffer);
}

bool SimulationManagementFamilyPdu::operator==(
    const SimulationManagementFamilyPdu& rhs) const {
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

std::size_t SimulationManagementFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize() +
                             originating_entity_id_.GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
