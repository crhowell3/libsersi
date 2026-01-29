#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.10.1 Abstract superclass for PDUs relating to minefields

class MinefieldFamilyPdu : public Pdu {
 public:
  MinefieldFamilyPdu() = default;
  ~MinefieldFamilyPdu() override = default;

  void Marshal(ByteBuffer& byte_buffer) const override;
  void Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const MinefieldFamilyPdu& rhs) const;
};
}  // namespace dis
