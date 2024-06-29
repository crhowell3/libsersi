#include "dis6/warfare/WarfareFamilyPdu.h"

namespace dis {
WarfareFamilyPdu::WarfareFamilyPdu() { SetProtocolFamily(2); }

EntityID& WarfareFamilyPdu::GetFiringEntityId() { return firing_entity_id_; }

const EntityID& WarfareFamilyPdu::GetFiringEntityId() const {
  return firing_entity_id_;
}

void WarfareFamilyPdu::SetFiringEntityId(const EntityID& value) {
  firing_entity_id_ = value;
}

EntityID& WarfareFamilyPdu::GetTargetEntityId() { return target_entity_id_; }

const EntityID& WarfareFamilyPdu::GetTargetEntityId() const {
  return target_entity_id_;
}

void WarfareFamilyPdu::SetTargetEntityId(const EntityID& value) {
  target_entity_id_ = value;
}

void WarfareFamilyPdu::Marshal(DataStream& data_stream) const {
  Pdu::Marshal(data_stream);  // Marshal information in superclass first
  firing_entity_id_.Marshal(data_stream);
  target_entity_id_.Marshal(data_stream);
}

void WarfareFamilyPdu::Unmarshal(DataStream& data_stream) {
  Pdu::Unmarshal(data_stream);  // unmarshal information in superclass first
  firing_entity_id_.Unmarshal(data_stream);
  target_entity_id_.Unmarshal(data_stream);
}

bool WarfareFamilyPdu::operator==(const WarfareFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  if (!(firing_entity_id_ == rhs.firing_entity_id_)) {
    ivars_equal = false;
  }
  if (!(target_entity_id_ == rhs.target_entity_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t WarfareFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize() +
                        firing_entity_id_.GetMarshalledSize() +
                        target_entity_id_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
