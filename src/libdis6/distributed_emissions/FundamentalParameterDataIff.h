#pragma once

#include "dis6/utils/DataStream.h"

namespace dis {
// 5.2.45. Fundamental IFF atc data

class FundamentalParameterDataIff {
 private:
  /** ERP */
  float erp_;

  /** frequency */
  float frequency_;

  /** pgrf */
  float pgrf_;

  /** Pulse width */
  float pulse_width_;

  /** Burst length */
  uint32_t burst_length_;

  /** Applicable modes enumeration */
  uint8_t applicable_modes_;

  /** padding */
  uint16_t pad2_;

  /** padding */
  uint8_t pad3_;

 public:
  FundamentalParameterDataIff();
  ~FundamentalParameterDataIff() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] float GetErp() const;
  void SetErp(float value);

  [[nodiscard]] float GetFrequency() const;
  void SetFrequency(float value);

  [[nodiscard]] float GetPgrf() const;
  void SetPgrf(float value);

  [[nodiscard]] float GetPulseWidth() const;
  void SetPulseWidth(float value);

  [[nodiscard]] uint32_t GetBurstLength() const;
  void SetBurstLength(uint32_t value);

  [[nodiscard]] uint8_t GetApplicableModes() const;
  void SetApplicableModes(uint8_t value);

  [[nodiscard]] uint16_t GetPad2() const;
  void SetPad2(uint16_t value);

  [[nodiscard]] uint8_t GetPad3() const;
  void SetPad3(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const FundamentalParameterDataIff& rhs) const;
};

}  // namespace dis
