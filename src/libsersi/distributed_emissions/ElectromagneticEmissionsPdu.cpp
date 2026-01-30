#include distributed_emissions/ElectromagneticEmissionsPdu.h"

#include <cstddef>

namespace dis {

ElectromagneticEmissionsPdu::ElectromagneticEmissionsPdu()
    : state_update_indicator_(0),
      number_of_systems_(0),
      padding_for_emissions_pdu_(0) {
  SetPduType(23);
  SetPaddingForEmissionsPdu(0);
}

ElectromagneticEmissionsPdu::~ElectromagneticEmissionsPdu() {
  systems_.clear();
}

EntityID& ElectromagneticEmissionsPdu::GetEmittingEntityId() {
  return emitting_entity_id_;
}

const EntityID& ElectromagneticEmissionsPdu::GetEmittingEntityId() const {
  return emitting_entity_id_;
}

void ElectromagneticEmissionsPdu::SetEmittingEntityId(const EntityID& value) {
  emitting_entity_id_ = value;
}

EventID& ElectromagneticEmissionsPdu::GetEventId() { return event_id_; }

const EventID& ElectromagneticEmissionsPdu::GetEventId() const {
  return event_id_;
}

void ElectromagneticEmissionsPdu::SetEventId(const EventID& value) {
  event_id_ = value;
}

uint8_t ElectromagneticEmissionsPdu::GetStateUpdateIndicator() const {
  return state_update_indicator_;
}

void ElectromagneticEmissionsPdu::SetStateUpdateIndicator(uint8_t value) {
  state_update_indicator_ = value;
}

uint8_t ElectromagneticEmissionsPdu::GetNumberOfSystems() const {
  return systems_.size();
}

uint16_t ElectromagneticEmissionsPdu::GetPaddingForEmissionsPdu() const {
  return padding_for_emissions_pdu_;
}

void ElectromagneticEmissionsPdu::SetPaddingForEmissionsPdu(uint16_t value) {
  padding_for_emissions_pdu_ = value;
}

std::vector<ElectromagneticEmissionSystemData>&
ElectromagneticEmissionsPdu::GetSystems() {
  return systems_;
}

const std::vector<ElectromagneticEmissionSystemData>&
ElectromagneticEmissionsPdu::GetSystems() const {
  return systems_;
}

void ElectromagneticEmissionsPdu::SetSystems(
    const std::vector<ElectromagneticEmissionSystemData>& value) {
  systems_ = value;
}

void ElectromagneticEmissionsPdu::Marshal(ByteBuffer& byte_buffer) const {
  DistributedEmissionsFamilyPdu::Marshal(byte_buffer);
  emitting_entity_id_.Marshal(byte_buffer);
  event_id_.Marshal(byte_buffer);
  byte_buffer << state_update_indicator_;
  byte_buffer << static_cast<uint8_t>(systems_.size());
  byte_buffer << padding_for_emissions_pdu_;

  for (const auto& x : systems_) {
    x.Marshal(byte_buffer);
  }
}

void ElectromagneticEmissionsPdu::Unmarshal(ByteBuffer& byte_buffer) {
  DistributedEmissionsFamilyPdu::Unmarshal(
      byte_buffer);  // unmarshal information in superclass first
  emitting_entity_id_.Unmarshal(byte_buffer);
  event_id_.Unmarshal(byte_buffer);
  byte_buffer >> state_update_indicator_;
  byte_buffer >> number_of_systems_;
  byte_buffer >> padding_for_emissions_pdu_;

  systems_.clear();
  for (std::size_t idx = 0; idx < number_of_systems_; idx++) {
    ElectromagneticEmissionSystemData x;
    x.Unmarshal(byte_buffer);
    systems_.push_back(x);
  }
}

bool ElectromagneticEmissionsPdu::operator==(
    const ElectromagneticEmissionsPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = DistributedEmissionsFamilyPdu::operator==(rhs);

  if (!(emitting_entity_id_ == rhs.emitting_entity_id_)) {
    ivars_equal = false;
  }
  if (!(event_id_ == rhs.event_id_)) {
    ivars_equal = false;
  }
  if (!(state_update_indicator_ == rhs.state_update_indicator_)) {
    ivars_equal = false;
  }
  if (!(padding_for_emissions_pdu_ == rhs.padding_for_emissions_pdu_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < systems_.size(); idx++) {
    if (!(systems_[idx] == rhs.systems_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t ElectromagneticEmissionsPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      DistributedEmissionsFamilyPdu::GetMarshalledSize() +
      emitting_entity_id_.GetMarshalledSize() + event_id_.GetMarshalledSize() +
      sizeof(state_update_indicator_) + sizeof(number_of_systems_) +
      sizeof(padding_for_emissions_pdu_);
  for (const auto& list_element : systems_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
