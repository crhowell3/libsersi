#pragma once

#include <cstddef>

#include "dis6/common/EntityID.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// One track/jam target

class TrackJamTarget {
 private:
  /** track/jam target */
  EntityID track_jam_;

  /** Emitter ID */
  uint8_t emitter_id_;

  /** beam ID */
  uint8_t beam_id_;

 public:
  TrackJamTarget();
  ~TrackJamTarget() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  EntityID& GetTrackJam();
  [[nodiscard]] const EntityID& GetTrackJam() const;
  void SetTrackJam(const EntityID& value);

  [[nodiscard]] uint8_t GetEmitterId() const;
  void SetEmitterId(uint8_t value);

  [[nodiscard]] uint8_t GetBeamId() const;
  void SetBeamId(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const TrackJamTarget& rhs) const;
};

}  // namespace dis
