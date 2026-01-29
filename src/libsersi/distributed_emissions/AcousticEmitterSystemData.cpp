#include "libsersi/distributed_emissions/AcousticEmitterSystemData.h"

#include "libsersi/distributed_emissions/AcousticEmitterSystem.h"

namespace dis {
AcousticEmitterSystemData::AcousticEmitterSystemData()
    : emitter_system_data_length_(0), number_of_beams_(0), pad2_(0) {}

AcousticEmitterSystemData::~AcousticEmitterSystemData() {
  beam_records_.clear();
}

uint8_t AcousticEmitterSystemData::GetEmitterSystemDataLength() const {
  return emitter_system_data_length_;
}

void AcousticEmitterSystemData::SetEmitterSystemDataLength(uint8_t value) {
  emitter_system_data_length_ = value;
}

uint8_t AcousticEmitterSystemData::GetNumberOfBeams() const {
  return beam_records_.size();
}

uint16_t AcousticEmitterSystemData::GetPad2() const { return pad2_; }

void AcousticEmitterSystemData::SetPad2(uint16_t value) { pad2_ = value; }

AcousticEmitterSystem& AcousticEmitterSystemData::GetAcousticEmitterSystem() {
  return acoustic_emitter_system_;
}

const AcousticEmitterSystem&
AcousticEmitterSystemData::GetAcousticEmitterSystem() const {
  return acoustic_emitter_system_;
}

void AcousticEmitterSystemData::SetAcousticEmitterSystem(
    const AcousticEmitterSystem& value) {
  acoustic_emitter_system_ = value;
}

Vector3Float& AcousticEmitterSystemData::GetEmitterLocation() {
  return emitter_location_;
}

const Vector3Float& AcousticEmitterSystemData::GetEmitterLocation() const {
  return emitter_location_;
}

void AcousticEmitterSystemData::SetEmitterLocation(const Vector3Float& value) {
  emitter_location_ = value;
}

std::vector<AcousticBeamData>& AcousticEmitterSystemData::GetBeamRecords() {
  return beam_records_;
}

const std::vector<AcousticBeamData>& AcousticEmitterSystemData::GetBeamRecords()
    const {
  return beam_records_;
}

void AcousticEmitterSystemData::SetBeamRecords(
    const std::vector<AcousticBeamData>& value) {
  beam_records_ = value;
}

void AcousticEmitterSystemData::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << emitter_system_data_length_;
  byte_buffer << static_cast<uint8_t>(beam_records_.size());
  byte_buffer << pad2_;
  acoustic_emitter_system_.Marshal(byte_buffer);
  emitter_location_.Marshal(byte_buffer);

  for (const auto& x : beam_records_) {
    x.Marshal(byte_buffer);
  }
}

void AcousticEmitterSystemData::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> emitter_system_data_length_;
  byte_buffer >> number_of_beams_;
  byte_buffer >> pad2_;
  acoustic_emitter_system_.Unmarshal(byte_buffer);
  emitter_location_.Unmarshal(byte_buffer);

  beam_records_.clear();
  for (std::size_t idx = 0; idx < number_of_beams_; idx++) {
    AcousticBeamData x;
    x.Unmarshal(byte_buffer);
    beam_records_.push_back(x);
  }
}

bool AcousticEmitterSystemData::operator==(
    const AcousticEmitterSystemData& rhs) const {
  bool ivars_equal = true;

  if (!(emitter_system_data_length_ == rhs.emitter_system_data_length_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(acoustic_emitter_system_ == rhs.acoustic_emitter_system_)) {
    ivars_equal = false;
  }
  if (!(emitter_location_ == rhs.emitter_location_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < beam_records_.size(); idx++) {
    if (!(beam_records_[idx] == rhs.beam_records_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t AcousticEmitterSystemData::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(emitter_system_data_length_) +
                             sizeof(number_of_beams_) + sizeof(pad2_) +
                             acoustic_emitter_system_.GetMarshalledSize() +
                             emitter_location_.GetMarshalledSize();

  for (auto list_element : beam_records_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
