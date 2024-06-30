#pragma once

#include <cstddef>

#include "libdis6/common/EntityID.h"
#include "libdis6/common/Pdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12: Abstract superclass for reliable simulation management PDUs

class SimulationManagementWithReliabilityFamilyPdu : public Pdu {
 private:
  /** Object originatig the request */
  EntityID originating_entity_id_;

  /** Object with which this point object is associated */
  EntityID receiving_entity_id_;

 public:
  SimulationManagementWithReliabilityFamilyPdu();
  ~SimulationManagementWithReliabilityFamilyPdu() override = default;

  void Marshal(DataStream& data_stream) const override;
  void Unmarshal(DataStream& data_stream) override;

  EntityID& GetOriginatingEntityId();
  [[nodiscard]] const EntityID& GetOriginatingEntityId() const;
  void SetOriginatingEntityId(const EntityID& value);

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(
      const SimulationManagementWithReliabilityFamilyPdu& rhs) const;
};
}  // namespace dis
