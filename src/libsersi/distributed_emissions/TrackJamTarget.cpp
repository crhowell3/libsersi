#include "libsersi/distributed_emissions/TrackJamTarget.h"

namespace dis {

TrackJamTarget::TrackJamTarget() : emitter_id_(0), beam_id_(0) {}

EntityID& TrackJamTarget::GetTrackJam() { return track_jam_; }

const EntityID& TrackJamTarget::GetTrackJam() const { return track_jam_; }

void TrackJamTarget::SetTrackJam(const EntityID& value) { track_jam_ = value; }

uint8_t TrackJamTarget::GetEmitterId() const { return emitter_id_; }

void TrackJamTarget::SetEmitterId(uint8_t value) { emitter_id_ = value; }

uint8_t TrackJamTarget::GetBeamId() const { return beam_id_; }

void TrackJamTarget::SetBeamId(uint8_t value) { beam_id_ = value; }

void TrackJamTarget::Marshal(DataStream& data_stream) const {
  track_jam_.Marshal(data_stream);
  data_stream << emitter_id_;
  data_stream << beam_id_;
}

void TrackJamTarget::Unmarshal(DataStream& data_stream) {
  track_jam_.Unmarshal(data_stream);
  data_stream >> emitter_id_;
  data_stream >> beam_id_;
}

bool TrackJamTarget::operator==(const TrackJamTarget& rhs) const {
  bool ivars_equal = true;

  if (!(track_jam_ == rhs.track_jam_)) {
    ivars_equal = false;
  }
  if (!(emitter_id_ == rhs.emitter_id_)) {
    ivars_equal = false;
  }
  if (!(beam_id_ == rhs.beam_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t TrackJamTarget::GetMarshalledSize() const {
  std::size_t marshal_size =
      track_jam_.GetMarshalledSize() + sizeof(emitter_id_) + sizeof(beam_id_);
  return marshal_size;
}

}  // namespace dis
