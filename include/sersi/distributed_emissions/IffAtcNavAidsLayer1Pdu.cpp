#include "libsersi/distributed_emissions/IffAtcNavAidsLayer1Pdu.h"

namespace dis {
IffAtcNavAidsLayer1Pdu::IffAtcNavAidsLayer1Pdu() : pad2_(0) { SetPduType(28); }

EntityID& IffAtcNavAidsLayer1Pdu::GetEmittingEntityId() {
  return emitting_entity_id_;
}

const EntityID& IffAtcNavAidsLayer1Pdu::GetEmittingEntityId() const {
  return emitting_entity_id_;
}

void IffAtcNavAidsLayer1Pdu::SetEmittingEntityId(const EntityID& value) {
  emitting_entity_id_ = value;
}

EventID& IffAtcNavAidsLayer1Pdu::GetEventId() { return event_id_; }

const EventID& IffAtcNavAidsLayer1Pdu::GetEventId() const { return event_id_; }

void IffAtcNavAidsLayer1Pdu::SetEventId(const EventID& value) {
  event_id_ = value;
}

Vector3Float& IffAtcNavAidsLayer1Pdu::GetLocation() { return location_; }

const Vector3Float& IffAtcNavAidsLayer1Pdu::GetLocation() const {
  return location_;
}

void IffAtcNavAidsLayer1Pdu::SetLocation(const Vector3Float& value) {
  location_ = value;
}

SystemID& IffAtcNavAidsLayer1Pdu::GetSystemId() { return system_id_; }

const SystemID& IffAtcNavAidsLayer1Pdu::GetSystemId() const {
  return system_id_;
}

void IffAtcNavAidsLayer1Pdu::SetSystemId(const SystemID& value) {
  system_id_ = value;
}

uint16_t IffAtcNavAidsLayer1Pdu::GetPad2() const { return pad2_; }

void IffAtcNavAidsLayer1Pdu::SetPad2(uint16_t value) { pad2_ = value; }

IffFundamentalData& IffAtcNavAidsLayer1Pdu::GetFundamentalParameters() {
  return fundamental_parameters_;
}

const IffFundamentalData& IffAtcNavAidsLayer1Pdu::GetFundamentalParameters()
    const {
  return fundamental_parameters_;
}

void IffAtcNavAidsLayer1Pdu::SetFundamentalParameters(
    const IffFundamentalData& value) {
  fundamental_parameters_ = value;
}

void IffAtcNavAidsLayer1Pdu::Marshal(DataStream& data_stream) const {
  DistributedEmissionsFamilyPdu::Marshal(
      data_stream);  // Marshal information in superclass first
  emitting_entity_id_.Marshal(data_stream);
  event_id_.Marshal(data_stream);
  location_.Marshal(data_stream);
  system_id_.Marshal(data_stream);
  data_stream << pad2_;
  fundamental_parameters_.Marshal(data_stream);
}

void IffAtcNavAidsLayer1Pdu::Unmarshal(DataStream& data_stream) {
  DistributedEmissionsFamilyPdu::Unmarshal(
      data_stream);  // unmarshal information in superclass first
  emitting_entity_id_.Unmarshal(data_stream);
  event_id_.Unmarshal(data_stream);
  location_.Unmarshal(data_stream);
  system_id_.Unmarshal(data_stream);
  data_stream >> pad2_;
  fundamental_parameters_.Unmarshal(data_stream);
}

bool IffAtcNavAidsLayer1Pdu::operator==(
    const IffAtcNavAidsLayer1Pdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = DistributedEmissionsFamilyPdu::operator==(rhs);

  if (!(emitting_entity_id_ == rhs.emitting_entity_id_)) {
    ivars_equal = false;
  }
  if (!(event_id_ == rhs.event_id_)) {
    ivars_equal = false;
  }
  if (!(location_ == rhs.location_)) {
    ivars_equal = false;
  }
  if (!(system_id_ == rhs.system_id_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(fundamental_parameters_ == rhs.fundamental_parameters_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t IffAtcNavAidsLayer1Pdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      DistributedEmissionsFamilyPdu::GetMarshalledSize() +
      emitting_entity_id_.GetMarshalledSize() + event_id_.GetMarshalledSize() +
      location_.GetMarshalledSize() + system_id_.GetMarshalledSize() +
      sizeof(pad2_) + fundamental_parameters_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
