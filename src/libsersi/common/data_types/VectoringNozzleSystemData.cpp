#include distributed_emissions/VectoringNozzleSystemData.h"

namespace dis {
VectoringNozzleSystemData::VectoringNozzleSystemData()
    : horizontal_deflection_angle_(0.0), vertical_deflection_angle_(0.0) {}

float VectoringNozzleSystemData::GetHorizontalDeflectionAngle() const {
  return horizontal_deflection_angle_;
}

void VectoringNozzleSystemData::SetHorizontalDeflectionAngle(float value) {
  horizontal_deflection_angle_ = value;
}

float VectoringNozzleSystemData::GetVerticalDeflectionAngle() const {
  return vertical_deflection_angle_;
}

void VectoringNozzleSystemData::SetVerticalDeflectionAngle(float value) {
  vertical_deflection_angle_ = value;
}

void VectoringNozzleSystemData::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << horizontal_deflection_angle_;
  byte_buffer << vertical_deflection_angle_;
}

void VectoringNozzleSystemData::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> horizontal_deflection_angle_;
  byte_buffer >> vertical_deflection_angle_;
}

bool VectoringNozzleSystemData::operator==(
    const VectoringNozzleSystemData& rhs) const {
  bool ivars_equal = true;

  if (!(horizontal_deflection_angle_ == rhs.horizontal_deflection_angle_)) {
    ivars_equal = false;
  }
  if (!(vertical_deflection_angle_ == rhs.vertical_deflection_angle_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t VectoringNozzleSystemData::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(horizontal_deflection_angle_) + sizeof(vertical_deflection_angle_);
  return marshal_size;
}

}  // namespace dis
