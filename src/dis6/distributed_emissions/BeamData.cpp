#include "dis6/distributed_emissions/BeamData.h"

namespace dis {
BeamData::BeamData()
    : beam_azimuth_center_(0.0),
      beam_azimuth_sweep_(0.0),
      beam_elevation_center_(0.0),
      beam_elevation_sweep_(0.0),
      beam_sweep_sync_(0.0) {}

float BeamData::GetBeamAzimuthCenter() const { return beam_azimuth_center_; }

void BeamData::SetBeamAzimuthCenter(float value) {
  beam_azimuth_center_ = value;
}

float BeamData::GetBeamAzimuthSweep() const { return beam_azimuth_sweep_; }

void BeamData::SetBeamAzimuthSweep(float value) { beam_azimuth_sweep_ = value; }

float BeamData::GetBeamElevationCenter() const {
  return beam_elevation_center_;
}

void BeamData::SetBeamElevationCenter(float value) {
  beam_elevation_center_ = value;
}

float BeamData::GetBeamElevationSweep() const { return beam_elevation_sweep_; }

void BeamData::SetBeamElevationSweep(float value) {
  beam_elevation_sweep_ = value;
}

float BeamData::GetBeamSweepSync() const { return beam_sweep_sync_; }

void BeamData::SetBeamSweepSync(float value) { beam_sweep_sync_ = value; }

void BeamData::Marshal(DataStream& data_stream) const {
  data_stream << beam_azimuth_center_;
  data_stream << beam_azimuth_sweep_;
  data_stream << beam_elevation_center_;
  data_stream << beam_elevation_sweep_;
  data_stream << beam_sweep_sync_;
}

void BeamData::Unmarshal(DataStream& data_stream) {
  data_stream >> beam_azimuth_center_;
  data_stream >> beam_azimuth_sweep_;
  data_stream >> beam_elevation_center_;
  data_stream >> beam_elevation_sweep_;
  data_stream >> beam_sweep_sync_;
}

bool BeamData::operator==(const BeamData& rhs) const {
  bool ivars_equal = true;

  if (beam_azimuth_center_ != rhs.beam_azimuth_center_) {
    ivars_equal = false;
  }
  if (beam_azimuth_sweep_ != rhs.beam_azimuth_sweep_) {
    ivars_equal = false;
  }
  if (beam_elevation_center_ != rhs.beam_elevation_center_) {
    ivars_equal = false;
  }
  if (beam_elevation_sweep_ != rhs.beam_elevation_sweep_) {
    ivars_equal = false;
  }
  if (beam_sweep_sync_ != rhs.beam_sweep_sync_) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t BeamData::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(beam_azimuth_center_) + sizeof(beam_azimuth_sweep_) +
      sizeof(beam_elevation_center_) + sizeof(beam_elevation_sweep_) +
      sizeof(beam_sweep_sync_);

  return marshal_size;
}

}  // namespace dis
