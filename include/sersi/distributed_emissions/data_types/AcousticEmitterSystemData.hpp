#pragma once

#include <cstddef>
#include <vector>

#include "libsersi/common/Vector3Float.h"
#include "libsersi/distributed_emissions/AcousticBeamData.h"
#include "libsersi/distributed_emissions/AcousticEmitterSystem.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Used in the UA pdu; ties together an emmitter and a location. This requires
// manual cleanup; the beam data should not be attached to each emitter system.

class AcousticEmitterSystemData {
 private:
  /** Length of emitter system data */
  uint8_t emitter_system_data_length_;

  /** Number of beams */
  uint8_t number_of_beams_;

  /** padding */
  uint16_t pad2_;

  /** This field shall specify the system for a particular UA emitter. */
  AcousticEmitterSystem acoustic_emitter_system_;

  /** Represents the location wrt the entity */
  Vector3Float emitter_location_;

  /** For each beam in numberOfBeams, an emitter system. This is not right--the
   * beam records need to be at the end of the PDU, rather than attached to each
   * system. */
  std::vector<AcousticBeamData> beam_records_;

 public:
  AcousticEmitterSystemData();
  ~AcousticEmitterSystemData();

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetEmitterSystemDataLength() const;
  void SetEmitterSystemDataLength(uint8_t value);

  [[nodiscard]] uint8_t GetNumberOfBeams() const;

  [[nodiscard]] uint16_t GetPad2() const;
  void SetPad2(uint16_t value);

  AcousticEmitterSystem& GetAcousticEmitterSystem();
  [[nodiscard]] const AcousticEmitterSystem& GetAcousticEmitterSystem() const;
  void SetAcousticEmitterSystem(const AcousticEmitterSystem& value);

  Vector3Float& GetEmitterLocation();
  [[nodiscard]] const Vector3Float& GetEmitterLocation() const;
  void SetEmitterLocation(const Vector3Float& value);

  std::vector<AcousticBeamData>& GetBeamRecords();
  [[nodiscard]] const std::vector<AcousticBeamData>& GetBeamRecords() const;
  void SetBeamRecords(const std::vector<AcousticBeamData>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AcousticEmitterSystemData& rhs) const;
};
}  // namespace dis
