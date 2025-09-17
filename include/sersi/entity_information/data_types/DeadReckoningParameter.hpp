#pragma once

#include <array>
#include <cstddef>

#include "sersi/common/Vector3Float.hpp"
#include "sersi/utils/DataStream.hpp"

namespace dis {
constexpr auto kArraySize = 15;
// represents values used in dead reckoning algorithms

class DeadReckoningParameter {
 private:
  /** enumeration of what dead reckoning algorighm to use */
  uint8_t dead_reckoning_algorithm_;

  /// Byte array of 120 bits reserved for parameters not currently defined
  std::array<char, kArraySize> other_parameters_;  // NOLINT

  /** Linear acceleration of the entity */
  Vector3Float entity_linear_acceleration_;

  /** angular velocity of the entity */
  Vector3Float entity_angular_velocity_;

 public:
  DeadReckoningParameter() {
    dead_reckoning_algorithm_ = 0;
    // Initialize fixed length array
    for (char& other_parameter : other_parameters_) {
      other_parameter = 0;
    }
  }
  ~DeadReckoningParameter() = default;

  void Marshal(DataStream& data_stream) const {
    data_stream << dead_reckoning_algorithm_;

    for (std::size_t idx = 0; idx < kArraySize; idx++) {
      data_stream << other_parameters_[idx];
    }

    entity_linear_acceleration_.Marshal(data_stream);
    entity_angular_velocity_.Marshal(data_stream);
  }
  void Unmarshal(DataStream& data_stream) {
    data_stream >> dead_reckoning_algorithm_;

    for (std::size_t idx = 0; idx < kArraySize; idx++) {
      data_stream >> other_parameters_[idx];
    }

    entity_linear_acceleration_.Unmarshal(data_stream);
    entity_angular_velocity_.Unmarshal(data_stream);
  }

  [[nodiscard]] uint8_t GetDeadReckoningAlgorithm() const {
    return dead_reckoning_algorithm_;
  }
  void SetDeadReckoningAlgorithm(uint8_t value) {
    dead_reckoning_algorithm_ = value;
  }

  std::array<char, kArraySize> GetOtherParameters() {
    return other_parameters_;
  }
  [[nodiscard]] const std::array<char, kArraySize>& GetOtherParameters() const {
    return other_parameters_;
  }
  void SetOtherParameters(const char* value) {
    std::copy(value, value + kArraySize, other_parameters_.begin());
  }

  Vector3Float& GetEntityLinearAcceleration() {
    return entity_linear_acceleration_;
  }
  [[nodiscard]] const Vector3Float& GetEntityLinearAcceleration() const {
    return entity_linear_acceleration_;
  }
  void SetEntityLinearAcceleration(const Vector3Float& value) {
    entity_linear_acceleration_ = value;
  }

  Vector3Float& GetEntityAngularVelocity() { return entity_angular_velocity_; }
  [[nodiscard]] const Vector3Float& GetEntityAngularVelocity() const {
    return entity_angular_velocity_;
  }
  void SetEntityAngularVelocity(const Vector3Float& value) {
    entity_angular_velocity_ = value;
  }

  [[nodiscard]] std::size_t GetMarshalledSize() const {
    return sizeof(dead_reckoning_algorithm_) + other_parameters_.size() +
           entity_linear_acceleration_.GetMarshalledSize() +
           entity_angular_velocity_.GetMarshalledSize();
  }

  bool operator==(const DeadReckoningParameter& rhs) const {
    return dead_reckoning_algorithm_ == rhs.dead_reckoning_algorithm_ &&
           other_parameters_ == rhs.other_parameters_ &&
           entity_linear_acceleration_ == rhs.entity_linear_acceleration_ &&
           entity_angular_velocity_ == rhs.entity_angular_velocity_;
  }
};
}  // namespace dis
