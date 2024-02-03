#include "dis6/distributed_emissions/AcousticEmitter.h"

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

void AcousticEmitter::Marshal(DataStream& data_stream) const {
  data_stream << acoustic_name_;
  data_stream << function_;
  data_stream << acoustic_id_number_;
}

void AcousticEmitter::Unmarshal(DataStream& data_stream) {
  data_stream >> acoustic_name_;
  data_stream >> function_;
  data_stream >> acoustic_id_number_;
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

