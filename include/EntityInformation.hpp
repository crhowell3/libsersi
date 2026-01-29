#pragma once

#include "libsersi/common/EntityID.h"
#include "libsersi/common/EventID.h"
#include "libsersi/common/Pdu.hpp"
#include "libsersi/common/Vector3Float.h"

namespace dis {
class CollisionElasticPdu final : public Pdu {
  FIELD(EntityID, issuing_entity_id)
  FIELD(EntityID, colliding_entity_id)
  FIELD(EventID, collision_event_id)
  FIELD(uint16_t, padding)
  FIELD(Vector3Float, contact_velocity)
  FIELD(float, mass)
  FIELD(Vector3Float, location)
  FIELD(float, collision_result_xx)
  FIELD(float, collision_result_xy)
  FIELD(float, collision_result_xz)
  FIELD(float, collision_result_yy)
  FIELD(float, collision_result_yz)
  FIELD(float, collision_result_zz)
  FIELD(Vector3Float, unit_surface_normal)
  FIELD(float, coefficient_of_restitution)

 public:
  CollisionElasticPdu();
  ~CollisionElasticPdu() final;

  Result<void, std::string> Marshal(ByteBuffer& data_stream) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& data_stream) final;

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  friend bool operator==(const CollisionElasticPdu& lhs, const CollisionElasticPdu& rhs) {
      return lhs.issuing_entity_id_ == rhs.issuing_entity_id_;
  }
};
}  // namespace dis
