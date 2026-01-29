#pragma once

#include "libsersi/common/PduHeader.hpp"
#include "libsersi/common/Result.hpp"
#include "libsersi/utils/ByteBuffer.hpp"

#define FIELD(type, name)                      \
 private:                                      \
  type name##_;                                \
                                               \
 public:                                       \
  const type& name() const { return name##_; } \
  void name(const type& value) { name##_ = value; }

namespace dis {
// The superclass for all PDUs. This incorporates the PduHeader record,
// section 5.2.29.

class Pdu {
 protected:
  PduHeader header_;  // NOLINT

 public:
  Pdu() = default;
  virtual ~Pdu() = default;

  virtual Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  virtual Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] const PduHeader header() const;

  [[nodiscard]] virtual std::size_t GetMarshalledSize() const;

  bool operator==(const Pdu& rhs) const;
};
}  // namespace dis
