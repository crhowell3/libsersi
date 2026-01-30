//      libsersi - C++ implementation of the IEEE 1278.1-2012 Distributed
//      Interactive Simulation application protocol specification
//      Copyright (C) 2026 Cameron Howell
//
//      Licensed under the BSD-2-Clause License

#pragma once

#include "common/data_types/ArticulationParameter.hpp"
#include "common/data_types/BurstDescriptor.hpp"
#include "common/data_types/EntityID.hpp"
#include "common/data_types/EventID.hpp"
#include "common/Pdu.hpp"
#include "common/data_types/Vector3Double.hpp"
#include "common/data_types/Vector3Float.hpp"
#include "common/data_types/ClockTime.hpp"
#include "utils/ByteBuffer.hpp"

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
    return lhs.firing_entity_id_ == rhs.firing_entity_id_ && lhs.target_entity_id_ == rhs.target_entity_id_ &&
           lhs.munition_id_ == rhs.munition_id_ && lhs.event_id_ == rhs.event_id_ &&
           lhs.fire_mission_index_ == rhs.fire_mission_index_ &&
           lhs.location_in_world_coordinates_ == rhs.location_in_world_coordinates_ &&
           lhs.burst_descriptor_ == rhs.burst_descriptor_ && lhs.velocity_ == rhs.velocity_ && lhs.range_ == rhs.range_;
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
    return lhs.firing_entity_id_ == rhs.firing_entity_id_ && lhs.target_entity_id_ == rhs.target_entity_id_ &&
           lhs.munition_id_ == rhs.munition_id_ && lhs.event_id_ == rhs.event_id_;
  }
};

/// Implemented according to IEEE 1278.1-2012 §7.3.4
class DirectedEnergyFirePdu final : public Pdu {
  FIELD(EntityID, firing_entity_id)
  FIELD(EventID, event_id)
  FIELD(EntityType, munition_type)
  FIELD(ClockTime, shot_start_time)
  FIELD(float, cumulative_shot_time)
  FIELD(EntityCoordinateVector, aperture_emitter_location)
  FIELD(float, aperture_diameter)
  FIELD(float, wavelength)
  FIELD(uint32_t, padding)
  FIELD(float, pulse_repetition_frequency)
  FIELD(float, pulse_width)
  FIELD(uint16_t, flags)
  FIELD(DEFirePulseShape, pulse_shape)
  FIELD(uint8_t, padding2)
  FIELD(uint32_t, padding3)
  FIELD(uint16_t, padding4)
  FIELD(uint16_t, number_of_de_records)
  FIELD(std::vector<DirectedEnergyDamage>, damage_descriptions)

 public:
  DirectedEnergyFirePdu();
  ~DirectedEnergyFirePdu() final;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  friend bool operator==(const DirectedEnergyFirePdu& lhs, const DirectedEnergyFirePdu& rhs) {
    return lhs.firing_entity_id_ == rhs.firing_entity_id_ && lhs.event_id_ == rhs.event_id_ &&
           lhs.munition_type_ == rhs.munition_type_ && lhs.shot_start_time_ == rhs.shot_start_time_ &&
           lhs.cumulative_shot_time_ == rhs.cumulative_shot_time_ &&
           lhs.aperture_emitter_location_ == rhs.aperture_emitter_location_ &&
           lhs.aperture_diameter_ == rhs.aperture_diameter_ && lhs.wavelength_ == rhs.wavelength_ &&
           lhs.padding_ == rhs.padding_ && lhs.pulse_repetition_frequency_ == rhs.pulse_repetition_frequency_ &&
           lhs.pulse_width_ == rhs.pulse_width_ && lhs.flags_ == rhs.flags_ && lhs.pulse_shape_ == rhs.pulse_shape_ &&
           lhs.padding2_ == rhs.padding2_ && lhs.padding3_ == rhs.padding3_ && lhs.padding4_ == rhs.padding4_ &&
           lhs.number_of_de_records_ == rhs.number_of_de_records_ &&
           lhs.damage_descriptions_ == rhs.damage_descriptions_;
  }
};

/// Implemented according to IEEE 1278.1-2012 §7.3.5
class EntityDamageStatusPdu final : public Pdu {
  FIELD(EntityID, damaged_entity_id);
  FIELD(uint16_t, padding);
  FIELD(uint16_t, padding2);
  FIELD(uint16_t, number_of_damage_descriptions);
  FIELD(std::vector<DirectedEnergyDamage>, damage_descriptions);

 public:
  EntityDamageStatusPdu();
  ~EntityDamageStatusPdu() final;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  friend bool operator==(const EntityDamageStatusPdu& lhs, const EntityDamageStatusPdu& rhs) {
    return lhs.damaged_entity_id_ == rhs.damaged_entity_id_ && lhs.padding_ == rhs.padding_ &&
           lhs.padding2_ == rhs.padding2_ && lhs.number_of_damage_descriptions_ == rhs.number_of_damage_descriptions_ &&
           lhs.damage_descriptions_ == rhs.damage_descriptions_;
  }
};

}  // namespace dis
