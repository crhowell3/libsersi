#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.9. Common superclass for EntityManagment PDUs, including
// aggregate state, isGroupOf, TransferControLRequest, and isPartOf

class EntityManagementFamilyPdu : public Pdu {
 public:
  EntityManagementFamilyPdu() = default;
  ~EntityManagementFamilyPdu() override = default;

  void Marshal(ByteBuffer& byte_buffer) const override;
  void Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const EntityManagementFamilyPdu& rhs) const;
};
}  // namespace dis
