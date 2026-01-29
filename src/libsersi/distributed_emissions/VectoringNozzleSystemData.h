#pragma once

#include <cstddef>

#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Data about a vectoring nozzle system

class VectoringNozzleSystemData {
 private:
  /** horizontal deflection angle */
  float horizontal_deflection_angle_;

  /** vertical deflection angle */
  float vertical_deflection_angle_;

 public:
  VectoringNozzleSystemData();
  ~VectoringNozzleSystemData() = default;

  void Marshal(ByteBuffer& byte_buffer) const;
  void Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] float GetHorizontalDeflectionAngle() const;
  void SetHorizontalDeflectionAngle(float value);

  [[nodiscard]] float GetVerticalDeflectionAngle() const;
  void SetVerticalDeflectionAngle(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const VectoringNozzleSystemData& rhs) const;
};
}  // namespace dis
