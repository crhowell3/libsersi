#include distributed_emissions/AcousticEmitter.h"

namespace dis {
AcousticEmitter::AcousticEmitter()
    : acoustic_name_(0), function_(0), acoustic_id_number_(0) {}

uint16_t AcousticEmitter::GetAcousticName() const { return acoustic_name_; }

void AcousticEmitter::SetAcousticName(uint16_t value) { acoustic_name_ = value; }

uint8_t AcousticEmitter::GetFunction() const { return function_; }

void AcousticEmitter::SetFunction(uint8_t value) { function_ = value; }

uint8_t AcousticEmitter::GetAcousticIdNumber() const {
  return acoustic_id_number_;
}

void AcousticEmitter::SetAcousticIdNumber(uint8_t value) {
  acoustic_id_number_ = value;
}

void AcousticEmitter::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << acoustic_name_;
  byte_buffer << function_;
  byte_buffer << acoustic_id_number_;
}

void AcousticEmitter::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> acoustic_name_;
  byte_buffer >> function_;
  byte_buffer >> acoustic_id_number_;
}

bool AcousticEmitter::operator==(const AcousticEmitter& rhs) const {
  bool ivars_equal = true;

  if (acoustic_name_ != rhs.acoustic_name_) {
    ivars_equal = false;
  }
  if (function_ != rhs.function_) {
    ivars_equal = false;
  }
  if (acoustic_id_number_ != rhs.acoustic_id_number_) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t AcousticEmitter::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(acoustic_name_) + sizeof(function_) + sizeof(acoustic_id_number_);
  return marshal_size;
}

}  // namespace dis

