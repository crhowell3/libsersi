#ifndef LIBSERSI_COMMON_VECTOR3DOUBLE_H_
#define LIBSERSI_COMMON_VECTOR3DOUBLE_H_

#include "libsersi/utils/DataStream.h"

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
  Vector3Double();
  ~Vector3Double() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] double GetX() const;
  void SetX(double value);

  [[nodiscard]] double GetY() const;
  void SetY(double value);

  [[nodiscard]] double GetZ() const;
  void SetZ(double value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Vector3Double& rhs) const;
};
}  // namespace dis

#endif  // LIBSERSI_COMMON_VECTOR3DOUBLE_H_

