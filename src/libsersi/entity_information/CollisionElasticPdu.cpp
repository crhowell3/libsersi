#include "libsersi/entity_information/CollisionElasticPdu.h"

namespace dis {
CollisionElasticPdu::CollisionElasticPdu()
    : pad_(0),
      mass_(0.0),
      collision_result_xx_(0.0),
      collision_result_xy_(0.0),
      collision_result_xz_(0.0),
      collision_result_yy_(0.0),
      collision_result_yz_(0.0),
      collision_result_zz_(0.0),
      coefficient_of_restitution_(0.0) {
  SetPduType(66);
  SetProtocolFamily(1);
}

CollisionElasticPdu::~CollisionElasticPdu() = default;

EntityID& CollisionElasticPdu::GetIssuingEntityId() {
  return issuing_entity_id_;
}

const EntityID& CollisionElasticPdu::GetIssuingEntityId() const {
  return issuing_entity_id_;
}

void CollisionElasticPdu::SetIssuingEntityId(const EntityID& value) {
  issuing_entity_id_ = value;
}

EntityID& CollisionElasticPdu::GetCollidingEntityId() {
  return colliding_entity_id_;
}

const EntityID& CollisionElasticPdu::GetCollidingEntityId() const {
  return colliding_entity_id_;
}

void CollisionElasticPdu::SetCollidingEntityId(const EntityID& value) {
  colliding_entity_id_ = value;
}

EventID& CollisionElasticPdu::GetCollisionEventId() {
  return collision_event_id_;
}

const EventID& CollisionElasticPdu::GetCollisionEventId() const {
  return collision_event_id_;
}

void CollisionElasticPdu::SetCollisionEventId(const EventID& value) {
  collision_event_id_ = value;
}

int16_t CollisionElasticPdu::GetPad() const { return pad_; }

void CollisionElasticPdu::SetPad(int16_t value) { pad_ = value; }

Vector3Float& CollisionElasticPdu::GetContactVelocity() {
  return contact_velocity_;
}

const Vector3Float& CollisionElasticPdu::GetContactVelocity() const {
  return contact_velocity_;
}

void CollisionElasticPdu::SetContactVelocity(const Vector3Float& value) {
  contact_velocity_ = value;
}

float CollisionElasticPdu::GetMass() const { return mass_; }

void CollisionElasticPdu::SetMass(float value) { mass_ = value; }

Vector3Float& CollisionElasticPdu::GetLocation() { return location_; }

const Vector3Float& CollisionElasticPdu::GetLocation() const {
  return location_;
}

void CollisionElasticPdu::SetLocation(const Vector3Float& value) {
  location_ = value;
}

float CollisionElasticPdu::GetCollisionResultXX() const {
  return collision_result_xx_;
}

void CollisionElasticPdu::SetCollisionResultXX(float value) {
  collision_result_xx_ = value;
}

float CollisionElasticPdu::GetCollisionResultXY() const {
  return collision_result_xy_;
}

void CollisionElasticPdu::SetCollisionResultXY(float value) {
  collision_result_xy_ = value;
}

float CollisionElasticPdu::GetCollisionResultXZ() const {
  return collision_result_xz_;
}

void CollisionElasticPdu::SetCollisionResultXZ(float value) {
  collision_result_xz_ = value;
}

float CollisionElasticPdu::GetCollisionResultYY() const {
  return collision_result_yy_;
}

void CollisionElasticPdu::SetCollisionResultYY(float value) {
  collision_result_yy_ = value;
}

float CollisionElasticPdu::GetCollisionResultYZ() const {
  return collision_result_yz_;
}

void CollisionElasticPdu::SetCollisionResultYZ(float value) {
  collision_result_yz_ = value;
}

float CollisionElasticPdu::GetCollisionResultZZ() const {
  return collision_result_zz_;
}

void CollisionElasticPdu::SetCollisionResultZZ(float value) {
  collision_result_zz_ = value;
}

Vector3Float& CollisionElasticPdu::GetUnitSurfaceNormal() {
  return unit_surface_normal_;
}

const Vector3Float& CollisionElasticPdu::GetUnitSurfaceNormal() const {
  return unit_surface_normal_;
}

void CollisionElasticPdu::SetUnitSurfaceNormal(const Vector3Float& value) {
  unit_surface_normal_ = value;
}

float CollisionElasticPdu::GetCoefficientOfRestitution() const {
  return coefficient_of_restitution_;
}

void CollisionElasticPdu::SetCoefficientOfRestitution(float value) {
  coefficient_of_restitution_ = value;
}

void CollisionElasticPdu::Marshal(ByteBuffer& byte_buffer) const {
  EntityInformationFamilyPdu::Marshal(byte_buffer);
  issuing_entity_id_.Marshal(byte_buffer);
  colliding_entity_id_.Marshal(byte_buffer);
  collision_event_id_.Marshal(byte_buffer);
  byte_buffer << pad_;
  contact_velocity_.Marshal(byte_buffer);
  byte_buffer << mass_;
  location_.Marshal(byte_buffer);
  byte_buffer << collision_result_xx_;
  byte_buffer << collision_result_xy_;
  byte_buffer << collision_result_xz_;
  byte_buffer << collision_result_yy_;
  byte_buffer << collision_result_yz_;
  byte_buffer << collision_result_zz_;
  unit_surface_normal_.Marshal(byte_buffer);
  byte_buffer << coefficient_of_restitution_;
}

void CollisionElasticPdu::Unmarshal(ByteBuffer& byte_buffer) {
  EntityInformationFamilyPdu::Unmarshal(byte_buffer);
  issuing_entity_id_.Unmarshal(byte_buffer);
  colliding_entity_id_.Unmarshal(byte_buffer);
  collision_event_id_.Unmarshal(byte_buffer);
  byte_buffer >> pad_;
  contact_velocity_.Unmarshal(byte_buffer);
  byte_buffer >> mass_;
  location_.Unmarshal(byte_buffer);
  byte_buffer >> collision_result_xx_;
  byte_buffer >> collision_result_xy_;
  byte_buffer >> collision_result_xz_;
  byte_buffer >> collision_result_yy_;
  byte_buffer >> collision_result_yz_;
  byte_buffer >> collision_result_zz_;
  unit_surface_normal_.Unmarshal(byte_buffer);
  byte_buffer >> coefficient_of_restitution_;
}

bool CollisionElasticPdu::operator==(const CollisionElasticPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityInformationFamilyPdu::operator==(rhs);

  if (!(issuing_entity_id_ == rhs.issuing_entity_id_)) {
    ivars_equal = false;
  }
  if (!(colliding_entity_id_ == rhs.colliding_entity_id_)) {
    ivars_equal = false;
  }
  if (!(collision_event_id_ == rhs.collision_event_id_)) {
    ivars_equal = false;
  }
  if (!(pad_ == rhs.pad_)) {
    ivars_equal = false;
  }
  if (!(contact_velocity_ == rhs.contact_velocity_)) {
    ivars_equal = false;
  }
  if (!(mass_ == rhs.mass_)) {
    ivars_equal = false;
  }
  if (!(location_ == rhs.location_)) {
    ivars_equal = false;
  }
  if (!(collision_result_xx_ == rhs.collision_result_xx_)) {
    ivars_equal = false;
  }
  if (!(collision_result_xy_ == rhs.collision_result_xy_)) {
    ivars_equal = false;
  }
  if (!(collision_result_xz_ == rhs.collision_result_xz_)) {
    ivars_equal = false;
  }
  if (!(collision_result_yy_ == rhs.collision_result_yy_)) {
    ivars_equal = false;
  }
  if (!(collision_result_yz_ == rhs.collision_result_yz_)) {
    ivars_equal = false;
  }
  if (!(collision_result_zz_ == rhs.collision_result_zz_)) {
    ivars_equal = false;
  }
  if (!(unit_surface_normal_ == rhs.unit_surface_normal_)) {
    ivars_equal = false;
  }
  if (!(coefficient_of_restitution_ == rhs.coefficient_of_restitution_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t CollisionElasticPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      EntityInformationFamilyPdu::GetMarshalledSize() +
      issuing_entity_id_.GetMarshalledSize() +
      colliding_entity_id_.GetMarshalledSize() +
      collision_event_id_.GetMarshalledSize() + sizeof(pad_) +
      contact_velocity_.GetMarshalledSize() + sizeof(mass_) +
      location_.GetMarshalledSize() + sizeof(collision_result_xx_) +
      sizeof(collision_result_xy_) + sizeof(collision_result_xz_) +
      sizeof(collision_result_yy_) + sizeof(collision_result_yz_) +
      sizeof(collision_result_zz_) + unit_surface_normal_.GetMarshalledSize() +
      sizeof(coefficient_of_restitution_);
  return marshal_size;
}

}  // namespace dis
