#pragma once

#include <cstddef>
#include <vector>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/EventID.h"
#include "libdis6/distributed_emissions/AcousticEmitterSystemData.h"
#include "libdis6/distributed_emissions/ApaData.h"
#include "libdis6/distributed_emissions/DistributedEmissionsFamilyPdu.h"
#include "libdis6/distributed_emissions/ShaftRPMs.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.7.3. Information about underwater acoustic emmissions. This
// requires manual cleanup.  The beam data records should ALL be a the finish,
// rather than attached to each emitter system. UNFINISHED

class UnderwaterAcousticsPdu final : public DistributedEmissionsFamilyPdu {
 private:
  /** ID of the entity that is the source of the emission */
  EntityID emitting_entity_id_;

  /** ID of event */
  EventID event_id_;

  /** This field shall be used to indicate whether the data in the UA PDU
   * represent a state update or data that have changed since issuance of the
   * last UA PDU */
  char state_change_indicator_;

  /** padding */
  char pad_;

  /** This field indicates which database record (or file) shall be used in the
   * definition of passive signature (unintentional) emissions of the entity.
   * The indicated database record (or  file) shall define all noise generated
   * as a function of propulsion plant configurations and associated
   * auxiliaries. */
  uint16_t passive_parameter_index_;

  /** This field shall specify the entity propulsion plant configuration. This
   * field is used to determine the passive signature characteristics of an
   * entity. */
  uint8_t propulsion_plant_configuration_;

  /**  This field shall represent the number of shafts on a platform */
  uint8_t number_of_shafts_;

  /** This field shall indicate the number of APAs described in the current UA
   * PDU */
  uint8_t number_of_apas_;

  /** This field shall specify the number of UA emitter systems being described
   * in the current UA PDU */
  uint8_t number_of_ua_emitter_systems_;

  /** shaft RPM values */
  std::vector<ShaftRPMs> shaft_rpms_;

  /** apaData */
  std::vector<ApaData> apa_data_;

  std::vector<AcousticEmitterSystemData> emitter_systems_;

 public:
  UnderwaterAcousticsPdu();
  ~UnderwaterAcousticsPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetEmittingEntityId();
  [[nodiscard]] const EntityID& GetEmittingEntityId() const;
  void SetEmittingEntityId(const EntityID& value);

  EventID& GetEventId();
  [[nodiscard]] const EventID& GetEventId() const;
  void SetEventId(const EventID& value);

  [[nodiscard]] char GetStateChangeIndicator() const;
  void SetStateChangeIndicator(char value);

  [[nodiscard]] char GetPad() const;
  void SetPad(char value);

  [[nodiscard]] uint16_t GetPassiveParameterIndex() const;
  void SetPassiveParameterIndex(uint16_t value);

  [[nodiscard]] uint8_t GetPropulsionPlantConfiguration() const;
  void SetPropulsionPlantConfiguration(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfShafts() const;

  [[nodiscard]] uint8_t GetNumberOfApas() const;

  [[nodiscard]] uint8_t GetNumberOfUaEmitterSystems() const;

  std::vector<ShaftRPMs>& GetShaftRPMs();
  [[nodiscard]] const std::vector<ShaftRPMs>& GetShaftRPMs() const;
  void SetShaftRPMs(const std::vector<ShaftRPMs>& value);

  std::vector<ApaData>& GetApaData();
  [[nodiscard]] const std::vector<ApaData>& GetApaData() const;
  void SetApaData(const std::vector<ApaData>& value);

  std::vector<AcousticEmitterSystemData>& GetEmitterSystems();
  [[nodiscard]] const std::vector<AcousticEmitterSystemData>&
  GetEmitterSystems() const;
  void SetEmitterSystems(const std::vector<AcousticEmitterSystemData>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const UnderwaterAcousticsPdu& rhs) const;
};
}  // namespace dis
