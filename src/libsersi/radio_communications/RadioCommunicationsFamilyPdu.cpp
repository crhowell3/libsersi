#include "libsersi/radio_communications/RadioCommunicationsFamilyPdu.h"

namespace dis {
EntityID& RadioCommunicationsFamilyPdu::GetEntityId() { return entity_id_; }

const EntityID& RadioCommunicationsFamilyPdu::GetEntityId() const {
  return entity_id_;
}

void RadioCommunicationsFamilyPdu::SetEntityId(const EntityID& value) {
  entity_id_ = value;
}

uint16_t RadioCommunicationsFamilyPdu::GetRadioId() const { return radio_id_; }

void RadioCommunicationsFamilyPdu::SetRadioId(uint16_t value) {
  radio_id_ = value;
}

void RadioCommunicationsFamilyPdu::Marshal(ByteBuffer& byte_buffer) const {
  Pdu::Marshal(byte_buffer);
  entity_id_.Marshal(byte_buffer);
  byte_buffer << radio_id_;
}

void RadioCommunicationsFamilyPdu::Unmarshal(ByteBuffer& byte_buffer) {
  Pdu::Unmarshal(byte_buffer);
  entity_id_.Unmarshal(byte_buffer);
  byte_buffer >> radio_id_;
}

bool RadioCommunicationsFamilyPdu::operator==(
    const RadioCommunicationsFamilyPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = Pdu::operator==(rhs);

  if (!(entity_id_ == rhs.entity_id_)) {
    ivars_equal = false;
  }
  if (!(radio_id_ == rhs.radio_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t RadioCommunicationsFamilyPdu::GetMarshalledSize() const {
  std::size_t marshal_size = Pdu::GetMarshalledSize() +
                             entity_id_.GetMarshalledSize() + sizeof(radio_id_);
  return marshal_size;
}

}  // namespace dis
