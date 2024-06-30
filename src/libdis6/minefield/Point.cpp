#include "libdis6/minefield/Point.h"

#include <cstddef>

namespace dis {

float Point::GetX() const { return x_; }

void Point::SetX(float value) { x_ = value; }

float Point::GetY() const { return y_; }

void Point::SetY(float value) { y_ = value; }

void Point::Marshal(DataStream& data_stream) const {
  data_stream << x_;
  data_stream << y_;
}

void Point::Unmarshal(DataStream& data_stream) {
  data_stream >> x_;
  data_stream >> y_;
}

bool Point::operator==(const Point& rhs) const {
  bool ivars_equal = true;

  if (!(x_ == rhs.x_)) {
    ivars_equal = false;
  }
  if (!(y_ == rhs.y_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t Point::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(x_) + sizeof(y_);
  return marshal_size;
}

}  // namespace dis
