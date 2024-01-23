#pragma once

#include <cstdint>

#include "dis6/utils/DataStream.h"

namespace dis {
// 5.3.35: Information about a particular UA emitter shall be represented using
// an Acoustic Emitter System record. This record shall consist of three fields:
// Acoustic Name, Function, and Acoustic ID Number

class AcousticEmitterSystem {
 private:
  /** This field shall specify the system for a particular UA emitter. */
  uint16_t acoustic_name_;  // NOLINT

  /** This field shall describe the function of the acoustic system.  */
  uint8_t acoustic_function_;  // NOLINT

  /** This field shall specify the UA emitter identification number relative to
   * a specific system. This field shall be represented by an 8-bit unsigned
   * integer. This field allows the differentiation of multiple systems on an
   * entity, even if in some instances two or more of the systems may be
   * identical UA emitter types. Numbering of systems shall begin with the
   * value 1.  */
  uint8_t acoustic_id_;  // NOLINT

 public:
  AcousticEmitterSystem();
  ~AcousticEmitterSystem() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetAcousticName() const;
  void SetAcousticName(uint16_t value);

  [[nodiscard]] uint8_t GetAcousticFunction() const;
  void SetAcousticFunction(uint8_t value);

  [[nodiscard]] uint8_t GetAcousticId() const;
  void SetAcousticId(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AcousticEmitterSystem& rhs) const;
};
}  // namespace dis
