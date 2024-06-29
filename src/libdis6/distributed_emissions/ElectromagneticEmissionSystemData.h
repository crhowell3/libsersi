#pragma once

#include <vector>

#include "dis6/common/Vector3Float.h"
#include "dis6/distributed_emissions/ElectromagneticEmissionBeamData.h"
#include "dis6/distributed_emissions/EmitterSystem.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Data about one electronic system

class ElectromagneticEmissionSystemData {
 private:
  /** This field shall specify the length of this emitter system�s data
   * (including beam data and its track/jam information) in 32-bit words. The
   * length shall include the System Data Length field.  */
  uint8_t system_data_length_;

  /** This field shall specify the number of beams being described in the
   * current PDU for the system being described.  */
  uint8_t number_of_beams_;

  /** padding. */
  uint16_t emissions_padding2_;

  /** This field shall specify information about a particular emitter system */
  EmitterSystem emitter_system_;

  /** Location with respect to the entity */
  Vector3Float location_;

  /** variable length list of beam data records */
  std::vector<ElectromagneticEmissionBeamData> beam_data_records_;

 public:
  ElectromagneticEmissionSystemData();
  ~ElectromagneticEmissionSystemData();

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetSystemDataLength() const;
  void SetSystemDataLength(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfBeams() const;

  [[nodiscard]] uint16_t GetEmissionsPadding2() const;
  void SetEmissionsPadding2(uint16_t value);

  EmitterSystem& GetEmitterSystem();
  [[nodiscard]] const EmitterSystem& GetEmitterSystem() const;
  void SetEmitterSystem(const EmitterSystem& value);

  Vector3Float& GetLocation();
  [[nodiscard]] const Vector3Float& GetLocation() const;
  void SetLocation(const Vector3Float& value);

  std::vector<ElectromagneticEmissionBeamData>& GetBeamDataRecords();
  [[nodiscard]] const std::vector<ElectromagneticEmissionBeamData>&
  GetBeamDataRecords() const;
  void SetBeamDataRecords(
      const std::vector<ElectromagneticEmissionBeamData>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const ElectromagneticEmissionSystemData& rhs) const;
};
}  // namespace dis

