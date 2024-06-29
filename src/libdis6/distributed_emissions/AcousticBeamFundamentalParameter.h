#ifndef DIS6_DISTRIBUTED_EMISSIONS_ACOUSTICBEAMFUNDAMENTALPARAMETER_H_
#define DIS6_DISTRIBUTED_EMISSIONS_ACOUSTICBEAMFUNDAMENTALPARAMETER_H_

#include <cstdint>

#include "dis6/utils/DataStream.h"

namespace dis {
// Used in UaPdu

class AcousticBeamFundamentalParameter {
 private:
  /// parameter index
  uint16_t active_emission_parameter_index_;  // NOLINT

  /// scan pattern
  uint16_t scan_pattern_;  // NOLINT

  /// beam center azimuth
  float beam_center_azimuth_;  // NOLINT

  /// azimuthal beamwidth
  float azimuthal_beamwidth_;  // NOLINT

  /// beam center
  float beam_center_de_;  // NOLINT

  /// DE beamwidth (vertical beamwidth)
  float de_beamwidth_;  // NOLINT

 public:
  AcousticBeamFundamentalParameter();
  ~AcousticBeamFundamentalParameter() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetActiveEmissionParameterIndex() const;
  void SetActiveEmissionParameterIndex(uint16_t value);

  [[nodiscard]] uint16_t GetScanPattern() const;
  void SetScanPattern(uint16_t value);

  [[nodiscard]] float GetBeamCenterAzimuth() const;
  void SetBeamCenterAzimuth(float value);

  [[nodiscard]] float GetAzimuthalBeamwidth() const;
  void SetAzimuthalBeamwidth(float value);

  [[nodiscard]] float GetBeamCenterDe() const;
  void SetBeamCenterDe(float value);

  [[nodiscard]] float GetDeBeamwidth() const;
  void SetDeBeamwidth(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AcousticBeamFundamentalParameter& rhs) const;
};
}  // namespace dis

#endif  // DIS6_DISTRIBUTED_EMISSIONS_ACOUSTICBEAMFUNDAMENTALPARAMETER_H_
