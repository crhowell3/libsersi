#include "dis6/logistics/RepairCompletePdu.h"

namespace dis {
RepairCompletePdu::RepairCompletePdu() : repair_(0), padding2_(0) {
  SetPduType(9);
}

RepairCompletePdu::~RepairCompletePdu() = default;

EntityID& RepairCompletePdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID& RepairCompletePdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void RepairCompletePdu::SetReceivingEntityId(const EntityID& value) {
  receiving_entity_id_ = value;
}

EntityID& RepairCompletePdu::GetRepairingEntityId() {
  return repairing_entity_id_;
}

const EntityID& RepairCompletePdu::GetRepairingEntityId() const {
  return repairing_entity_id_;
}

void RepairCompletePdu::SetRepairingEntityId(const EntityID& value) {
  repairing_entity_id_ = value;
}

uint16_t RepairCompletePdu::GetRepair() const { return repair_; }

void RepairCompletePdu::SetRepair(uint16_t value) { repair_ = value; }

int16_t RepairCompletePdu::GetPadding2() const { return padding2_; }

void RepairCompletePdu::SetPadding2(int16_t value) { padding2_ = value; }

void RepairCompletePdu::Marshal(DataStream& data_stream) const {
  LogisticsFamilyPdu::Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
  repairing_entity_id_.Marshal(data_stream);
  data_stream << repair_;
  data_stream << padding2_;
}

void RepairCompletePdu::Unmarshal(DataStream& data_stream) {
  LogisticsFamilyPdu::Unmarshal(
      data_stream);  // unmarshal information in superclass first
  receiving_entity_id_.Unmarshal(data_stream);
  repairing_entity_id_.Unmarshal(data_stream);
  data_stream >> repair_;
  data_stream >> padding2_;
}

bool RepairCompletePdu::operator==(const RepairCompletePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = LogisticsFamilyPdu::operator==(rhs);

  if (!(receiving_entity_id_ == rhs.receiving_entity_id_)) {
    ivars_equal = false;
  }
  if (!(repairing_entity_id_ == rhs.repairing_entity_id_)) {
    ivars_equal = false;
  }
  if (!(repair_ == rhs.repair_)) {
    ivars_equal = false;
  }
  if (!(padding2_ == rhs.padding2_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t RepairCompletePdu::GetMarshalledSize() const {
  std::size_t marshal_size = LogisticsFamilyPdu::GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize() +
                             repairing_entity_id_.GetMarshalledSize() +
                             sizeof(repair_) + sizeof(padding2_);
  return marshal_size;
}

}  // namespace dis
