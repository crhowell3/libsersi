#pragma once

#include <cstddef>

#include common/Pdu.hpp"
#include utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.5. Abstract superclass for logistics PDUs. COMPLETE

class LogisticsFamilyPdu : public Pdu {
 public:
  LogisticsFamilyPdu() = default;
  ~LogisticsFamilyPdu() override = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const override;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const LogisticsFamilyPdu& rhs) const;
};
}  // namespace dis
