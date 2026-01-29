#pragma once

#include <cstddef>

#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// x,y point

class Point {
 private:
  /** x */
  float x_;

  /** y */
  float y_;

 public:
  Point() = default;
  ~Point() = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] float GetX() const;
  void SetX(float value);

  [[nodiscard]] float GetY() const;
  void SetY(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Point& rhs) const;
};

}  // namespace dis
