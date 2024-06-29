#pragma once

#include <cstddef>
#include <vector>

#include "dis6/common/EntityID.h"
#include "dis6/distributed_emissions/DistributedEmissionsFamilyPdu.h"
#include "dis6/distributed_emissions/PropulsionSystemData.h"
#include "dis6/distributed_emissions/VectoringNozzleSystemData.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.7.5. SEES PDU, supplemental emissions entity state information.
// COMPLETE

class SeesPdu final : public DistributedEmissionsFamilyPdu {
 private:
  /** Originating entity ID */
  EntityID originating_entity_id_;

  /** IR Signature representation index */
  uint16_t infrared_signature_representation_index_;

  /** acoustic Signature representation index */
  uint16_t acoustic_signature_representation_index_;

  /** radar cross section representation index */
  uint16_t radar_cross_section_signature_representation_index_;

  /** how many propulsion systems */
  uint16_t number_of_propulsion_systems_;

  /** how many vectoring nozzle systems */
  uint16_t number_of_vectoring_nozzle_systems_;

  /** variable length list of propulsion system data */
  std::vector<PropulsionSystemData> propulsion_system_data_;

  /** variable length list of vectoring system data */
  std::vector<VectoringNozzleSystemData> vectoring_system_data_;

 public:
  SeesPdu();
  ~SeesPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  EntityID& GetOriginatingEntityId();
  [[nodiscard]] const EntityID& GetOriginatingEntityId() const;
  void SetOriginatingEntityId(const EntityID& value);

  [[nodiscard]] uint16_t GetInfraredSignatureRepresentationIndex() const;
  void SetInfraredSignatureRepresentationIndex(uint16_t value);

  [[nodiscard]] uint16_t GetAcousticSignatureRepresentationIndex() const;
  void SetAcousticSignatureRepresentationIndex(uint16_t value);

  [[nodiscard]] uint16_t GetRadarCrossSectionSignatureRepresentationIndex()
      const;
  void SetRadarCrossSectionSignatureRepresentationIndex(uint16_t value);

  [[nodiscard]] uint16_t GetNumberOfPropulsionSystems() const;

  [[nodiscard]] uint16_t GetNumberOfVectoringNozzleSystems() const;

  std::vector<PropulsionSystemData>& GetPropulsionSystemData();
  [[nodiscard]] const std::vector<PropulsionSystemData>&
  GetPropulsionSystemData() const;
  void SetPropulsionSystemData(const std::vector<PropulsionSystemData>& value);

  std::vector<VectoringNozzleSystemData>& GetVectoringSystemData();
  [[nodiscard]] const std::vector<VectoringNozzleSystemData>&
  GetVectoringSystemData() const;
  void SetVectoringSystemData(
      const std::vector<VectoringNozzleSystemData>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const SeesPdu& rhs) const;
};
}  // namespace dis
