#include minefield/Point.h"

#include <cstddef>

namespace dis {

float Point::GetX() const { return x_; }

void Point::SetX(float value) { x_ = value; }

float Point::GetY() const { return y_; }

void Point::SetY(float value) { y_ = value; }

void Point::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << x_;
  byte_buffer << y_;
}

void Point::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> x_;
  byte_buffer >> y_;
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
