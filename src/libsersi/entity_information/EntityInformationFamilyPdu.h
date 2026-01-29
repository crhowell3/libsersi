#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.3. Common superclass for EntityState, Collision,
// collision-elastic, and entity state update PDUs. This should be abstract.
// COMPLETE

class EntityInformationFamilyPdu : public Pdu {
 public:
  EntityInformationFamilyPdu() = default;
  ~EntityInformationFamilyPdu() override = default;

  void Marshal(ByteBuffer& byte_buffer) const override;
  void Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const EntityInformationFamilyPdu& rhs) const;
};
}  // namespace dis
