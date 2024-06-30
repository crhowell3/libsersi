#include "libdis6/distributed_emissions/ElectromagneticEmissionBeamData.h"

namespace dis {
ElectromagneticEmissionBeamData::ElectromagneticEmissionBeamData()
    : beam_data_length_(0),
      beam_id_number_(0),
      beam_parameter_index_(0),
      beam_function_(0),
      number_of_track_jam_targets_(0),
      high_density_track_jam_(0),
      pad4_(0),
      jamming_mode_sequence_(0) {}

ElectromagneticEmissionBeamData::~ElectromagneticEmissionBeamData() {
  track_jam_targets_.clear();
}

uint8_t ElectromagneticEmissionBeamData::GetBeamDataLength() const {
  return beam_data_length_;
}

void ElectromagneticEmissionBeamData::SetBeamDataLength(uint8_t value) {
  beam_data_length_ = value;
}

uint8_t ElectromagneticEmissionBeamData::GetBeamIdNumber() const {
  return beam_id_number_;
}

void ElectromagneticEmissionBeamData::SetBeamIdNumber(uint8_t value) {
  beam_id_number_ = value;
}

uint16_t ElectromagneticEmissionBeamData::GetBeamParameterIndex() const {
  return beam_parameter_index_;
}

void ElectromagneticEmissionBeamData::SetBeamParameterIndex(uint16_t value) {
  beam_parameter_index_ = value;
}

FundamentalParameterData&
ElectromagneticEmissionBeamData::GetFundamentalParameterData() {
  return fundamental_parameter_data_;
}

const FundamentalParameterData&
ElectromagneticEmissionBeamData::GetFundamentalParameterData() const {
  return fundamental_parameter_data_;
}

void ElectromagneticEmissionBeamData::SetFundamentalParameterData(
    const FundamentalParameterData& value) {
  fundamental_parameter_data_ = value;
}

uint8_t ElectromagneticEmissionBeamData::GetBeamFunction() const {
  return beam_function_;
}

void ElectromagneticEmissionBeamData::SetBeamFunction(uint8_t value) {
  beam_function_ = value;
}

uint8_t ElectromagneticEmissionBeamData::GetNumberOfTrackJamTargets() const {
  return track_jam_targets_.size();
}

uint8_t ElectromagneticEmissionBeamData::GetHighDensityTrackJam() const {
  return high_density_track_jam_;
}

void ElectromagneticEmissionBeamData::SetHighDensityTrackJam(uint8_t value) {
  high_density_track_jam_ = value;
}

uint8_t ElectromagneticEmissionBeamData::GetPad4() const { return pad4_; }

void ElectromagneticEmissionBeamData::SetPad4(uint8_t value) { pad4_ = value; }

uint32_t ElectromagneticEmissionBeamData::GetJammingModeSequence() const {
  return jamming_mode_sequence_;
}

void ElectromagneticEmissionBeamData::SetJammingModeSequence(uint32_t value) {
  jamming_mode_sequence_ = value;
}

std::vector<TrackJamTarget>&
ElectromagneticEmissionBeamData::GetTrackJamTargets() {
  return track_jam_targets_;
}

const std::vector<TrackJamTarget>&
ElectromagneticEmissionBeamData::GetTrackJamTargets() const {
  return track_jam_targets_;
}

void ElectromagneticEmissionBeamData::SetTrackJamTargets(
    const std::vector<TrackJamTarget>& value) {
  track_jam_targets_ = value;
}

void ElectromagneticEmissionBeamData::Marshal(DataStream& data_stream) const {
  data_stream << beam_data_length_;
  data_stream << beam_id_number_;
  data_stream << beam_parameter_index_;
  fundamental_parameter_data_.Marshal(data_stream);
  data_stream << beam_function_;
  data_stream << static_cast<uint8_t>(track_jam_targets_.size());
  data_stream << high_density_track_jam_;
  data_stream << pad4_;
  data_stream << jamming_mode_sequence_;

  for (const auto& x : track_jam_targets_) {
    x.Marshal(data_stream);
  }
}

void ElectromagneticEmissionBeamData::Unmarshal(DataStream& data_stream) {
  data_stream >> beam_data_length_;
  data_stream >> beam_id_number_;
  data_stream >> beam_parameter_index_;
  fundamental_parameter_data_.Unmarshal(data_stream);
  data_stream >> beam_function_;
  data_stream >> number_of_track_jam_targets_;
  data_stream >> high_density_track_jam_;
  data_stream >> pad4_;
  data_stream >> jamming_mode_sequence_;

  track_jam_targets_.clear();
  for (std::size_t idx = 0; idx < number_of_track_jam_targets_; idx++) {
    TrackJamTarget x;
    x.Unmarshal(data_stream);
    track_jam_targets_.push_back(x);
  }
}

bool ElectromagneticEmissionBeamData::operator==(
    const ElectromagneticEmissionBeamData& rhs) const {
  bool ivars_equal = true;

  if (!(beam_data_length_ == rhs.beam_data_length_)) {
    ivars_equal = false;
  }
  if (!(beam_id_number_ == rhs.beam_id_number_)) {
    ivars_equal = false;
  }
  if (!(beam_parameter_index_ == rhs.beam_parameter_index_)) {
    ivars_equal = false;
  }
  if (!(fundamental_parameter_data_ == rhs.fundamental_parameter_data_)) {
    ivars_equal = false;
  }
  if (!(beam_function_ == rhs.beam_function_)) {
    ivars_equal = false;
  }
  if (!(high_density_track_jam_ == rhs.high_density_track_jam_)) {
    ivars_equal = false;
  }
  if (!(pad4_ == rhs.pad4_)) {
    ivars_equal = false;
  }
  if (!(jamming_mode_sequence_ == rhs.jamming_mode_sequence_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < track_jam_targets_.size(); idx++) {
    if (!(track_jam_targets_[idx] == rhs.track_jam_targets_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t ElectromagneticEmissionBeamData::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(beam_data_length_) + sizeof(beam_id_number_) +
      sizeof(beam_parameter_index_) +
      fundamental_parameter_data_.GetMarshalledSize() + sizeof(beam_function_) +
      sizeof(number_of_track_jam_targets_) + sizeof(high_density_track_jam_) +
      sizeof(pad4_) + sizeof(jamming_mode_sequence_);

  for (const auto& list_element : track_jam_targets_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
