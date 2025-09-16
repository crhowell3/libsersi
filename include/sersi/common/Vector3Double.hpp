#pragma once

#include "sersi/utils/DataStream.h"

namespace dis {
// Section 5.3.34. Three double precision floating point values, x, y, and z

class Vector3Double {
 private:
  /** X value */
  double x_;  // NOLINT

  /** Y value */
  double y_;  // NOLINT

  /** Z value */
  double z_;  // NOLINT

 public:
  Vector3Double() = default;
  ~Vector3Double() = default;

  void Marshal(DataStream& data_stream) const {
    data_stream << x_;
    data_stream << y_;
    data_stream << z_;
  }
  void Unmarshal(DataStream& data_stream) {
    data_stream >> x_;
    data_stream >> y_;
    data_stream >> z_;
  }

  [[nodiscard]] auto GetX() const -> double { return x_; }
  void SetX(double value) { x_ = value; }

  [[nodiscard]] auto GetY() const -> double { return y_; }
  void SetY(double value) { y_ = value; }

  [[nodiscard]] auto GetZ() const -> double { return z_; }
  void SetZ(double value) { z_ = value; }

  [[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
    return sizeof(x_) + sizeof(y_) + sizeof(z_);
  }

  auto operator==(const Vector3Double& rhs) const -> bool {
    return x_ == rhs.x_ && y_ == rhs.y_ && z_ == rhs.z_;
  }
};
}  // namespace dis
