#pragma once

#include <cstddef>

#include "libsersi/common/EntityID.h"
#include "libsersi/common/Pdu.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.6. Abstract superclass for PDUs relating to the simulation
// itself. COMPLETE

class SimulationManagementFamilyPdu : public Pdu {
 private:
  /** Entity that is sending message */
  EntityID originating_entity_id_;

  /** Entity that is intended to receive message */
  EntityID receiving_entity_id_;

 public:
  SimulationManagementFamilyPdu() = default;
  ~SimulationManagementFamilyPdu() override = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const override;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) override;

  EntityID& GetOriginatingEntityId();
  [[nodiscard]] const EntityID& GetOriginatingEntityId() const;
  void SetOriginatingEntityId(const EntityID& value);

  EntityID& GetReceivingEntityId();
  [[nodiscard]] const EntityID& GetReceivingEntityId() const;
  void SetReceivingEntityId(const EntityID& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const SimulationManagementFamilyPdu& rhs) const;
};
}  // namespace dis
