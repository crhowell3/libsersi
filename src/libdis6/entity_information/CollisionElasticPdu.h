#pragma once

#include "libdis6/common/EntityID.h"
#include "libdis6/common/EventID.h"
#include "libdis6/common/Vector3Float.h"
#include "libdis6/entity_information/EntityInformationFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// 5.3.3.3. Information about elastic collisions in a DIS exercise shall be
// communicated using a Collision-Elastic PDU. COMPLETE

class CollisionElasticPdu final : public EntityInformationFamilyPdu {
 private:
  /** ID of the entity that issued the collision PDU */
  EntityID issuing_entity_id_;

  /** ID of entity that has collided with the issuing entity ID */
  EntityID colliding_entity_id_;

  /** ID of event */
  EventID collision_event_id_;

  /** some padding */
  int16_t pad_;

  /** velocity at collision */
  Vector3Float contact_velocity_;

  /** mass of issuing entity */
  float mass_;

  /** Location with respect to entity the issuing entity collided with */
  Vector3Float location_;

  /** tensor values */
  float collision_result_xx_;

  /** tensor values */
  float collision_result_xy_;

  /** tensor values */
  float collision_result_xz_;

  /** tensor values */
  float collision_result_yy_;

  /** tensor values */
  float collision_result_yz_;

  /** tensor values */
  float collision_result_zz_;

  /** This record shall represent the normal vector to the surface at the point
   * of collision detection. The surface normal shall be represented in world
   * coordinates. */
  Vector3Float unit_surface_normal_;

  /** This field shall represent the degree to which energy is conserved in a
   * collision */
  float coefficient_of_restitution_;

 public:
  CollisionElasticPdu();
  ~CollisionElasticPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetIssuingEntityId();
  [[nodiscard]] const EntityID& GetIssuingEntityId() const;
  void SetIssuingEntityId(const EntityID& value);

  EntityID& GetCollidingEntityId();
  [[nodiscard]] const EntityID& GetCollidingEntityId() const;
  void SetCollidingEntityId(const EntityID& value);

  EventID& GetCollisionEventId();
  [[nodiscard]] const EventID& GetCollisionEventId() const;
  void SetCollisionEventId(const EventID& value);

  [[nodiscard]] int16_t GetPad() const;
  void SetPad(int16_t value);

  Vector3Float& GetContactVelocity();
  [[nodiscard]] const Vector3Float& GetContactVelocity() const;
  void SetContactVelocity(const Vector3Float& value);

  [[nodiscard]] float GetMass() const;
  void SetMass(float value);

  Vector3Float& GetLocation();
  [[nodiscard]] const Vector3Float& GetLocation() const;
  void SetLocation(const Vector3Float& value);

  [[nodiscard]] float GetCollisionResultXX() const;
  void SetCollisionResultXX(float value);

  [[nodiscard]] float GetCollisionResultXY() const;
  void SetCollisionResultXY(float value);

  [[nodiscard]] float GetCollisionResultXZ() const;
  void SetCollisionResultXZ(float value);

  [[nodiscard]] float GetCollisionResultYY() const;
  void SetCollisionResultYY(float value);

  [[nodiscard]] float GetCollisionResultYZ() const;
  void SetCollisionResultYZ(float value);

  [[nodiscard]] float GetCollisionResultZZ() const;
  void SetCollisionResultZZ(float value);

  Vector3Float& GetUnitSurfaceNormal();
  [[nodiscard]] const Vector3Float& GetUnitSurfaceNormal() const;
  void SetUnitSurfaceNormal(const Vector3Float& value);

  [[nodiscard]] float GetCoefficientOfRestitution() const;
  void SetCoefficientOfRestitution(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  void extracted(const CollisionElasticPdu& rhs, bool& ivars_equal) const;
  bool operator==(const CollisionElasticPdu& rhs) const;
};
}  // namespace dis
