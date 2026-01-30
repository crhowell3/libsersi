#include "common/data_types/Vector3Double.hpp"

namespace dis {
Vector3Double::Vector3Double() : x_(0.0), y_(0.0), z_(0.0) {}

double Vector3Double::GetX() const { return x_; }

void Vector3Double::SetX(double value) { x_ = value; }

double Vector3Double::GetY() const { return y_; }

void Vector3Double::SetY(double value) { y_ = value; }

double Vector3Double::GetZ() const { return z_; }

void Vector3Double::SetZ(double value) { z_ = value; }

Result<void, std::string> Vector3Double::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << x_;
  byte_buffer << y_;
  byte_buffer << z_;

  return Result<void, std::string>::Ok();
}

Result<void, std::string> Vector3Double::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> x_;
  byte_buffer >> y_;
  byte_buffer >> z_;

  return Result<void, std::string>::Ok();
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
