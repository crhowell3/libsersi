#include "dis6/warfare/DetonationPdu.h"

namespace dis {
DetonationPdu::DetonationPdu()
    : detonation_result_(0), number_of_articulation_parameters_(0), pad_(0) {
  SetPduType(3);
}

DetonationPdu::~DetonationPdu() { articulation_parameters_.clear(); }

EntityID& DetonationPdu::GetMunitionId() { return munition_id_; }

const EntityID& DetonationPdu::GetMunitionId() const { return munition_id_; }

void DetonationPdu::SetMunitionId(const EntityID& value) {
  munition_id_ = value;
}

EventID& DetonationPdu::GetEventId() { return event_id_; }

const EventID& DetonationPdu::GetEventId() const { return event_id_; }

void DetonationPdu::SetEventId(const EventID& value) { event_id_ = value; }

Vector3Float& DetonationPdu::GetVelocity() { return velocity_; }

const Vector3Float& DetonationPdu::GetVelocity() const { return velocity_; }

void DetonationPdu::SetVelocity(const Vector3Float& value) {
  velocity_ = value;
}

Vector3Double& DetonationPdu::GetLocationInWorldCoordinates() {
  return location_in_world_coordinates_;
}

const Vector3Double& DetonationPdu::GetLocationInWorldCoordinates() const {
  return location_in_world_coordinates_;
}

void DetonationPdu::SetLocationInWorldCoordinates(const Vector3Double& value) {
  location_in_world_coordinates_ = value;
}

BurstDescriptor& DetonationPdu::GetBurstDescriptor() {
  return burst_descriptor_;
}

const BurstDescriptor& DetonationPdu::GetBurstDescriptor() const {
  return burst_descriptor_;
}

void DetonationPdu::SetBurstDescriptor(const BurstDescriptor& value) {
  burst_descriptor_ = value;
}

Vector3Float& DetonationPdu::GetLocationInEntityCoordinates() {
  return location_in_entity_coordinates_;
}

const Vector3Float& DetonationPdu::GetLocationInEntityCoordinates() const {
  return location_in_entity_coordinates_;
}

void DetonationPdu::SetLocationInEntityCoordinates(const Vector3Float& value) {
  location_in_entity_coordinates_ = value;
}

uint8_t DetonationPdu::GetDetonationResult() const {
  return detonation_result_;
}

void DetonationPdu::SetDetonationResult(uint8_t value) {
  detonation_result_ = value;
}

uint8_t DetonationPdu::GetNumberOfArticulationParameters() const {
  return articulation_parameters_.size();
}

int16_t DetonationPdu::GetPad() const { return pad_; }

void DetonationPdu::SetPad(int16_t value) { pad_ = value; }

std::vector<ArticulationParameter>& DetonationPdu::GetArticulationParameters() {
  return articulation_parameters_;
}

const std::vector<ArticulationParameter>&
DetonationPdu::GetArticulationParameters() const {
  return articulation_parameters_;
}

void DetonationPdu::SetArticulationParameters(
    const std::vector<ArticulationParameter>& value) {
  articulation_parameters_ = value;
}

void DetonationPdu::Marshal(DataStream& data_stream) const {
  WarfareFamilyPdu::Marshal(data_stream);
  munition_id_.Marshal(data_stream);
  event_id_.Marshal(data_stream);
  velocity_.Marshal(data_stream);
  location_in_world_coordinates_.Marshal(data_stream);
  burst_descriptor_.Marshal(data_stream);
  location_in_entity_coordinates_.Marshal(data_stream);
  data_stream << detonation_result_;
  data_stream << static_cast<uint8_t>(articulation_parameters_.size());
  data_stream << pad_;

  for (auto x : articulation_parameters_) {
    x.Marshal(data_stream);
  }
}

void DetonationPdu::Unmarshal(DataStream& data_stream) {
  WarfareFamilyPdu::Unmarshal(
      data_stream);  // Unmarshal information in superclass first
  munition_id_.Unmarshal(data_stream);
  event_id_.Unmarshal(data_stream);
  velocity_.Unmarshal(data_stream);
  location_in_world_coordinates_.Unmarshal(data_stream);
  burst_descriptor_.Unmarshal(data_stream);
  location_in_entity_coordinates_.Unmarshal(data_stream);
  data_stream >> detonation_result_;
  data_stream >> number_of_articulation_parameters_;
  data_stream >> pad_;

  articulation_parameters_.clear();
  for (std::size_t idx = 0; idx < number_of_articulation_parameters_; idx++) {
    ArticulationParameter x;
    x.Unmarshal(data_stream);
    articulation_parameters_.push_back(x);
  }
}

bool DetonationPdu::operator==(const DetonationPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = WarfareFamilyPdu::operator==(rhs);

  if (!(munition_id_ == rhs.munition_id_)) {
    ivars_equal = false;
  }
  if (!(event_id_ == rhs.event_id_)) {
    ivars_equal = false;
  }
  if (!(velocity_ == rhs.velocity_)) {
    ivars_equal = false;
  }
  if (!(location_in_world_coordinates_ == rhs.location_in_world_coordinates_)) {
    ivars_equal = false;
  }
  if (!(burst_descriptor_ == rhs.burst_descriptor_)) {
    ivars_equal = false;
  }
  if (!(location_in_entity_coordinates_ ==
        rhs.location_in_entity_coordinates_)) {
    ivars_equal = false;
  }
  if (!(detonation_result_ == rhs.detonation_result_)) {
    ivars_equal = false;
  }
  if (!(pad_ == rhs.pad_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < articulation_parameters_.size(); idx++) {
    if (!(articulation_parameters_[idx] == rhs.articulation_parameters_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t DetonationPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      WarfareFamilyPdu::GetMarshalledSize() + munition_id_.GetMarshalledSize() +
      event_id_.GetMarshalledSize() + velocity_.GetMarshalledSize() +
      location_in_world_coordinates_.GetMarshalledSize() +
      burst_descriptor_.GetMarshalledSize() +
      location_in_entity_coordinates_.GetMarshalledSize() +
      sizeof(detonation_result_) + sizeof(number_of_articulation_parameters_) +
      sizeof(pad_);

  for (auto list_element : articulation_parameters_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
