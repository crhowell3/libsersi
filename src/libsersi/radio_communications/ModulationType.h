#pragma once

#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Radio modulation

class ModulationType {
 private:
  /** spread spectrum, 16 bit boolean array */
  uint16_t spread_spectrum_;

  /** major */
  uint16_t major_;

  /** detail */
  uint16_t detail_;

  /** system */
  uint16_t system_;

 public:
  ModulationType();
  ~ModulationType() = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] uint16_t GetSpreadSpectrum() const;
  void SetSpreadSpectrum(uint16_t value);

  [[nodiscard]] uint16_t GetMajor() const;
  void SetMajor(uint16_t value);

  [[nodiscard]] uint16_t GetDetail() const;
  void SetDetail(uint16_t value);

  [[nodiscard]] uint16_t GetSystem() const;
  void SetSystem(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const ModulationType& rhs) const;
};
}  // namespace dis
