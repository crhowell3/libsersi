#pragma once

#include "sersi/utils/DataStream.h"

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
  Vector3Float() = default;
  ~Vector3Float() = default;

  void Marshal(dis::DataStream& data_stream) const {
    data_stream << x_;
    data_stream << y_;
    data_stream << z_;
  }
  void Unmarshal(dis::DataStream& data_stream) {
    data_stream >> x_;
    data_stream >> y_;
    data_stream >> z_;
  }

  [[nodiscard]] float GetX() const { return x_; }
  void SetX(float value) { x_ = value; }

  [[nodiscard]] float GetY() const { return y_; }
  void SetY(float value) { y_ = value; }

  [[nodiscard]] float GetZ() const { return z_; }
  void SetZ(float value) { z_ = value; }

  [[nodiscard]] std::size_t GetMarshalledSize() const {
    return sizeof(x_) + sizeof(y_) + sizeof(z_);
  }

  bool operator==(const Vector3Float& rhs) const {
    return x_ == rhs.x_ && y_ == rhs.y_ && z_ == rhs.z_;
  }
};
}  // namespace dis
