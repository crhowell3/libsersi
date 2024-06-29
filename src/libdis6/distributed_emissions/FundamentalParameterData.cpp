#include "dis6/distributed_emissions/FundamentalParameterData.h"

namespace dis {
FundamentalParameterData::FundamentalParameterData()
    : frequency_(0.0),
      frequency_range_(0.0),
      effective_radiated_power_(0.0),
      pulse_repetition_frequency_(0.0),
      pulse_width_(0.0),
      beam_azimuth_center_(0.0),
      beam_azimuth_sweep_(0.0),
      beam_elevation_center_(0.0),
      beam_elevation_sweep_(0.0),
      beam_sweep_sync_(0.0) {}

float FundamentalParameterData::GetFrequency() const { return frequency_; }

void FundamentalParameterData::SetFrequency(float value) { frequency_ = value; }

float FundamentalParameterData::GetFrequencyRange() const {
  return frequency_range_;
}

void FundamentalParameterData::SetFrequencyRange(float value) {
  frequency_range_ = value;
}

float FundamentalParameterData::GetEffectiveRadiatedPower() const {
  return effective_radiated_power_;
}

void FundamentalParameterData::SetEffectiveRadiatedPower(float value) {
  effective_radiated_power_ = value;
}

float FundamentalParameterData::GetPulseRepetitionFrequency() const {
  return pulse_repetition_frequency_;
}

void FundamentalParameterData::SetPulseRepetitionFrequency(float value) {
  pulse_repetition_frequency_ = value;
}

float FundamentalParameterData::GetPulseWidth() const { return pulse_width_; }

void FundamentalParameterData::SetPulseWidth(float value) { pulse_width_ = value; }

float FundamentalParameterData::GetBeamAzimuthCenter() const {
  return beam_azimuth_center_;
}

void FundamentalParameterData::SetBeamAzimuthCenter(float value) {
  beam_azimuth_center_ = value;
}

float FundamentalParameterData::GetBeamAzimuthSweep() const {
  return beam_azimuth_sweep_;
}

void FundamentalParameterData::SetBeamAzimuthSweep(float value) {
  beam_azimuth_sweep_ = value;
}

float FundamentalParameterData::GetBeamElevationCenter() const {
  return beam_elevation_center_;
}

void FundamentalParameterData::SetBeamElevationCenter(float value) {
  beam_elevation_center_ = value;
}

float FundamentalParameterData::GetBeamElevationSweep() const {
  return beam_elevation_sweep_;
}

void FundamentalParameterData::SetBeamElevationSweep(float value) {
  beam_elevation_sweep_ = value;
}

float FundamentalParameterData::GetBeamSweepSync() const {
  return beam_sweep_sync_;
}

void FundamentalParameterData::SetBeamSweepSync(float value) {
  beam_sweep_sync_ = value;
}

void FundamentalParameterData::Marshal(DataStream& data_stream) const {
  data_stream << frequency_;
  data_stream << frequency_range_;
  data_stream << effective_radiated_power_;
  data_stream << pulse_repetition_frequency_;
  data_stream << pulse_width_;
  data_stream << beam_azimuth_center_;
  data_stream << beam_azimuth_sweep_;
  data_stream << beam_elevation_center_;
  data_stream << beam_elevation_sweep_;
  data_stream << beam_sweep_sync_;
}

void FundamentalParameterData::Unmarshal(DataStream& data_stream) {
  data_stream >> frequency_;
  data_stream >> frequency_range_;
  data_stream >> effective_radiated_power_;
  data_stream >> pulse_repetition_frequency_;
  data_stream >> pulse_width_;
  data_stream >> beam_azimuth_center_;
  data_stream >> beam_azimuth_sweep_;
  data_stream >> beam_elevation_center_;
  data_stream >> beam_elevation_sweep_;
  data_stream >> beam_sweep_sync_;
}

bool FundamentalParameterData::operator==(
    const FundamentalParameterData& rhs) const {
  bool ivars_equal = true;

  if (!(frequency_ == rhs.frequency_)) {
    ivars_equal = false;
  }
  if (!(frequency_range_ == rhs.frequency_range_)) {
    ivars_equal = false;
  }
  if (!(effective_radiated_power_ == rhs.effective_radiated_power_)) {
    ivars_equal = false;
  }
  if (!(pulse_repetition_frequency_ == rhs.pulse_repetition_frequency_)) {
    ivars_equal = false;
  }
  if (!(pulse_width_ == rhs.pulse_width_)) {
    ivars_equal = false;
  }
  if (!(beam_azimuth_center_ == rhs.beam_azimuth_center_)) {
    ivars_equal = false;
  }
  if (!(beam_azimuth_sweep_ == rhs.beam_azimuth_sweep_)) {
    ivars_equal = false;
  }
  if (!(beam_elevation_center_ == rhs.beam_elevation_center_)) {
    ivars_equal = false;
  }
  if (!(beam_elevation_sweep_ == rhs.beam_elevation_sweep_)) {
    ivars_equal = false;
  }
  if (!(beam_sweep_sync_ == rhs.beam_sweep_sync_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t FundamentalParameterData::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(frequency_) + sizeof(frequency_range_) +
      sizeof(effective_radiated_power_) + sizeof(pulse_repetition_frequency_) +
      sizeof(pulse_width_) + sizeof(beam_azimuth_center_) +
      sizeof(beam_azimuth_sweep_) + sizeof(beam_elevation_center_) +
      sizeof(beam_elevation_sweep_) + sizeof(beam_sweep_sync_);
  return marshal_size;
}

}  // namespace dis
