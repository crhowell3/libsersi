#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.11: Abstract superclass for synthetic environment PDUs

class SyntheticEnvironmentFamilyPdu : public Pdu {
 public:
  SyntheticEnvironmentFamilyPdu() = default;
  ~SyntheticEnvironmentFamilyPdu() override = default;

  void Marshal(ByteBuffer& byte_buffer) const override;
  void Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const SyntheticEnvironmentFamilyPdu& rhs) const;
};
}  // namespace dis
