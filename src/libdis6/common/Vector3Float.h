#pragma once

#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.2.33. Three floating point values, x, y, and z

class Vector3Float {
 private:
  /// X value
  float x_;  // NOLINT

  /// y value
  float y_;  // NOLINT

  /// Z value
  float z_;  // NOLINT

 public:
  Vector3Float();
  ~Vector3Float() = default;

  void Marshal(dis::DataStream& data_stream) const;
  void Unmarshal(dis::DataStream& data_stream);

  [[nodiscard]] float GetX() const;
  void SetX(float value);

  [[nodiscard]] float GetY() const;
  void SetY(float value);

  [[nodiscard]] float GetZ() const;
  void SetZ(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Vector3Float& rhs) const;
};
}  // namespace dis

