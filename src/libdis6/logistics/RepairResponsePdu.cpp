#include "libdis6/logistics/RepairResponsePdu.h"

namespace dis {
RepairResponsePdu::RepairResponsePdu()
    : repair_result_(0), padding1_(0), padding2_(0) {
  SetPduType(10);
}

RepairResponsePdu::~RepairResponsePdu() = default;

EntityID& RepairResponsePdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID& RepairResponsePdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void RepairResponsePdu::SetReceivingEntityId(const EntityID& value) {
  receiving_entity_id_ = value;
}

EntityID& RepairResponsePdu::GetRepairingEntityId() {
  return repairing_entity_id_;
}

const EntityID& RepairResponsePdu::GetRepairingEntityId() const {
  return repairing_entity_id_;
}

void RepairResponsePdu::SetRepairingEntityId(const EntityID& value) {
  repairing_entity_id_ = value;
}

uint8_t RepairResponsePdu::GetRepairResult() const { return repair_result_; }

void RepairResponsePdu::SetRepairResult(uint8_t value) {
  repair_result_ = value;
}

int16_t RepairResponsePdu::GetPadding1() const { return padding1_; }

void RepairResponsePdu::SetPadding1(int16_t value) { padding1_ = value; }

char RepairResponsePdu::GetPadding2() const { return padding2_; }

void RepairResponsePdu::SetPadding2(char value) { padding2_ = value; }

void RepairResponsePdu::Marshal(DataStream& data_stream) const {
  LogisticsFamilyPdu::Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
  repairing_entity_id_.Marshal(data_stream);
  data_stream << repair_result_;
  data_stream << padding1_;
  data_stream << padding2_;
}

void RepairResponsePdu::Unmarshal(DataStream& data_stream) {
  LogisticsFamilyPdu::Unmarshal(data_stream);
  receiving_entity_id_.Unmarshal(data_stream);
  repairing_entity_id_.Unmarshal(data_stream);
  data_stream >> repair_result_;
  data_stream >> padding1_;
  data_stream >> padding2_;
}

bool RepairResponsePdu::operator==(const RepairResponsePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = LogisticsFamilyPdu::operator==(rhs);

  if (!(receiving_entity_id_ == rhs.receiving_entity_id_)) {
    ivars_equal = false;
  }
  if (!(repairing_entity_id_ == rhs.repairing_entity_id_)) {
    ivars_equal = false;
  }
  if (!(repair_result_ == rhs.repair_result_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(padding2_ == rhs.padding2_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t RepairResponsePdu::GetMarshalledSize() const {
  std::size_t marshal_size = LogisticsFamilyPdu::GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize() +
                             repairing_entity_id_.GetMarshalledSize() +
                             sizeof(repair_result_) + sizeof(padding1_) +
                             sizeof(padding2_);
  return marshal_size;
}

}  // namespace dis
