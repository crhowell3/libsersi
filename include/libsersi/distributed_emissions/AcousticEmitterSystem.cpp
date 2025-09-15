#include "libsersi/distributed_emissions/AcousticEmitterSystem.h"

namespace dis {
AcousticEmitterSystem::AcousticEmitterSystem()
    : acoustic_name_(0), acoustic_function_(0), acoustic_id_(0) {}

uint16_t AcousticEmitterSystem::GetAcousticName() const {
  return acoustic_name_;
}

void AcousticEmitterSystem::SetAcousticName(uint16_t value) {
  acoustic_name_ = value;
}

uint8_t AcousticEmitterSystem::GetAcousticFunction() const {
  return acoustic_function_;
}

void AcousticEmitterSystem::SetAcousticFunction(uint8_t value) {
  acoustic_function_ = value;
}

uint8_t AcousticEmitterSystem::GetAcousticId() const { return acoustic_id_; }

void AcousticEmitterSystem::SetAcousticId(uint8_t value) {
  acoustic_id_ = value;
}

void AcousticEmitterSystem::Marshal(DataStream& data_stream) const {
  data_stream << acoustic_name_;
  data_stream << acoustic_function_;
  data_stream << acoustic_id_;
}

void AcousticEmitterSystem::Unmarshal(DataStream& data_stream) {
  data_stream >> acoustic_name_;
  data_stream >> acoustic_function_;
  data_stream >> acoustic_id_;
}

bool AcousticEmitterSystem::operator==(const AcousticEmitterSystem& rhs) const {
  bool ivars_equal = true;

  if (acoustic_name_ != rhs.acoustic_name_) {
    ivars_equal = false;
  }
  if (acoustic_function_ != rhs.acoustic_function_) {
    ivars_equal = false;
  }
  if (acoustic_id_ != rhs.acoustic_id_) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t AcousticEmitterSystem::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(acoustic_name_) +
                             sizeof(acoustic_function_) + sizeof(acoustic_id_);
  return marshal_size;
}

}  // namespace dis
