#include "dis6/distributed_emissions/ElectromagneticEmissionSystemData.h"

namespace dis {
ElectromagneticEmissionSystemData::ElectromagneticEmissionSystemData()
    : system_data_length_(0), number_of_beams_(0), emissions_padding2_(0) {}

ElectromagneticEmissionSystemData::~ElectromagneticEmissionSystemData() {
  beam_data_records_.clear();
}

uint8_t ElectromagneticEmissionSystemData::GetSystemDataLength() const {
  return system_data_length_;
}

void ElectromagneticEmissionSystemData::SetSystemDataLength(uint8_t value) {
  system_data_length_ = value;
}

uint8_t ElectromagneticEmissionSystemData::GetNumberOfBeams() const {
  return beam_data_records_.size();
}

uint16_t ElectromagneticEmissionSystemData::GetEmissionsPadding2() const {
  return emissions_padding2_;
}

void ElectromagneticEmissionSystemData::SetEmissionsPadding2(uint16_t value) {
  emissions_padding2_ = value;
}

EmitterSystem& ElectromagneticEmissionSystemData::GetEmitterSystem() {
  return emitter_system_;
}

const EmitterSystem& ElectromagneticEmissionSystemData::GetEmitterSystem()
    const {
  return emitter_system_;
}

void ElectromagneticEmissionSystemData::SetEmitterSystem(
    const EmitterSystem& value) {
  emitter_system_ = value;
}

Vector3Float& ElectromagneticEmissionSystemData::GetLocation() {
  return location_;
}

const Vector3Float& ElectromagneticEmissionSystemData::GetLocation() const {
  return location_;
}

void ElectromagneticEmissionSystemData::SetLocation(const Vector3Float& value) {
  location_ = value;
}

std::vector<ElectromagneticEmissionBeamData>&
ElectromagneticEmissionSystemData::GetBeamDataRecords() {
  return beam_data_records_;
}

const std::vector<ElectromagneticEmissionBeamData>&
ElectromagneticEmissionSystemData::GetBeamDataRecords() const {
  return beam_data_records_;
}

void ElectromagneticEmissionSystemData::SetBeamDataRecords(
    const std::vector<ElectromagneticEmissionBeamData>& value) {
  beam_data_records_ = value;
}

void ElectromagneticEmissionSystemData::Marshal(DataStream& data_stream) const {
  data_stream << system_data_length_;
  data_stream << static_cast<uint8_t>(beam_data_records_.size());
  data_stream << emissions_padding2_;
  emitter_system_.Marshal(data_stream);
  location_.Marshal(data_stream);

  for (const auto& x : beam_data_records_) {
    x.Marshal(data_stream);
  }
}

void ElectromagneticEmissionSystemData::Unmarshal(DataStream& data_stream) {
  data_stream >> system_data_length_;
  data_stream >> number_of_beams_;
  data_stream >> emissions_padding2_;
  emitter_system_.Unmarshal(data_stream);
  location_.Unmarshal(data_stream);

  beam_data_records_.clear();
  for (std::size_t idx = 0; idx < number_of_beams_; idx++) {
    ElectromagneticEmissionBeamData x;
    x.Unmarshal(data_stream);
    beam_data_records_.push_back(x);
  }
}

bool ElectromagneticEmissionSystemData::operator==(
    const ElectromagneticEmissionSystemData& rhs) const {
  bool ivars_equal = true;

  if (!(system_data_length_ == rhs.system_data_length_)) {
    ivars_equal = false;
  }
  if (!(emissions_padding2_ == rhs.emissions_padding2_)) {
    ivars_equal = false;
  }
  if (!(emitter_system_ == rhs.emitter_system_)) {
    ivars_equal = false;
  }
  if (!(location_ == rhs.location_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < beam_data_records_.size(); idx++) {
    if (!(beam_data_records_[idx] == rhs.beam_data_records_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t ElectromagneticEmissionSystemData::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(system_data_length_) + sizeof(number_of_beams_) +
                        sizeof(emissions_padding2_) +
                        emitter_system_.GetMarshalledSize() +
                        location_.GetMarshalledSize();

  for (const auto& list_element : beam_data_records_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis

