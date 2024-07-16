#include "libsersi/distributed_emissions/UnderwaterAcousticsPdu.h"

namespace dis {
UnderwaterAcousticsPdu::UnderwaterAcousticsPdu()
    : state_change_indicator_(0),
      pad_(0),
      passive_parameter_index_(0),
      propulsion_plant_configuration_(0),
      number_of_shafts_(0),
      number_of_apas_(0),
      number_of_ua_emitter_systems_(0) {
  SetPduType(29);
}

UnderwaterAcousticsPdu::~UnderwaterAcousticsPdu() {
  shaft_rpms_.clear();
  apa_data_.clear();
  emitter_systems_.clear();
}

EntityID& UnderwaterAcousticsPdu::GetEmittingEntityId() {
  return emitting_entity_id_;
}

const EntityID& UnderwaterAcousticsPdu::GetEmittingEntityId() const {
  return emitting_entity_id_;
}

void UnderwaterAcousticsPdu::SetEmittingEntityId(const EntityID& value) {
  emitting_entity_id_ = value;
}

EventID& UnderwaterAcousticsPdu::GetEventId() { return event_id_; }

const EventID& UnderwaterAcousticsPdu::GetEventId() const { return event_id_; }

void UnderwaterAcousticsPdu::SetEventId(const EventID& value) {
  event_id_ = value;
}

char UnderwaterAcousticsPdu::GetStateChangeIndicator() const {
  return state_change_indicator_;
}

void UnderwaterAcousticsPdu::SetStateChangeIndicator(char value) {
  state_change_indicator_ = value;
}

char UnderwaterAcousticsPdu::GetPad() const { return pad_; }

void UnderwaterAcousticsPdu::SetPad(char value) { pad_ = value; }

uint16_t UnderwaterAcousticsPdu::GetPassiveParameterIndex() const {
  return passive_parameter_index_;
}

void UnderwaterAcousticsPdu::SetPassiveParameterIndex(uint16_t value) {
  passive_parameter_index_ = value;
}

uint8_t UnderwaterAcousticsPdu::GetPropulsionPlantConfiguration() const {
  return propulsion_plant_configuration_;
}

void UnderwaterAcousticsPdu::SetPropulsionPlantConfiguration(uint8_t value) {
  propulsion_plant_configuration_ = value;
}

uint8_t UnderwaterAcousticsPdu::GetNumberOfShafts() const {
  return shaft_rpms_.size();
}

uint8_t UnderwaterAcousticsPdu::GetNumberOfApas() const {
  return apa_data_.size();
}

uint8_t UnderwaterAcousticsPdu::GetNumberOfUaEmitterSystems() const {
  return emitter_systems_.size();
}

std::vector<ShaftRPMs>& UnderwaterAcousticsPdu::GetShaftRPMs() {
  return shaft_rpms_;
}

const std::vector<ShaftRPMs>& UnderwaterAcousticsPdu::GetShaftRPMs() const {
  return shaft_rpms_;
}

void UnderwaterAcousticsPdu::SetShaftRPMs(const std::vector<ShaftRPMs>& value) {
  shaft_rpms_ = value;
}

std::vector<ApaData>& UnderwaterAcousticsPdu::GetApaData() { return apa_data_; }

const std::vector<ApaData>& UnderwaterAcousticsPdu::GetApaData() const {
  return apa_data_;
}

void UnderwaterAcousticsPdu::SetApaData(const std::vector<ApaData>& value) {
  apa_data_ = value;
}

std::vector<AcousticEmitterSystemData>&
UnderwaterAcousticsPdu::GetEmitterSystems() {
  return emitter_systems_;
}

const std::vector<AcousticEmitterSystemData>&
UnderwaterAcousticsPdu::GetEmitterSystems() const {
  return emitter_systems_;
}

void UnderwaterAcousticsPdu::SetEmitterSystems(
    const std::vector<AcousticEmitterSystemData>& value) {
  emitter_systems_ = value;
}

void UnderwaterAcousticsPdu::Marshal(DataStream& data_stream) const {
  DistributedEmissionsFamilyPdu::Marshal(data_stream);
  emitting_entity_id_.Marshal(data_stream);
  event_id_.Marshal(data_stream);
  data_stream << state_change_indicator_;
  data_stream << pad_;
  data_stream << passive_parameter_index_;
  data_stream << propulsion_plant_configuration_;
  data_stream << static_cast<uint8_t>(shaft_rpms_.size());
  data_stream << static_cast<uint8_t>(apa_data_.size());
  data_stream << static_cast<uint8_t>(emitter_systems_.size());

  for (const auto& x : shaft_rpms_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : apa_data_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : emitter_systems_) {
    x.Marshal(data_stream);
  }
}

void UnderwaterAcousticsPdu::Unmarshal(DataStream& data_stream) {
  DistributedEmissionsFamilyPdu::Unmarshal(data_stream);
  emitting_entity_id_.Unmarshal(data_stream);
  event_id_.Unmarshal(data_stream);
  data_stream >> state_change_indicator_;
  data_stream >> pad_;
  data_stream >> passive_parameter_index_;
  data_stream >> propulsion_plant_configuration_;
  data_stream >> number_of_shafts_;
  data_stream >> number_of_apas_;
  data_stream >> number_of_ua_emitter_systems_;

  shaft_rpms_.clear();
  for (std::size_t idx = 0; idx < number_of_shafts_; idx++) {
    ShaftRPMs x;
    x.Unmarshal(data_stream);
    shaft_rpms_.push_back(x);
  }

  apa_data_.clear();
  for (std::size_t idx = 0; idx < number_of_apas_; idx++) {
    ApaData x;
    x.Unmarshal(data_stream);
    apa_data_.push_back(x);
  }

  emitter_systems_.clear();
  for (std::size_t idx = 0; idx < number_of_ua_emitter_systems_; idx++) {
    AcousticEmitterSystemData x;
    x.Unmarshal(data_stream);
    emitter_systems_.push_back(x);
  }
}

bool UnderwaterAcousticsPdu::operator==(
    const UnderwaterAcousticsPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = DistributedEmissionsFamilyPdu::operator==(rhs);

  if (!(emitting_entity_id_ == rhs.emitting_entity_id_)) {
    ivars_equal = false;
  }
  if (!(event_id_ == rhs.event_id_)) {
    ivars_equal = false;
  }
  if (!(state_change_indicator_ == rhs.state_change_indicator_)) {
    ivars_equal = false;
  }
  if (!(pad_ == rhs.pad_)) {
    ivars_equal = false;
  }
  if (!(passive_parameter_index_ == rhs.passive_parameter_index_)) {
    ivars_equal = false;
  }
  if (!(propulsion_plant_configuration_ ==
        rhs.propulsion_plant_configuration_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < shaft_rpms_.size(); idx++) {
    if (!(shaft_rpms_[idx] == rhs.shaft_rpms_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < apa_data_.size(); idx++) {
    if (!(apa_data_[idx] == rhs.apa_data_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < emitter_systems_.size(); idx++) {
    if (!(emitter_systems_[idx] == rhs.emitter_systems_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t UnderwaterAcousticsPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      DistributedEmissionsFamilyPdu::GetMarshalledSize() +
      emitting_entity_id_.GetMarshalledSize() + event_id_.GetMarshalledSize() +
      sizeof(state_change_indicator_) + sizeof(pad_) +
      sizeof(passive_parameter_index_) +
      sizeof(propulsion_plant_configuration_) + sizeof(number_of_shafts_) +
      sizeof(number_of_apas_) + sizeof(number_of_ua_emitter_systems_);

  for (auto list_element : shaft_rpms_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (auto list_element : apa_data_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : emitter_systems_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
