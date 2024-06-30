#ifndef LIBDIS6_DISTRIBUTED_EMISSIONS_ACOUSTICEMITTER_H_
#define LIBDIS6_DISTRIBUTED_EMISSIONS_ACOUSTICEMITTER_H_

#include <cstdint>

#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.2.35. information about a specific UA emmtter

class AcousticEmitter {
 private:
  /// the system for a particular UA emitter, and an enumeration
  uint16_t acoustic_name_;  // NOLINT

  /// The function of the acoustic system
  uint8_t function_;  // NOLINT

  /// The UA emitter identification number relative to a specific system
  uint8_t acoustic_id_number_;  // NOLINT

 public:
  AcousticEmitter();
  ~AcousticEmitter() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetAcousticName() const;
  void SetAcousticName(uint16_t value);

  [[nodiscard]] uint8_t GetFunction() const;
  void SetFunction(uint8_t value);

  [[nodiscard]] uint8_t GetAcousticIdNumber() const;
  void SetAcousticIdNumber(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AcousticEmitter& rhs) const;
};
}  // namespace dis

#endif  // LIBDIS6_DISTRIBUTED_EMISSIONS_ACOUSTICEMITTER_H_
