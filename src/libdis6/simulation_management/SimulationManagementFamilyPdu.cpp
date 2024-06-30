#include "libdis6/simulation_management/SimulationManagementFamilyPdu.h"

namespace dis {
SimulationManagementFamilyPdu::SimulationManagementFamilyPdu() {
  SetProtocolFamily(5);
}

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

void SimulationManagementFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);
  originating_entity_id_.Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
}

void SimulationManagementFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);
  originating_entity_id_.Unmarshal(data_stream);
  receiving_entity_id_.Unmarshal(data_stream);
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
