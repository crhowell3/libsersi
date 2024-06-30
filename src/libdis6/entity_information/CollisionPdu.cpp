#include "libdis6/entity_information/CollisionPdu.h"

namespace dis {
CollisionPdu::CollisionPdu() : collision_type_(0), pad_(0), mass_(0.0) {
  SetPduType(4);
  SetProtocolFamily(1);
}

CollisionPdu::~CollisionPdu() = default;

EntityID& CollisionPdu::GetIssuingEntityId() { return issuing_entity_id_; }

const EntityID& CollisionPdu::GetIssuingEntityId() const {
  return issuing_entity_id_;
}

void CollisionPdu::SetIssuingEntityId(const EntityID& value) {
  issuing_entity_id_ = value;
}

EntityID& CollisionPdu::GetCollidingEntityId() { return colliding_entity_id_; }

const EntityID& CollisionPdu::GetCollidingEntityId() const {
  return colliding_entity_id_;
}

void CollisionPdu::SetCollidingEntityId(const EntityID& value) {
  colliding_entity_id_ = value;
}

EventID& CollisionPdu::GetEventId() { return event_id_; }

const EventID& CollisionPdu::GetEventId() const { return event_id_; }

void CollisionPdu::SetEventId(const EventID& value) { event_id_ = value; }

uint8_t CollisionPdu::GetCollisionType() const { return collision_type_; }

void CollisionPdu::SetCollisionType(uint8_t value) { collision_type_ = value; }

char CollisionPdu::GetPad() const { return pad_; }

void CollisionPdu::SetPad(char value) { pad_ = value; }

Vector3Float& CollisionPdu::GetVelocity() { return velocity_; }

const Vector3Float& CollisionPdu::GetVelocity() const { return velocity_; }

void CollisionPdu::SetVelocity(const Vector3Float& value) { velocity_ = value; }

float CollisionPdu::GetMass() const { return mass_; }

void CollisionPdu::SetMass(float value) { mass_ = value; }

Vector3Float& CollisionPdu::GetLocation() { return location_; }

const Vector3Float& CollisionPdu::GetLocation() const { return location_; }

void CollisionPdu::SetLocation(const Vector3Float& value) { location_ = value; }

void CollisionPdu::Marshal(DataStream& data_stream) const {
  EntityInformationFamilyPdu::Marshal(data_stream);
  issuing_entity_id_.Marshal(data_stream);
  colliding_entity_id_.Marshal(data_stream);
  event_id_.Marshal(data_stream);
  data_stream << collision_type_;
  data_stream << pad_;
  velocity_.Marshal(data_stream);
  data_stream << mass_;
  location_.Marshal(data_stream);
}

void CollisionPdu::Unmarshal(DataStream& data_stream) {
  EntityInformationFamilyPdu::Unmarshal(data_stream);
  issuing_entity_id_.Unmarshal(data_stream);
  colliding_entity_id_.Unmarshal(data_stream);
  event_id_.Unmarshal(data_stream);
  data_stream >> collision_type_;
  data_stream >> pad_;
  velocity_.Unmarshal(data_stream);
  data_stream >> mass_;
  location_.Unmarshal(data_stream);
}

bool CollisionPdu::operator==(const CollisionPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityInformationFamilyPdu::operator==(rhs);

  if (!(issuing_entity_id_ == rhs.issuing_entity_id_)) {
    ivars_equal = false;
  }
  if (!(colliding_entity_id_ == rhs.colliding_entity_id_)) {
    ivars_equal = false;
  }
  if (!(event_id_ == rhs.event_id_)) {
    ivars_equal = false;
  }
  if (!(collision_type_ == rhs.collision_type_)) {
    ivars_equal = false;
  }
  if (!(pad_ == rhs.pad_)) {
    ivars_equal = false;
  }
  if (!(velocity_ == rhs.velocity_)) {
    ivars_equal = false;
  }
  if (!(mass_ == rhs.mass_)) {
    ivars_equal = false;
  }
  if (!(location_ == rhs.location_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t CollisionPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      EntityInformationFamilyPdu::GetMarshalledSize() +
      issuing_entity_id_.GetMarshalledSize() +
      colliding_entity_id_.GetMarshalledSize() + event_id_.GetMarshalledSize() +
      sizeof(collision_type_) + sizeof(pad_) + velocity_.GetMarshalledSize() +
      sizeof(mass_) + location_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
