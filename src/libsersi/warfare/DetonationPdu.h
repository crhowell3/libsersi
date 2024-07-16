#pragma once

#include <cstddef>
#include <vector>

#include "libsersi/common/ArticulationParameter.h"
#include "libsersi/common/EntityID.h"
#include "libsersi/common/EventID.h"
#include "libsersi/common/Vector3Double.h"
#include "libsersi/common/Vector3Float.h"
#include "libsersi/utils/DataStream.h"
#include "libsersi/warfare/BurstDescriptor.h"
#include "libsersi/warfare/WarfareFamilyPdu.h"

namespace dis {
// Section 5.3.4.2. Information about stuff exploding. COMPLETE

class DetonationPdu final : public WarfareFamilyPdu {
 private:
  /** ID of muntion that was fired */
  EntityID munition_id_;

  /** ID firing event */
  EventID event_id_;

  /** ID firing event */
  Vector3Float velocity_;

  /** where the detonation is, in world coordinates */
  Vector3Double location_in_world_coordinates_;

  /** Describes munition used */
  BurstDescriptor burst_descriptor_;

  /** location of the detonation or impact in the target entity's coordinate
   * system. This information should be used for damage assessment. */
  Vector3Float location_in_entity_coordinates_;

  /** result of the explosion */
  uint8_t detonation_result_;

  /** How many articulation parameters we have */
  uint8_t number_of_articulation_parameters_;

  /** padding */
  int16_t pad_;

  std::vector<ArticulationParameter> articulation_parameters_;

 public:
  DetonationPdu();
  ~DetonationPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetMunitionId();
  [[nodiscard]] const EntityID& GetMunitionId() const;
  void SetMunitionId(const EntityID& value);

  EventID& GetEventId();
  [[nodiscard]] const EventID& GetEventId() const;
  void SetEventId(const EventID& value);

  Vector3Float& GetVelocity();
  [[nodiscard]] const Vector3Float& GetVelocity() const;
  void SetVelocity(const Vector3Float& value);

  Vector3Double& GetLocationInWorldCoordinates();
  [[nodiscard]] const Vector3Double& GetLocationInWorldCoordinates() const;
  void SetLocationInWorldCoordinates(const Vector3Double& value);

  BurstDescriptor& GetBurstDescriptor();
  [[nodiscard]] const BurstDescriptor& GetBurstDescriptor() const;
  void SetBurstDescriptor(const BurstDescriptor& value);

  Vector3Float& GetLocationInEntityCoordinates();
  [[nodiscard]] const Vector3Float& GetLocationInEntityCoordinates() const;
  void SetLocationInEntityCoordinates(const Vector3Float& value);

  [[nodiscard]] uint8_t GetDetonationResult() const;
  void SetDetonationResult(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfArticulationParameters() const;

  [[nodiscard]] int16_t GetPad() const;
  void SetPad(int16_t value);

  std::vector<ArticulationParameter>& GetArticulationParameters();
  [[nodiscard]] const std::vector<ArticulationParameter>&
  GetArticulationParameters() const;
  void SetArticulationParameters(
      const std::vector<ArticulationParameter>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const DetonationPdu& rhs) const;
};
}  // namespace dis
