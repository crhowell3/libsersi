#include "libsersi/distributed_emissions/AcousticBeamFundamentalParameter.h"

namespace dis {

AcousticBeamFundamentalParameter::AcousticBeamFundamentalParameter()
    : active_emission_parameter_index_(0),
      scan_pattern_(0),
      beam_center_azimuth_(0.0),
      azimuthal_beamwidth_(0.0),
      beam_center_de_(0.0),
      de_beamwidth_(0.0) {}

uint16_t AcousticBeamFundamentalParameter::GetActiveEmissionParameterIndex()
    const {
  return active_emission_parameter_index_;
}

void AcousticBeamFundamentalParameter::SetActiveEmissionParameterIndex(
    uint16_t value) {
  active_emission_parameter_index_ = value;
}

uint16_t AcousticBeamFundamentalParameter::GetScanPattern() const {
  return scan_pattern_;
}

void AcousticBeamFundamentalParameter::SetScanPattern(uint16_t value) {
  scan_pattern_ = value;
}

float AcousticBeamFundamentalParameter::GetBeamCenterAzimuth() const {
  return beam_center_azimuth_;
}

void AcousticBeamFundamentalParameter::SetBeamCenterAzimuth(float value) {
  beam_center_azimuth_ = value;
}

float AcousticBeamFundamentalParameter::GetAzimuthalBeamwidth() const {
  return azimuthal_beamwidth_;
}

void AcousticBeamFundamentalParameter::SetAzimuthalBeamwidth(float value) {
  azimuthal_beamwidth_ = value;
}

float AcousticBeamFundamentalParameter::GetBeamCenterDe() const {
  return beam_center_de_;
}

void AcousticBeamFundamentalParameter::SetBeamCenterDe(float value) {
  beam_center_de_ = value;
}

float AcousticBeamFundamentalParameter::GetDeBeamwidth() const {
  return de_beamwidth_;
}

void AcousticBeamFundamentalParameter::SetDeBeamwidth(float value) {
  de_beamwidth_ = value;
}

void AcousticBeamFundamentalParameter::Marshal(DataStream& data_stream) const {
  data_stream << active_emission_parameter_index_;
  data_stream << scan_pattern_;
  data_stream << beam_center_azimuth_;
  data_stream << azimuthal_beamwidth_;
  data_stream << beam_center_de_;
  data_stream << de_beamwidth_;
}

void AcousticBeamFundamentalParameter::Unmarshal(DataStream& data_stream) {
  data_stream >> active_emission_parameter_index_;
  data_stream >> scan_pattern_;
  data_stream >> beam_center_azimuth_;
  data_stream >> azimuthal_beamwidth_;
  data_stream >> beam_center_de_;
  data_stream >> de_beamwidth_;
}

bool AcousticBeamFundamentalParameter::operator==(
    const AcousticBeamFundamentalParameter& rhs) const {
  bool ivars_equal = true;

  if (active_emission_parameter_index_ !=
      rhs.active_emission_parameter_index_) {
    ivars_equal = false;
  }
  if (scan_pattern_ != rhs.scan_pattern_) {
    ivars_equal = false;
  }
  if (beam_center_azimuth_ != rhs.beam_center_azimuth_) {
    ivars_equal = false;
  }
  if (azimuthal_beamwidth_ != rhs.azimuthal_beamwidth_) {
    ivars_equal = false;
  }
  if (beam_center_de_ != rhs.beam_center_de_) {
    ivars_equal = false;
  }
  if (de_beamwidth_ != rhs.de_beamwidth_) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t AcousticBeamFundamentalParameter::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(active_emission_parameter_index_) +
                        sizeof(scan_pattern_) + sizeof(beam_center_azimuth_) +
                        sizeof(azimuthal_beamwidth_) + sizeof(beam_center_de_) +
                        sizeof(de_beamwidth_);
  return marshal_size;
}

}  // namespace dis

