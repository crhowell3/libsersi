#include "libsersi/entity_information/DeadReckoningParameter.h"

namespace dis {
DeadReckoningParameter::DeadReckoningParameter()
    : dead_reckoning_algorithm_(0) {
  // Initialize fixed length array
  for (char& other_parameter : other_parameters_) {
    other_parameter = 0;
  }
}

uint8_t DeadReckoningParameter::GetDeadReckoningAlgorithm() const {
  return dead_reckoning_algorithm_;
}

void DeadReckoningParameter::SetDeadReckoningAlgorithm(uint8_t value) {
  dead_reckoning_algorithm_ = value;
}

std::array<char, kArraySize> DeadReckoningParameter::GetOtherParameters() {
  return other_parameters_;
}

const std::array<char, kArraySize>& DeadReckoningParameter::GetOtherParameters()
    const {
  return other_parameters_;
}

void DeadReckoningParameter::SetOtherParameters(const char* value) {
  for (auto i = 0; i < kArraySize; ++i) {
    other_parameters_[i] = value[i];
  }
}

Vector3Float& DeadReckoningParameter::GetEntityLinearAcceleration() {
  return entity_linear_acceleration_;
}

const Vector3Float& DeadReckoningParameter::GetEntityLinearAcceleration()
    const {
  return entity_linear_acceleration_;
}

void DeadReckoningParameter::SetEntityLinearAcceleration(
    const Vector3Float& value) {
  entity_linear_acceleration_ = value;
}

Vector3Float& DeadReckoningParameter::GetEntityAngularVelocity() {
  return entity_angular_velocity_;
}

const Vector3Float& DeadReckoningParameter::GetEntityAngularVelocity() const {
  return entity_angular_velocity_;
}

void DeadReckoningParameter::SetEntityAngularVelocity(
    const Vector3Float& value) {
  entity_angular_velocity_ = value;
}

void DeadReckoningParameter::Marshal(DataStream& data_stream) const {
  data_stream << dead_reckoning_algorithm_;

  for (std::size_t idx = 0; idx < kArraySize; idx++) {
    data_stream << other_parameters_[idx];
  }

  entity_linear_acceleration_.Marshal(data_stream);
  entity_angular_velocity_.Marshal(data_stream);
}

void DeadReckoningParameter::Unmarshal(DataStream& data_stream) {
  data_stream >> dead_reckoning_algorithm_;

  for (std::size_t idx = 0; idx < kArraySize; idx++) {
    data_stream >> other_parameters_[idx];
  }

  entity_linear_acceleration_.Unmarshal(data_stream);
  entity_angular_velocity_.Unmarshal(data_stream);
}

bool DeadReckoningParameter::operator==(
    const DeadReckoningParameter& rhs) const {
  bool ivars_equal = true;

  if (!(dead_reckoning_algorithm_ == rhs.dead_reckoning_algorithm_)) {
    ivars_equal = false;
  }
  for (uint8_t idx = 0; idx < kArraySize; idx++) {
    if (!(other_parameters_[idx] == rhs.other_parameters_[idx])) {
      ivars_equal = false;
    }
  }
  if (!(entity_linear_acceleration_ == rhs.entity_linear_acceleration_)) {
    ivars_equal = false;
  }
  if (!(entity_angular_velocity_ == rhs.entity_angular_velocity_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t DeadReckoningParameter::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(dead_reckoning_algorithm_) +
                             other_parameters_.size() +
                             entity_linear_acceleration_.GetMarshalledSize() +
                             entity_angular_velocity_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
