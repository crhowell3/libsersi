#pragma once

#include <vector>

#include "libsersi/distributed_emissions/FundamentalParameterData.h"
#include "libsersi/distributed_emissions/TrackJamTarget.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Description of one electronic emission beam

class ElectromagneticEmissionBeamData {
 private:
  /** This field shall specify the length of this beams data in 32 bit words */
  uint8_t beam_data_length_;

  /** This field shall specify a unique emitter database number assigned to
   * differentiate between otherwise similar or identical emitter beams within
   * an emitter system. */
  uint8_t beam_id_number_;

  /** This field shall specify a Beam Parameter Index number that shall be used
   * by receiving entities in conjunction with the Emitter Name field to provide
   * a pointer to the stored database parameters required to regenerate the
   * beam.  */
  uint16_t beam_parameter_index_;

  /** Fundamental parameter data such as frequency range, beam sweep, etc. */
  FundamentalParameterData fundamental_parameter_data_;

  /** beam function of a particular beam */
  uint8_t beam_function_;

  /** Number of track/jam targets */
  uint8_t number_of_track_jam_targets_;

  /** wheher or not the receiving simulation apps can assume all the targets in
   * the scan pattern are being tracked/jammed */
  uint8_t high_density_track_jam_;

  /** padding */
  uint8_t pad4_;

  /** identify jamming techniques used */
  uint32_t jamming_mode_sequence_;

  /** variable length list of track/jam targets */
  std::vector<TrackJamTarget> track_jam_targets_;

 public:
  ElectromagneticEmissionBeamData();
  ~ElectromagneticEmissionBeamData();

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetBeamDataLength() const;
  void SetBeamDataLength(uint8_t value);

  [[nodiscard]] uint8_t GetBeamIdNumber() const;
  void SetBeamIdNumber(uint8_t value);

  [[nodiscard]] uint16_t GetBeamParameterIndex() const;
  void SetBeamParameterIndex(uint16_t value);

  FundamentalParameterData& GetFundamentalParameterData();
  [[nodiscard]] const FundamentalParameterData& GetFundamentalParameterData()
      const;
  void SetFundamentalParameterData(const FundamentalParameterData& value);

  [[nodiscard]] uint8_t GetBeamFunction() const;
  void SetBeamFunction(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfTrackJamTargets() const;

  [[nodiscard]] uint8_t GetHighDensityTrackJam() const;
  void SetHighDensityTrackJam(uint8_t value);

  [[nodiscard]] uint8_t GetPad4() const;
  void SetPad4(uint8_t value);

  [[nodiscard]] uint32_t GetJammingModeSequence() const;
  void SetJammingModeSequence(uint32_t value);

  std::vector<TrackJamTarget>& GetTrackJamTargets();
  [[nodiscard]] const std::vector<TrackJamTarget>& GetTrackJamTargets() const;
  void SetTrackJamTargets(const std::vector<TrackJamTarget>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const ElectromagneticEmissionBeamData& rhs) const;
};
}  // namespace dis

