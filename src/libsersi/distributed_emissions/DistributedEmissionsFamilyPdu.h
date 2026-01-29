#pragma once

#include "libsersi/common/Pdu.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.7. Electromagnetic Emissions. Abstract superclass for distirubted
// emissions PDU

class DistributedEmissionsFamilyPdu : public Pdu {
 private:
 public:
  DistributedEmissionsFamilyPdu() = default;
  ~DistributedEmissionsFamilyPdu() override = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const override;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const DistributedEmissionsFamilyPdu& rhs) const;
};
}  // namespace dis
