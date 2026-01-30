#pragma once

#include <cstddef>

#include common/Pdu.hpp"
#include utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.10.1 Abstract superclass for PDUs relating to minefields

class MinefieldFamilyPdu : public Pdu {
 public:
  MinefieldFamilyPdu() = default;
  ~MinefieldFamilyPdu() override = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const override;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const MinefieldFamilyPdu& rhs) const;
};
}  // namespace dis
