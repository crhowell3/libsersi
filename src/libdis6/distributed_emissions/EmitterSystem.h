#pragma once

#include <cstdint>

#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.2.11. This field shall specify information about a particular
// emitter system

class EmitterSystem {
 private:
  /** Name of the emitter, 16 bit enumeration */
  uint16_t emitter_name_;

  /** function of the emitter, 8 bit enumeration */
  uint8_t function_;

  /** emitter ID, 8 bit enumeration */
  uint8_t emitter_id_number_;

 public:
  EmitterSystem();
  ~EmitterSystem() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetEmitterName() const;
  void SetEmitterName(uint16_t value);

  [[nodiscard]] uint8_t GetFunction() const;
  void SetFunction(uint8_t value);

  [[nodiscard]] uint8_t GetEmitterIdNumber() const;
  void SetEmitterIdNumber(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const EmitterSystem& rhs) const;
};
}  // namespace dis
