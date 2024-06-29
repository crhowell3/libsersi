#pragma once

#include "dis6/common/EntityID.h"
#include "dis6/common/EventID.h"
#include "dis6/common/Vector3Float.h"
#include "dis6/entity_information/EntityInformationFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.3.2. Information about a collision. COMPLETE

class CollisionPdu final : public EntityInformationFamilyPdu {
 private:
  /** ID of the entity that issued the collision PDU */
  EntityID issuing_entity_id_;

  /** ID of entity that has collided with the issuing entity ID */
  EntityID colliding_entity_id_;

  /** ID of event */
  EventID event_id_;

  /** ID of event */
  uint8_t collision_type_;

  /** some padding */
  char pad_;

  /** velocity at collision */
  Vector3Float velocity_;

  /** mass of issuing entity */
  float mass_;

  /** Location with respect to entity the issuing entity collided with */
  Vector3Float location_;

 public:
  CollisionPdu();
  ~CollisionPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetIssuingEntityId();
  [[nodiscard]] const EntityID& GetIssuingEntityId() const;
  void SetIssuingEntityId(const EntityID& value);

  EntityID& GetCollidingEntityId();
  [[nodiscard]] const EntityID& GetCollidingEntityId() const;
  void SetCollidingEntityId(const EntityID& value);

  EventID& GetEventId();
  [[nodiscard]] const EventID& GetEventId() const;
  void SetEventId(const EventID& value);

  [[nodiscard]] uint8_t GetCollisionType() const;
  void SetCollisionType(uint8_t value);

  [[nodiscard]] char GetPad() const;
  void SetPad(char value);

  Vector3Float& GetVelocity();
  [[nodiscard]] const Vector3Float& GetVelocity() const;
  void SetVelocity(const Vector3Float& value);

  [[nodiscard]] float GetMass() const;
  void SetMass(float value);

  Vector3Float& GetLocation();
  [[nodiscard]] const Vector3Float& GetLocation() const;
  void SetLocation(const Vector3Float& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const CollisionPdu& rhs) const;
};
}  // namespace dis
