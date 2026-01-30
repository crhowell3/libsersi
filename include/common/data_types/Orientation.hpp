#pragma once

#include <cstddef>

#include "utils/ByteBuffer.hpp"
#include "common/Result.hpp"

namespace dis {
// Section 5.2.17. Three floating point values representing an orientation, psi,
// theta, and phi, aka the euler angles, in radians

class Orientation {
 private:
  float psi_;

  float theta_;

  float phi_;

 public:
  Orientation();
  ~Orientation() = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] float GetPsi() const;
  void SetPsi(float value);

  [[nodiscard]] float GetTheta() const;
  void SetTheta(float value);

  [[nodiscard]] float GetPhi() const;
  void SetPhi(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Orientation& rhs) const;
};
}  // namespace dis
