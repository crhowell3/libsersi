#pragma once

#include <cstddef>

#include "libsersi/utils/DataStream.h"

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

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] float GetX() const;
  void SetX(float value);

  [[nodiscard]] float GetY() const;
  void SetY(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Point& rhs) const;
};

}  // namespace dis
