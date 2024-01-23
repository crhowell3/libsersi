#pragma once

#include <vector>

#include "dis6/common/EntityID.h"
#include "dis6/common/EventID.h"
#include "dis6/distributed_emissions/DistributedEmissionsFamilyPdu.h"
#include "dis6/distributed_emissions/ElectromagneticEmissionSystemData.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.7.1. Information about active electronic warfare (EW) emissions
// and active EW countermeasures shall be communicated using an Electromagnetic
// Emission PDU. COMPLETE (I think)

class ElectromagneticEmissionsPdu : public DistributedEmissionsFamilyPdu {
 private:
  /** ID of the entity emitting */
  EntityID emitting_entity_id_;

  /** ID of event */
  EventID event_id_;

  /** This field shall be used to indicate if the data in the PDU represents a
   * state update or just data that has changed since issuance of the last
   * Electromagnetic Emission PDU [relative to the identified entity and
   * emission system(s)]. */
  uint8_t state_update_indicator_;

  /** This field shall specify the number of emission systems being described in
   * the current PDU. */
  uint8_t number_of_systems_;

  /** padding */
  uint16_t padding_for_emissions_pdu_;

  /** Electromagnetic emmissions systems */
  std::vector<ElectromagneticEmissionSystemData> systems_;

 public:
  ElectromagneticEmissionsPdu();
  ~ElectromagneticEmissionsPdu() override;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  EntityID& GetEmittingEntityId();
  [[nodiscard]] const EntityID& GetEmittingEntityId() const;
  void SetEmittingEntityId(const EntityID& value);

  EventID& GetEventId();
  [[nodiscard]] const EventID& GetEventId() const;
  void SetEventId(const EventID& value);

  [[nodiscard]] uint8_t GetStateUpdateIndicator() const;
  void SetStateUpdateIndicator(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfSystems() const;

  [[nodiscard]] uint16_t GetPaddingForEmissionsPdu() const;
  void SetPaddingForEmissionsPdu(uint16_t value);

  std::vector<ElectromagneticEmissionSystemData>& GetSystems();
  [[nodiscard]] const std::vector<ElectromagneticEmissionSystemData>&
  GetSystems() const;
  void SetSystems(const std::vector<ElectromagneticEmissionSystemData>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const ElectromagneticEmissionsPdu& rhs) const;
};
}  // namespace dis
