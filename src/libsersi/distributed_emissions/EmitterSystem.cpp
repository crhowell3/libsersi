#include "libsersi/distributed_emissions/EmitterSystem.h"

namespace dis {

EmitterSystem::EmitterSystem()
    : emitter_name_(0), function_(0), emitter_id_number_(0) {}

uint16_t EmitterSystem::GetEmitterName() const { return emitter_name_; }

void EmitterSystem::SetEmitterName(uint16_t value) { emitter_name_ = value; }

uint8_t EmitterSystem::GetFunction() const { return function_; }

void EmitterSystem::SetFunction(uint8_t value) { function_ = value; }

uint8_t EmitterSystem::GetEmitterIdNumber() const { return emitter_id_number_; }

void EmitterSystem::SetEmitterIdNumber(uint8_t value) {
  emitter_id_number_ = value;
}

void EmitterSystem::Marshal(DataStream& data_stream) const {
  data_stream << emitter_name_;
  data_stream << function_;
  data_stream << emitter_id_number_;
}

void EmitterSystem::Unmarshal(DataStream& data_stream) {
  data_stream >> emitter_name_;
  data_stream >> function_;
  data_stream >> emitter_id_number_;
}

bool EmitterSystem::operator==(const EmitterSystem& rhs) const {
  bool ivars_equal = true;

  if (!(emitter_name_ == rhs.emitter_name_)) {
    ivars_equal = false;
  }
  if (!(function_ == rhs.function_)) {
    ivars_equal = false;
  }
  if (!(emitter_id_number_ == rhs.emitter_id_number_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t EmitterSystem::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(emitter_name_) + sizeof(function_) + sizeof(emitter_id_number_);

  return marshal_size;
}

}  // namespace dis
