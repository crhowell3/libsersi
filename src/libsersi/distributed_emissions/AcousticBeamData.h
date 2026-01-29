#ifndef LIBSERSI_DISTRIBUTED_EMISSIONS_ACOUSTICBEAMDATA_H_
#define LIBSERSI_DISTRIBUTED_EMISSIONS_ACOUSTICBEAMDATA_H_

#include <cstdint>

#include "libsersi/distributed_emissions/AcousticBeamFundamentalParameter.h"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Used in UA PDU

class AcousticBeamData {
 private:
  /// beam data length
  uint16_t beam_data_length_;  // NOLINT

  /// beamIDNumber
  uint8_t beam_id_number_;  // NOLINT

  /// padding
  uint16_t pad2_;  // NOLINT

  /// fundamental data parameters
  AcousticBeamFundamentalParameter fundamental_data_parameters_;  // NOLINT

 public:
  AcousticBeamData();
  ~AcousticBeamData() = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] uint16_t GetBeamDataLength() const;
  void SetBeamDataLength(uint16_t value);

  [[nodiscard]] uint8_t GetBeamIdNumber() const;
  void SetBeamIdNumber(uint8_t value);

  [[nodiscard]] uint16_t GetPad2() const;
  void SetPad2(uint16_t value);

  AcousticBeamFundamentalParameter& GetFundamentalDataParameters();
  [[nodiscard]] const AcousticBeamFundamentalParameter&
  GetFundamentalDataParameters() const;
  void SetFundamentalDataParameters(
      const AcousticBeamFundamentalParameter& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AcousticBeamData& rhs) const;
};
}  // namespace dis

#endif  // LIBSERSI_DISTRIBUTED_EMISSIONS_ACOUSTICBEAMDATA_H_
