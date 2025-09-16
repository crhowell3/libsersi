#pragma once

#include <cstddef>

#include "libsersi/utils/DataStream.hpp"

namespace dis {
// Section 5.2.17. Three floating point values representing an orientation, psi,
// theta, and phi, aka the euler angles, in radians

class Orientation {
 private:
  float psi_{};

  float theta_{};

  float phi_{};

 public:
  Orientation() = default;
  ~Orientation() = default;

  void Marshal(dis::DataStream& data_stream) const {
    data_stream << psi_;
    data_stream << theta_;
    data_stream << phi_;
  }
  void Unmarshal(dis::DataStream& data_stream) {
    data_stream >> psi_;
    data_stream >> theta_;
    data_stream >> phi_;
  }

  [[nodiscard]] auto GetPsi() const -> float { return psi_; }
  void SetPsi(float value) { psi_ = value; }

  [[nodiscard]] auto GetTheta() const -> float { return theta_; }
  void SetTheta(float value) { theta_ = value; }

  [[nodiscard]] auto GetPhi() const -> float { return phi_; }
  void SetPhi(float value) { phi_ = value; }

  [[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
    return sizeof(psi_) + sizeof(theta_) + sizeof(phi_);
  }

  auto operator==(const Orientation& rhs) const -> bool {
    return psi_ == rhs.psi_ && theta_ == rhs.theta_ && phi_ == rhs.phi_;
  }
};
}  // namespace dis
