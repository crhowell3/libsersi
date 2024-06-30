#pragma once

#include <cstddef>
#include <vector>

#include "libdis6/common/ArticulationParameter.h"
#include "libdis6/common/EntityID.h"
#include "libdis6/common/EntityType.h"
#include "libdis6/common/Orientation.h"
#include "libdis6/common/Vector3Double.h"
#include "libdis6/common/Vector3Float.h"
#include "libdis6/entity_information/DeadReckoningParameter.h"
#include "libdis6/entity_information/EntityInformationFamilyPdu.h"
#include "libdis6/entity_information/Marking.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.3.1. Represents the postion and state of one entity in the world.
// COMPLETE

class EntityStatePdu final : public EntityInformationFamilyPdu {
 private:
  /** Unique ID for an entity that is tied to this state information */
  EntityID entity_id_;

  /** What force this entity is affiliated with, eg red, blue, neutral, etc */
  uint8_t force_id_;

  /** How many articulation parameters are in the variable length list */
  char number_of_articulation_parameters_;

  /** Describes the type of entity in the world */
  EntityType entity_type_;

  EntityType alternative_entity_type_;

  /** Describes the speed of the entity in the world */
  Vector3Float entity_linear_velocity_;

  /** describes the location of the entity in the world */
  Vector3Double entity_location_;

  /** describes the orientation of the entity, in euler angles */
  Orientation entity_orientation_;

  /** a series of bit flags that are used to help draw the entity, such as
   * smoking, on fire, etc. */
  int entity_appearance_;

  /** parameters used for dead reckoning */
  DeadReckoningParameter dead_reckoning_parameters_;

  /** characters that can be used for debugging, or to draw unique strings on
   * the side of entities in the world */
  Marking marking_;

  /** a series of bit flags */
  int capabilities_;

  /** variable length list of articulation parameters */
  std::vector<ArticulationParameter> articulation_parameters_;

 public:
  EntityStatePdu();
  ~EntityStatePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetEntityId();
  [[nodiscard]] const EntityID& GetEntityId() const;
  void SetEntityId(const EntityID& value);

  [[nodiscard]] uint8_t GetForceId() const;
  void SetForceId(uint8_t value);

  [[nodiscard]] char GetNumberOfArticulationParameters() const;

  EntityType& GetEntityType();
  [[nodiscard]] const EntityType& GetEntityType() const;
  void SetEntityType(const EntityType& value);

  EntityType& GetAlternativeEntityType();
  [[nodiscard]] const EntityType& GetAlternativeEntityType() const;
  void SetAlternativeEntityType(const EntityType& value);

  Vector3Float& GetEntityLinearVelocity();
  [[nodiscard]] const Vector3Float& GetEntityLinearVelocity() const;
  void SetEntityLinearVelocity(const Vector3Float& value);

  Vector3Double& GetEntityLocation();
  [[nodiscard]] const Vector3Double& GetEntityLocation() const;
  void SetEntityLocation(const Vector3Double& value);

  Orientation& GetEntityOrientation();
  [[nodiscard]] const Orientation& GetEntityOrientation() const;
  void SetEntityOrientation(const Orientation& value);

  [[nodiscard]] int GetEntityAppearance() const;
  void SetEntityAppearance(int value);

  DeadReckoningParameter& GetDeadReckoningParameters();
  [[nodiscard]] const DeadReckoningParameter& GetDeadReckoningParameters()
      const;
  void SetDeadReckoningParameters(const DeadReckoningParameter& value);

  Marking& GetMarking();
  [[nodiscard]] const Marking& GetMarking() const;
  void SetMarking(const Marking& value);

  [[nodiscard]] int GetCapabilities() const;
  void SetCapabilities(int value);

  std::vector<ArticulationParameter>& GetArticulationParameters();
  [[nodiscard]] const std::vector<ArticulationParameter>&
  GetArticulationParameters() const;
  void SetArticulationParameters(
      const std::vector<ArticulationParameter>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const EntityStatePdu& rhs) const;
};
}  // namespace dis
