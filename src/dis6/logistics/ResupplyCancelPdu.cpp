#include "dis6/logistics/ResupplyCancelPdu.h"

namespace dis {
ResupplyCancelPdu::ResupplyCancelPdu() { SetPduType(8); }

ResupplyCancelPdu::~ResupplyCancelPdu() = default;

EntityID& ResupplyCancelPdu::GetReceivingEntityId() {
  return receiving_entity_id_;
}

const EntityID& ResupplyCancelPdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void ResupplyCancelPdu::SetReceivingEntityId(const EntityID& value) {
  receiving_entity_id_ = value;
}

EntityID& ResupplyCancelPdu::GetSupplyingEntityId() {
  return supplying_entity_id_;
}

const EntityID& ResupplyCancelPdu::GetSupplyingEntityId() const {
  return supplying_entity_id_;
}

void ResupplyCancelPdu::SetSupplyingEntityId(const EntityID& value) {
  supplying_entity_id_ = value;
}

void ResupplyCancelPdu::Marshal(DataStream& data_stream) const {
  LogisticsFamilyPdu::Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
  supplying_entity_id_.Marshal(data_stream);
}

void ResupplyCancelPdu::Unmarshal(DataStream& data_stream) {
  LogisticsFamilyPdu::Unmarshal(data_stream);
  receiving_entity_id_.Unmarshal(data_stream);
  supplying_entity_id_.Unmarshal(data_stream);
}

bool ResupplyCancelPdu::operator==(const ResupplyCancelPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = LogisticsFamilyPdu::operator==(rhs);

  if (!(receiving_entity_id_ == rhs.receiving_entity_id_)) {
    ivars_equal = false;
  }
  if (!(supplying_entity_id_ == rhs.supplying_entity_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t ResupplyCancelPdu::GetMarshalledSize() const {
  std::size_t marshal_size = LogisticsFamilyPdu::GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize() +
                             supplying_entity_id_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
