#include "libsersi/warfare/FirePdu.h"

namespace dis {
FirePdu::FirePdu() : fire_mission_index_(0), range_(0.0) { SetPduType(2); }

FirePdu::~FirePdu() = default;

EntityID& FirePdu::GetMunitionId() { return munition_id_; }

const EntityID& FirePdu::GetMunitionId() const { return munition_id_; }

void FirePdu::SetMunitionId(const EntityID& value) { munition_id_ = value; }

EventID& FirePdu::GetEventId() { return event_id_; }

const EventID& FirePdu::GetEventId() const { return event_id_; }

void FirePdu::SetEventId(const EventID& value) { event_id_ = value; }

int FirePdu::GetFireMissionIndex() const { return fire_mission_index_; }

void FirePdu::SetFireMissionIndex(int value) { fire_mission_index_ = value; }

Vector3Double& FirePdu::GetLocationInWorldCoordinates() {
  return location_in_world_coordinates_;
}

const Vector3Double& FirePdu::GetLocationInWorldCoordinates() const {
  return location_in_world_coordinates_;
}

void FirePdu::SetLocationInWorldCoordinates(const Vector3Double& value) {
  location_in_world_coordinates_ = value;
}

BurstDescriptor& FirePdu::GetBurstDescriptor() { return burst_descriptor_; }

const BurstDescriptor& FirePdu::GetBurstDescriptor() const {
  return burst_descriptor_;
}

void FirePdu::SetBurstDescriptor(const BurstDescriptor& value) {
  burst_descriptor_ = value;
}

Vector3Float& FirePdu::GetVelocity() { return velocity_; }

const Vector3Float& FirePdu::GetVelocity() const { return velocity_; }

void FirePdu::SetVelocity(const Vector3Float& value) { velocity_ = value; }

float FirePdu::GetRange() const { return range_; }

void FirePdu::SetRange(float value) { range_ = value; }

void FirePdu::Marshal(DataStream& data_stream) const {
  WarfareFamilyPdu::Marshal(
      data_stream);  // Marshal information in superclass first
  munition_id_.Marshal(data_stream);
  event_id_.Marshal(data_stream);
  data_stream << fire_mission_index_;
  location_in_world_coordinates_.Marshal(data_stream);
  burst_descriptor_.Marshal(data_stream);
  velocity_.Marshal(data_stream);
  data_stream << range_;
}

void FirePdu::Unmarshal(DataStream& data_stream) {
  WarfareFamilyPdu::Unmarshal(
      data_stream);  // Unmarshal information in superclass first
  munition_id_.Unmarshal(data_stream);
  event_id_.Unmarshal(data_stream);
  data_stream >> fire_mission_index_;
  location_in_world_coordinates_.Unmarshal(data_stream);
  burst_descriptor_.Unmarshal(data_stream);
  velocity_.Unmarshal(data_stream);
  data_stream >> range_;
}

bool FirePdu::operator==(const FirePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = WarfareFamilyPdu::operator==(rhs);

  if (!(munition_id_ == rhs.munition_id_)) {
    ivars_equal = false;
  }
  if (!(event_id_ == rhs.event_id_)) {
    ivars_equal = false;
  }
  if (!(fire_mission_index_ == rhs.fire_mission_index_)) {
    ivars_equal = false;
  }
  if (!(location_in_world_coordinates_ == rhs.location_in_world_coordinates_)) {
    ivars_equal = false;
  }
  if (!(burst_descriptor_ == rhs.burst_descriptor_)) {
    ivars_equal = false;
  }
  if (!(velocity_ == rhs.velocity_)) {
    ivars_equal = false;
  }
  if (!(range_ == rhs.range_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t FirePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      WarfareFamilyPdu::GetMarshalledSize() + munition_id_.GetMarshalledSize() +
      event_id_.GetMarshalledSize() + sizeof(fire_mission_index_) +
      location_in_world_coordinates_.GetMarshalledSize() +
      burst_descriptor_.GetMarshalledSize() + velocity_.GetMarshalledSize() +
      sizeof(range_);
  return marshal_size;
}

}  // namespace dis
