#include "dis6/common/Orientation.h"

namespace dis {
Orientation::Orientation() : psi_(0.0), theta_(0.0), phi_(0.0) {}

float Orientation::GetPsi() const { return psi_; }

void Orientation::SetPsi(float value) { psi_ = value; }

float Orientation::GetTheta() const { return theta_; }

void Orientation::SetTheta(float value) { theta_ = value; }

float Orientation::GetPhi() const { return phi_; }

void Orientation::SetPhi(float value) { phi_ = value; }

void Orientation::Marshal(DataStream& data_stream) const {
  data_stream << psi_;
  data_stream << theta_;
  data_stream << phi_;
}

void Orientation::Unmarshal(DataStream& data_stream) {
  data_stream >> psi_;
  data_stream >> theta_;
  data_stream >> phi_;
}

bool Orientation::operator==(const Orientation& rhs) const {
  bool ivars_equal = true;

  if (!(psi_ == rhs.psi_)) {
    ivars_equal = false;
  }
  if (!(theta_ == rhs.theta_)) {
    ivars_equal = false;
  }
  if (!(phi_ == rhs.phi_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t Orientation::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(psi_) + sizeof(theta_) + sizeof(phi_);
  return marshal_size;
}

}  // namespace dis
