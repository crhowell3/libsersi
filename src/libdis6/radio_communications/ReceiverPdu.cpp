#include "libdis6/radio_communications/ReceiverPdu.h"

namespace dis {
ReceiverPdu::ReceiverPdu()
    : receiver_state_(0),
      padding1_(0),
      received_power_(0.0),
      transmitter_radio_id_(0) {
  SetPduType(27);
}

uint16_t ReceiverPdu::GetReceiverState() const { return receiver_state_; }

void ReceiverPdu::SetReceiverState(uint16_t value) { receiver_state_ = value; }

uint16_t ReceiverPdu::GetPadding1() const { return padding1_; }

void ReceiverPdu::SetPadding1(uint16_t value) { padding1_ = value; }

float ReceiverPdu::GetReceivedPower() const { return received_power_; }

void ReceiverPdu::SetReceivedPower(float value) { received_power_ = value; }

EntityID& ReceiverPdu::GetTransmitterEntityId() {
  return transmitter_entity_id_;
}

const EntityID& ReceiverPdu::GetTransmitterEntityId() const {
  return transmitter_entity_id_;
}

void ReceiverPdu::SetTransmitterEntityId(const EntityID& value) {
  transmitter_entity_id_ = value;
}

uint16_t ReceiverPdu::GetTransmitterRadioId() const {
  return transmitter_radio_id_;
}

void ReceiverPdu::SetTransmitterRadioId(uint16_t value) {
  transmitter_radio_id_ = value;
}

void ReceiverPdu::Marshal(DataStream& data_stream) const {
  RadioCommunicationsFamilyPdu::Marshal(data_stream);
  data_stream << receiver_state_;
  data_stream << padding1_;
  data_stream << received_power_;
  transmitter_entity_id_.Marshal(data_stream);
  data_stream << transmitter_radio_id_;
}

void ReceiverPdu::Unmarshal(DataStream& data_stream) {
  RadioCommunicationsFamilyPdu::Unmarshal(data_stream);
  data_stream >> receiver_state_;
  data_stream >> padding1_;
  data_stream >> received_power_;
  transmitter_entity_id_.Unmarshal(data_stream);
  data_stream >> transmitter_radio_id_;
}

bool ReceiverPdu::operator==(const ReceiverPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = RadioCommunicationsFamilyPdu::operator==(rhs);

  if (!(receiver_state_ == rhs.receiver_state_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(received_power_ == rhs.received_power_)) {
    ivars_equal = false;
  }
  if (!(transmitter_entity_id_ == rhs.transmitter_entity_id_)) {
    ivars_equal = false;
  }
  if (!(transmitter_radio_id_ == rhs.transmitter_radio_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t ReceiverPdu::GetMarshalledSize() const {
  std::size_t marshal_size = RadioCommunicationsFamilyPdu::GetMarshalledSize() +
                             sizeof(receiver_state_) + sizeof(padding1_) +
                             sizeof(received_power_) +
                             transmitter_entity_id_.GetMarshalledSize() +
                             sizeof(transmitter_radio_id_);
  return marshal_size;
}

}  // namespace dis
