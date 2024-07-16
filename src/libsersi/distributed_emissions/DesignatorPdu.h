#pragma once

#include <cstdint>

#include "libsersi/common/EntityID.h"
#include "libsersi/common/Vector3Double.h"
#include "libsersi/common/Vector3Float.h"
#include "libsersi/distributed_emissions/DistributedEmissionsFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.7.2. Handles designating operations. COMPLETE

class DesignatorPdu final : public DistributedEmissionsFamilyPdu {
 private:
  /** ID of the entity designating */
  EntityID designating_entity_id_;

  /** This field shall specify a unique emitter database number assigned to
   * differentiate between otherwise similar or identical emitter beams within
   * an emitter system. */
  uint16_t code_name_;

  /** ID of the entity being designated */
  EntityID designated_entity_id_;

  /** This field shall identify the designator code being used by the
   * designating entity  */
  uint16_t designator_code_;

  /** This field shall identify the designator output power in watts */
  float designator_power_;

  /** This field shall identify the designator wavelength in units of microns */
  float designator_wavelength_;

  /** designtor spot wrt the designated entity */
  Vector3Float designator_spot_wrt_designated_;

  /** designtor spot wrt the designated entity */
  Vector3Double designator_spot_location_;

  /** Dead reckoning algorithm */
  char dead_reckoning_algorithm_;

  /** padding */
  uint16_t padding1_;

  /** padding */
  char padding2_;

  /** linear accelleration of entity */
  Vector3Float entity_linear_acceleration_;

 public:
  DesignatorPdu();
  ~DesignatorPdu() final;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  [[nodiscard]] const EntityID& GetDesignatingEntityId() const;
  void SetDesignatingEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetCodeName() const;
  void SetCodeName(uint16_t value);

  [[nodiscard]] const EntityID& GetDesignatedEntityId() const;
  void SetDesignatedEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetDesignatorCode() const;
  void SetDesignatorCode(uint16_t value);

  [[nodiscard]] float GetDesignatorPower() const;
  void SetDesignatorPower(float value);

  [[nodiscard]] float GetDesignatorWavelength() const;
  void SetDesignatorWavelength(float value);

  [[nodiscard]] const Vector3Float& GetDesignatorSpotWrtDesignated() const;
  void SetDesignatorSpotWrtDesignated(const Vector3Float& value);

  [[nodiscard]] const Vector3Double& GetDesignatorSpotLocation() const;
  void SetDesignatorSpotLocation(const Vector3Double& value);

  [[nodiscard]] char GetDeadReckoningAlgorithm() const;
  void SetDeadReckoningAlgorithm(char value);

  [[nodiscard]] uint16_t GetPadding1() const;
  void SetPadding1(uint16_t value);

  [[nodiscard]] char GetPadding2() const;
  void SetPadding2(char value);

  [[nodiscard]] const Vector3Float& GetEntityLinearAcceleration() const;
  void SetEntityLinearAcceleration(const Vector3Float& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const DesignatorPdu& rhs) const;
};

}  // namespace dis
