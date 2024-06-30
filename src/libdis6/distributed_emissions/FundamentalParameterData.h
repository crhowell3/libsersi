#pragma once

#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.2.22. Contains electromagnetic emmision regineratin parameters that
// are        variable throughout a scenario dependent on the actions of the
// participants in the simulation. Also provides basic parametric data that may
// be used to support low-fidelity simulations.

class FundamentalParameterData {
 private:
  /** center frequency of the emission in hertz. */
  float frequency_;

  /** Bandwidth of the frequencies corresponding to the fequency field. */
  float frequency_range_;

  /** Effective radiated power for the emission in DdBm. For a      radar noise
   * jammer, indicates the peak of the transmitted power. */
  float effective_radiated_power_;

  /** Average repetition frequency of the emission in hertz. */
  float pulse_repetition_frequency_;

  /** Average pulse width  of the emission in microseconds. */
  float pulse_width_;

  /** Specifies the beam azimuth an elevation centers and corresponding
   * half-angles     to describe the scan volume */
  float beam_azimuth_center_;

  /** Specifies the beam azimuth sweep to determine scan volume */
  float beam_azimuth_sweep_;

  /** Specifies the beam elevation center to determine scan volume */
  float beam_elevation_center_;

  /** Specifies the beam elevation sweep to determine scan volume */
  float beam_elevation_sweep_;

  /** allows receiver to synchronize its regenerated scan pattern to     that of
   * the emmitter. Specifies the percentage of time a scan is through its
   * pattern from its origion. */
  float beam_sweep_sync_;

 public:
  FundamentalParameterData();
  ~FundamentalParameterData() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] float GetFrequency() const;
  void SetFrequency(float value);

  [[nodiscard]] float GetFrequencyRange() const;
  void SetFrequencyRange(float value);

  [[nodiscard]] float GetEffectiveRadiatedPower() const;
  void SetEffectiveRadiatedPower(float value);

  [[nodiscard]] float GetPulseRepetitionFrequency() const;
  void SetPulseRepetitionFrequency(float value);

  [[nodiscard]] float GetPulseWidth() const;
  void SetPulseWidth(float value);

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

  bool operator==(const FundamentalParameterData& rhs) const;
};

}  // namespace dis
