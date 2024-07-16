#pragma once

#include <cstdint>
#include <vector>

#include "libsersi/radio_communications/RadioCommunicationsFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.8.2. Detailed information about a radio transmitter. This PDU
// requires        manually written code to complete. The encodingScheme field
// can be used in multiple        ways, which requires hand-written code to
// finish. UNFINISHED

class SignalPdu final : public RadioCommunicationsFamilyPdu {
 private:
  /** encoding scheme used, and enumeration */
  uint16_t encoding_scheme_;

  /** tdl type */
  uint16_t tdl_type_;

  /** sample rate */
  uint32_t sample_rate_;

  /** length od data */
  int16_t data_length_;

  /** number of samples */
  int16_t samples_;

  /** list of eight bit values */
  std::vector<uint8_t> data_;

 public:
  SignalPdu();
  ~SignalPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint16_t GetEncodingScheme() const;
  void SetEncodingScheme(uint16_t value);

  [[nodiscard]] uint16_t GetTdlType() const;
  void SetTdlType(uint16_t value);

  [[nodiscard]] uint32_t GetSampleRate() const;
  void SetSampleRate(uint32_t value);

  [[nodiscard]] int16_t GetDataLength() const;

  [[nodiscard]] int16_t GetSamples() const;
  void SetSamples(int16_t value);

  std::vector<uint8_t>& GetData();
  [[nodiscard]] const std::vector<uint8_t>& GetData() const;
  void SetData(const std::vector<uint8_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const SignalPdu& rhs) const;
};
}  // namespace dis
