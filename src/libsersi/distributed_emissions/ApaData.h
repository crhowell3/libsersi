#pragma once

#include <cstddef>
#include <cstdint>

#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Used in UA PDU

class ApaData {
 private:
  /** Index of APA parameter */
  uint16_t parameter_index_;  // NOLINT

  /** Index of APA parameter */
  int16_t parameter_value_;  // NOLINT

 public:
  ApaData();
  ~ApaData() = default;

  void Marshal(ByteBuffer& byte_buffer) const;
  void Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] uint16_t GetParameterIndex() const;
  void SetParameterIndex(uint16_t value);

  [[nodiscard]] int16_t GetParameterValue() const;
  void SetParameterValue(int16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize();

  bool operator==(const ApaData& rhs) const;
};
}  // namespace dis
