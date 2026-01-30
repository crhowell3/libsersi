#pragma once

#include <cstddef>

#include common/Pdu.hpp"
#include utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.3. Common superclass for EntityState, Collision,
// collision-elastic, and entity state update PDUs. This should be abstract.
// COMPLETE

class EntityInformationFamilyPdu : public Pdu {
 public:
  EntityInformationFamilyPdu() = default;
  ~EntityInformationFamilyPdu() override = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const override;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const EntityInformationFamilyPdu& rhs) const;
};
}  // namespace dis
