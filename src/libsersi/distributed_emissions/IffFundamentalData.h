#pragma once

#include "libsersi/utils/DataStream.h"

namespace dis {
// 5.2.42. Basic operational data ofr IFF ATC NAVAIDS

class IffFundamentalData {
 private:
  /** system status */
  uint8_t system_status_;

  /** Alternate parameter 4 */
  uint8_t alternate_parameter4_;

  /** eight boolean fields */
  uint8_t information_layers_;

  /** enumeration */
  uint8_t modifier_;

  /** parameter, enumeration */
  uint16_t parameter1_;

  /** parameter, enumeration */
  uint16_t parameter2_;

  /** parameter, enumeration */
  uint16_t parameter3_;

  /** parameter, enumeration */
  uint16_t parameter4_;

  /** parameter, enumeration */
  uint16_t parameter5_;

  /** parameter, enumeration */
  uint16_t parameter6_;

 public:
  IffFundamentalData();
  ~IffFundamentalData() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetSystemStatus() const;
  void SetSystemStatus(uint8_t value);

  [[nodiscard]] uint8_t GetAlternateParameter4() const;
  void SetAlternateParameter4(uint8_t value);

  [[nodiscard]] uint8_t GetInformationLayers() const;
  void SetInformationLayers(uint8_t value);

  [[nodiscard]] uint8_t GetModifier() const;
  void SetModifier(uint8_t value);

  [[nodiscard]] uint16_t GetParameter1() const;
  void SetParameter1(uint16_t value);

  [[nodiscard]] uint16_t GetParameter2() const;
  void SetParameter2(uint16_t value);

  [[nodiscard]] uint16_t GetParameter3() const;
  void SetParameter3(uint16_t value);

  [[nodiscard]] uint16_t GetParameter4() const;
  void SetParameter4(uint16_t value);

  [[nodiscard]] uint16_t GetParameter5() const;
  void SetParameter5(uint16_t value);

  [[nodiscard]] uint16_t GetParameter6() const;
  void SetParameter6(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const IffFundamentalData& rhs) const;
};
}  // namespace dis
