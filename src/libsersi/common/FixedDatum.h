#pragma once

#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.2.18. Fixed Datum Record

class FixedDatum {
 private:
  /** ID of the fixed datum */
  uint32_t fixed_datum_id_;

  /** Value for the fixed datum */
  uint32_t fixed_datum_value_;

 public:
  FixedDatum();
  ~FixedDatum() = default;

  void Marshal(dis::ByteBuffer& byte_buffer) const;
  void Unmarshal(dis::ByteBuffer& byte_buffer);

  [[nodiscard]] uint32_t GetFixedDatumId() const;
  void SetFixedDatumId(uint32_t value);

  [[nodiscard]] uint32_t GetFixedDatumValue() const;
  void SetFixedDatumValue(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const FixedDatum& rhs) const;
};
}  // namespace dis
