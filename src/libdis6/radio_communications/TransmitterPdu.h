#pragma once

#include <cstddef>
#include <vector>

#include "dis6/common/Vector3Double.h"
#include "dis6/common/Vector3Float.h"
#include "dis6/radio_communications/ModulationType.h"
#include "dis6/radio_communications/RadioCommunicationsFamilyPdu.h"
#include "dis6/radio_communications/RadioEntityType.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.8.1. Detailed information about a radio transmitter.

class TransmitterPdu final : public RadioCommunicationsFamilyPdu {
 private:
  /** linear accelleration of entity */
  RadioEntityType radio_entity_type_;

  /** transmit state */
  uint8_t transmit_state_;

  /** input source */
  uint8_t input_source_;

  /** padding */
  uint16_t padding1_;

  /** Location of antenna */
  Vector3Double antenna_location_;

  /** relative location of antenna */
  Vector3Float relative_antenna_location_;

  /** antenna pattern type */
  uint16_t antenna_pattern_type_;

  /** atenna pattern length */
  uint16_t antenna_pattern_count_;

  /** frequency */
  uint64_t frequency_;

  /** transmit frequency Bandwidth */
  float transmit_frequency_bandwidth_;

  /** transmission power */
  float power_;

  /** modulation */
  ModulationType modulation_type_;

  /** crypto system enumeration */
  uint16_t crypto_system_;

  /** crypto system key identifer */
  uint16_t crypto_key_id_;

  /** how many modulation parameters we have */
  uint8_t modulation_parameter_count_;

  /** padding2 */
  uint16_t padding2_;

  /** padding3 */
  uint8_t padding3_;

  /** variable length list of modulation parameters */
  std::vector<Vector3Float> modulation_parameters_list_;

  /** variable length list of antenna pattern records */
  std::vector<Vector3Float> antenna_pattern_list_;

 public:
  TransmitterPdu();
  ~TransmitterPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  RadioEntityType& GetRadioEntityType();
  [[nodiscard]] const RadioEntityType& GetRadioEntityType() const;
  void SetRadioEntityType(const RadioEntityType& value);

  [[nodiscard]] uint8_t GetTransmitState() const;
  void SetTransmitState(uint8_t value);

  [[nodiscard]] uint8_t GetInputSource() const;
  void SetInputSource(uint8_t value);

  [[nodiscard]] uint16_t GetPadding1() const;
  void SetPadding1(uint16_t value);

  Vector3Double& GetAntennaLocation();
  [[nodiscard]] const Vector3Double& GetAntennaLocation() const;
  void SetAntennaLocation(const Vector3Double& value);

  Vector3Float& GetRelativeAntennaLocation();
  [[nodiscard]] const Vector3Float& GetRelativeAntennaLocation() const;
  void SetRelativeAntennaLocation(const Vector3Float& value);

  [[nodiscard]] uint16_t GetAntennaPatternType() const;
  void SetAntennaPatternType(uint16_t value);

  [[nodiscard]] uint16_t GetAntennaPatternCount() const;

  [[nodiscard]] uint64_t GetFrequency() const;
  void SetFrequency(uint64_t value);

  [[nodiscard]] float GetTransmitFrequencyBandwidth() const;
  void SetTransmitFrequencyBandwidth(float value);

  [[nodiscard]] float GetPower() const;
  void SetPower(float value);

  ModulationType& GetModulationType();
  [[nodiscard]] const ModulationType& GetModulationType() const;
  void SetModulationType(const ModulationType& value);

  [[nodiscard]] uint16_t GetCryptoSystem() const;
  void SetCryptoSystem(uint16_t value);

  [[nodiscard]] uint16_t GetCryptoKeyId() const;
  void SetCryptoKeyId(uint16_t value);

  [[nodiscard]] uint8_t GetModulationParameterCount() const;

  [[nodiscard]] uint16_t GetPadding2() const;
  void SetPadding2(uint16_t value);

  [[nodiscard]] uint8_t GetPadding3() const;
  void SetPadding3(uint8_t value);

  std::vector<Vector3Float>& GetModulationParametersList();
  [[nodiscard]] const std::vector<Vector3Float>& GetModulationParametersList()
      const;
  void SetModulationParametersList(const std::vector<Vector3Float>& value);

  std::vector<Vector3Float>& GetAntennaPatternList();
  [[nodiscard]] const std::vector<Vector3Float>& GetAntennaPatternList() const;
  void SetAntennaPatternList(const std::vector<Vector3Float>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const TransmitterPdu& rhs) const;
};
}  // namespace dis
