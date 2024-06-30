#include "libdis6/common/Vector3Double.h"

namespace dis {
Vector3Double::Vector3Double() : x_(0.0), y_(0.0), z_(0.0) {}

double Vector3Double::GetX() const { return x_; }

void Vector3Double::SetX(double value) { x_ = value; }

double Vector3Double::GetY() const { return y_; }

void Vector3Double::SetY(double value) { y_ = value; }

double Vector3Double::GetZ() const { return z_; }

void Vector3Double::SetZ(double value) { z_ = value; }

void Vector3Double::Marshal(DataStream& data_stream) const {
  data_stream << x_;
  data_stream << y_;
  data_stream << z_;
}

void Vector3Double::Unmarshal(DataStream& data_stream) {
  data_stream >> x_;
  data_stream >> y_;
  data_stream >> z_;
}

bool Vector3Double::operator==(const Vector3Double& rhs) const {
  bool ivars_equal = true;

  if (!(x_ == rhs.x_)) {
    ivars_equal = false;
  }
  if (!(y_ == rhs.y_)) {
    ivars_equal = false;
  }
  if (!(z_ == rhs.z_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t Vector3Double::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(x_) + sizeof(y_) + sizeof(z_);
  return marshal_size;
}

}  // namespace dis

