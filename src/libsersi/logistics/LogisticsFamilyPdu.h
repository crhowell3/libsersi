#pragma once

#include <cstddef>

#include "libsersi/common/Pdu.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.5. Abstract superclass for logistics PDUs. COMPLETE

class LogisticsFamilyPdu : public Pdu {
 public:
  LogisticsFamilyPdu() = default;
  ~LogisticsFamilyPdu() override = default;

  void Marshal(ByteBuffer& byte_buffer) const override;
  void Unmarshal(ByteBuffer& byte_buffer) override;

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const LogisticsFamilyPdu& rhs) const;
};
}  // namespace dis
