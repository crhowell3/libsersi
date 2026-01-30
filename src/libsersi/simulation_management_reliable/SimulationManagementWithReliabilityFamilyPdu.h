#pragma once

#include <cstddef>

#include common/EntityID.h"
#include common/Pdu.hpp"
#include utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.12: Abstract superclass for reliable simulation management PDUs

class SimulationManagementWithReliabilityFamilyPdu : public Pdu {
 private:
  /** Object originatig the request */
  EntityID originating_entity_id_;

  /** Object with which this point object is associated */
  EntityID receiving_entity_id_;

 public:
  SimulationManagementWithReliabilityFamilyPdu() = default;
  ~SimulationManagementWithReliabilityFamilyPdu() override = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const override;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) override;

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
