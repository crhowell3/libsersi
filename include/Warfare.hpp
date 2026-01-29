//      libsersi - C++ implementation of the IEEE 1278.1-2012 Distributed
//      Interactive Simulation application protocol specification
//      Copyright (C) 2026 Cameron Howell
//
//      Licensed under the BSD-2-Clause License

#pragma once

#include "libsersi/common/ArticulationParameter.h"
#include "libsersi/common/BurstDescriptor.h"
#include "libsersi/common/EntityID.h"
#include "libsersi/common/EventID.h"
#include "libsersi/common/Pdu.hpp"
#include "libsersi/common/Vector3Double.h"
#include "libsersi/common/Vector3Float.h"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
/// Implemented according to IEEE 1278.1-2012 §7.3.2
class FirePdu final : public Pdu {
  FIELD(EntityID, firing_entity_id)
  FIELD(EntityID, target_entity_id)
  FIELD(EntityID, munition_id)
  FIELD(EventID, event_id)
  FIELD(int, fire_mission_index)
  FIELD(Vector3Double, location_in_world_coordinates)
  FIELD(BurstDescriptor, burst_descriptor)
  FIELD(Vector3Float, velocity)
  FIELD(float, range)

 public:
  FirePdu();
  ~FirePdu() final;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  friend bool operator==(const FirePdu& lhs, const FirePdu& rhs) {
    return lhs.firing_entity_id_ == rhs.firing_entity_id_ &&
           lhs.target_entity_id_ == rhs.target_entity_id_ &&
           lhs.munition_id_ == rhs.munition_id_ &&
           lhs.event_id_ == rhs.event_id_ &&
           lhs.fire_mission_index_ == rhs.fire_mission_index_ &&
           lhs.location_in_world_coordinates_ ==
               rhs.location_in_world_coordinates_ &&
           lhs.burst_descriptor_ == rhs.burst_descriptor_ &&
           lhs.velocity_ == rhs.velocity_ && lhs.range_ == rhs.range_;
  }
};

/// Implemented according to IEEE 1278.1-2012 §7.3.3
class DetonationPdu final : public Pdu {
  FIELD(EntityID, firing_entity_id)
  FIELD(EntityID, target_entity_id)
  FIELD(EntityID, munition_id)
  FIELD(EventID, event_id)
  FIELD(Vector3Float, velocity)
  FIELD(Vector3Double, location_in_world_coordinates)
  FIELD(BurstDescriptor, burst_descriptor)
  FIELD(Vector3Float, location_in_entity_coordinates)
  FIELD(uint8_t, detonation_result)
  FIELD(uint8_t, number_of_articulation_parameters)
  FIELD(uint16_t, padding)
  FIELD(std::vector<ArticulationParameter>, articulation_parameters)

 public:
  DetonationPdu();
  ~DetonationPdu() final;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  friend bool operator==(const DetonationPdu& lhs, const DetonationPdu& rhs) {
    return lhs.firing_entity_id_ == rhs.firing_entity_id_ &&
           lhs.target_entity_id_ == rhs.target_entity_id_ &&
           lhs.munition_id_ == rhs.munition_id_ &&
           lhs.event_id_ == rhs.event_id_;
  }
};
}  // namespace dis
