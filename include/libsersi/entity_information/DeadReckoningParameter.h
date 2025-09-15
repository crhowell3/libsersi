#pragma once

#include <array>
#include <cstddef>

#include "libsersi/common/Vector3Float.h"
#include "libsersi/utils/DataStream.h"

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
  DeadReckoningParameter();
  ~DeadReckoningParameter() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetDeadReckoningAlgorithm() const;
  void SetDeadReckoningAlgorithm(uint8_t value);

  std::array<char, kArraySize> GetOtherParameters();
  [[nodiscard]] const std::array<char, kArraySize>& GetOtherParameters() const;
  void SetOtherParameters(const char* value);

  Vector3Float& GetEntityLinearAcceleration();
  [[nodiscard]] const Vector3Float& GetEntityLinearAcceleration() const;
  void SetEntityLinearAcceleration(const Vector3Float& value);

  Vector3Float& GetEntityAngularVelocity();
  [[nodiscard]] const Vector3Float& GetEntityAngularVelocity() const;
  void SetEntityAngularVelocity(const Vector3Float& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const DeadReckoningParameter& rhs) const;
};
}  // namespace dis
