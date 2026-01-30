#pragma once

#include <cstddef>

#include common/Pdu.hpp"
#include utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.11: Abstract superclass for synthetic environment PDUs

class SyntheticEnvironmentFamilyPdu : public Pdu {
 public:
  SyntheticEnvironmentFamilyPdu() = default;
  ~SyntheticEnvironmentFamilyPdu() override = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const override;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const SyntheticEnvironmentFamilyPdu& rhs) const;
};
}  // namespace dis
