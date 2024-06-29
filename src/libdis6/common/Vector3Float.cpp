#include "dis6/common/Vector3Float.h"

namespace dis {
Vector3Float::Vector3Float() : x_(0.0), y_(0.0), z_(0.0) {}

float Vector3Float::GetX() const { return x_; }

void Vector3Float::SetX(float value) { x_ = value; }

float Vector3Float::GetY() const { return y_; }

void Vector3Float::SetY(float value) { y_ = value; }

float Vector3Float::GetZ() const { return z_; }

void Vector3Float::SetZ(float value) { z_ = value; }

void Vector3Float::Marshal(DataStream& data_stream) const {
  data_stream << x_;
  data_stream << y_;
  data_stream << z_;
}

void Vector3Float::Unmarshal(DataStream& data_stream) {
  data_stream >> x_;
  data_stream >> y_;
  data_stream >> z_;
}

bool Vector3Float::operator==(const Vector3Float& rhs) const {
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

std::size_t Vector3Float::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(x_) + sizeof(y_) + sizeof(z_);
  return marshal_size;
}

}  // namespace dis

