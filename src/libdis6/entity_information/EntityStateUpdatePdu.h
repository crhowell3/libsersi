#pragma once

#include <vector>

#include "dis6/common/ArticulationParameter.h"
#include "dis6/common/EntityID.h"
#include "dis6/common/Orientation.h"
#include "dis6/common/Vector3Double.h"
#include "dis6/common/Vector3Float.h"
#include "dis6/entity_information/EntityInformationFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// 5.3.3.4. Nonstatic information about a particular entity may be communicated
// by issuing an Entity State Update PDU. COMPLETE

class EntityStateUpdatePdu final : public EntityInformationFamilyPdu {
 private:
  /** This field shall identify the entity issuing the PDU */
  EntityID entity_id_;

  /** Padding */
  char padding1_;

  /** How many articulation parameters are in the variable length list */
  uint8_t number_of_articulation_parameters_;

  /** Describes the speed of the entity in the world */
  Vector3Float entity_linear_velocity_;

  /** describes the location of the entity in the world */
  Vector3Double entity_location_;

  /** describes the orientation of the entity, in euler angles */
  Orientation entity_orientation_;

  /** a series of bit flags that are used to help draw the entity, such as
   * smoking, on fire, etc. */
  int entity_appearance_;

  std::vector<ArticulationParameter> articulation_parameters_;

 public:
  EntityStateUpdatePdu();
  ~EntityStateUpdatePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetEntityId();
  [[nodiscard]] const EntityID& GetEntityId() const;
  void SetEntityId(const EntityID& value);

  [[nodiscard]] char GetPadding1() const;
  void SetPadding1(char value);

  [[nodiscard]] uint8_t GetNumberOfArticulationParameters() const;

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

  std::vector<ArticulationParameter>& GetArticulationParameters();
  [[nodiscard]] const std::vector<ArticulationParameter>&
  GetArticulationParameters() const;
  void SetArticulationParameters(
      const std::vector<ArticulationParameter>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const EntityStateUpdatePdu& rhs) const;
};
}  // namespace dis
