#pragma once

#include utils/ByteBuffer.hpp"

namespace dis {
// Section 5.2.39. Specification of the data necessary to  describe the scan
// volume of an emitter.

class BeamData {
 private:
  /** Specifies the beam azimuth an elevation centers and corresponding
   * half-angles     to describe the scan volume */
  float beam_azimuth_center_;  // NOLINT

  /** Specifies the beam azimuth sweep to determine scan volume */
  float beam_azimuth_sweep_;  // NOLINT

  /** Specifies the beam elevation center to determine scan volume */
  float beam_elevation_center_;  // NOLINT

  /** Specifies the beam elevation sweep to determine scan volume */
  float beam_elevation_sweep_;  // NOLINT

  /** allows receiver to synchronize its regenerated scan pattern to     that of
   * the emmitter. Specifies the percentage of time a scan is through its
   * pattern from its origion. */
  float beam_sweep_sync_;  // NOLINT

 public:
  BeamData();
  ~BeamData() = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] float GetBeamAzimuthCenter() const;
  void SetBeamAzimuthCenter(float value);

  [[nodiscard]] float GetBeamAzimuthSweep() const;
  void SetBeamAzimuthSweep(float value);

  [[nodiscard]] float GetBeamElevationCenter() const;
  void SetBeamElevationCenter(float value);

  [[nodiscard]] float GetBeamElevationSweep() const;
  void SetBeamElevationSweep(float value);

  [[nodiscard]] float GetBeamSweepSync() const;
  void SetBeamSweepSync(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const BeamData& rhs) const;
};
}  // namespace dis
