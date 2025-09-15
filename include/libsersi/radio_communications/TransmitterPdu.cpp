#include "libsersi/radio_communications/TransmitterPdu.h"

namespace dis {
TransmitterPdu::TransmitterPdu()
    : transmit_state_(0),
      input_source_(0),
      padding1_(0),
      antenna_pattern_type_(0),
      antenna_pattern_count_(0),
      frequency_(0),
      transmit_frequency_bandwidth_(0.0),
      power_(0.0),
      crypto_system_(0),
      crypto_key_id_(0),
      modulation_parameter_count_(0),
      padding2_(0),
      padding3_(0) {
  SetPduType(25);
}

TransmitterPdu::~TransmitterPdu() {
  modulation_parameters_list_.clear();
  antenna_pattern_list_.clear();
}

RadioEntityType& TransmitterPdu::GetRadioEntityType() {
  return radio_entity_type_;
}

const RadioEntityType& TransmitterPdu::GetRadioEntityType() const {
  return radio_entity_type_;
}

void TransmitterPdu::SetRadioEntityType(const RadioEntityType& value) {
  radio_entity_type_ = value;
}

uint8_t TransmitterPdu::GetTransmitState() const { return transmit_state_; }

void TransmitterPdu::SetTransmitState(uint8_t value) {
  transmit_state_ = value;
}

uint8_t TransmitterPdu::GetInputSource() const { return input_source_; }

void TransmitterPdu::SetInputSource(uint8_t value) { input_source_ = value; }

uint16_t TransmitterPdu::GetPadding1() const { return padding1_; }

void TransmitterPdu::SetPadding1(uint16_t value) { padding1_ = value; }

Vector3Double& TransmitterPdu::GetAntennaLocation() {
  return antenna_location_;
}

const Vector3Double& TransmitterPdu::GetAntennaLocation() const {
  return antenna_location_;
}

void TransmitterPdu::SetAntennaLocation(const Vector3Double& value) {
  antenna_location_ = value;
}

Vector3Float& TransmitterPdu::GetRelativeAntennaLocation() {
  return relative_antenna_location_;
}

const Vector3Float& TransmitterPdu::GetRelativeAntennaLocation() const {
  return relative_antenna_location_;
}

void TransmitterPdu::SetRelativeAntennaLocation(const Vector3Float& value) {
  relative_antenna_location_ = value;
}

uint16_t TransmitterPdu::GetAntennaPatternType() const {
  return antenna_pattern_type_;
}

void TransmitterPdu::SetAntennaPatternType(uint16_t value) {
  antenna_pattern_type_ = value;
}

uint16_t TransmitterPdu::GetAntennaPatternCount() const {
  return antenna_pattern_list_.size();
}

uint64_t TransmitterPdu::GetFrequency() const { return frequency_; }

void TransmitterPdu::SetFrequency(uint64_t value) { frequency_ = value; }

float TransmitterPdu::GetTransmitFrequencyBandwidth() const {
  return transmit_frequency_bandwidth_;
}

void TransmitterPdu::SetTransmitFrequencyBandwidth(float value) {
  transmit_frequency_bandwidth_ = value;
}

float TransmitterPdu::GetPower() const { return power_; }

void TransmitterPdu::SetPower(float value) { power_ = value; }

ModulationType& TransmitterPdu::GetModulationType() { return modulation_type_; }

const ModulationType& TransmitterPdu::GetModulationType() const {
  return modulation_type_;
}

void TransmitterPdu::SetModulationType(const ModulationType& value) {
  modulation_type_ = value;
}

uint16_t TransmitterPdu::GetCryptoSystem() const { return crypto_system_; }

void TransmitterPdu::SetCryptoSystem(uint16_t value) { crypto_system_ = value; }

uint16_t TransmitterPdu::GetCryptoKeyId() const { return crypto_key_id_; }

void TransmitterPdu::SetCryptoKeyId(uint16_t value) { crypto_key_id_ = value; }

uint8_t TransmitterPdu::GetModulationParameterCount() const {
  return modulation_parameters_list_.size();
}

uint16_t TransmitterPdu::GetPadding2() const { return padding2_; }

void TransmitterPdu::SetPadding2(uint16_t value) { padding2_ = value; }

uint8_t TransmitterPdu::GetPadding3() const { return padding3_; }

void TransmitterPdu::SetPadding3(uint8_t value) { padding3_ = value; }

std::vector<Vector3Float>& TransmitterPdu::GetModulationParametersList() {
  return modulation_parameters_list_;
}

const std::vector<Vector3Float>& TransmitterPdu::GetModulationParametersList()
    const {
  return modulation_parameters_list_;
}

void TransmitterPdu::SetModulationParametersList(
    const std::vector<Vector3Float>& value) {
  modulation_parameters_list_ = value;
}

std::vector<Vector3Float>& TransmitterPdu::GetAntennaPatternList() {
  return antenna_pattern_list_;
}

const std::vector<Vector3Float>& TransmitterPdu::GetAntennaPatternList() const {
  return antenna_pattern_list_;
}

void TransmitterPdu::SetAntennaPatternList(
    const std::vector<Vector3Float>& value) {
  antenna_pattern_list_ = value;
}

void TransmitterPdu::Marshal(DataStream& data_stream) const {
  RadioCommunicationsFamilyPdu::Marshal(data_stream);
  radio_entity_type_.Marshal(data_stream);
  data_stream << transmit_state_;
  data_stream << input_source_;
  data_stream << padding1_;
  antenna_location_.Marshal(data_stream);
  relative_antenna_location_.Marshal(data_stream);
  data_stream << antenna_pattern_type_;
  data_stream << static_cast<uint16_t>(antenna_pattern_list_.size());
  data_stream << frequency_;
  data_stream << transmit_frequency_bandwidth_;
  data_stream << power_;
  modulation_type_.Marshal(data_stream);
  data_stream << crypto_system_;
  data_stream << crypto_key_id_;
  data_stream << static_cast<uint8_t>(modulation_parameters_list_.size());
  data_stream << padding2_;
  data_stream << padding3_;

  for (auto x : modulation_parameters_list_) {
    x.Marshal(data_stream);
  }

  for (auto x : antenna_pattern_list_) {
    x.Marshal(data_stream);
  }
}

void TransmitterPdu::Unmarshal(DataStream& data_stream) {
  RadioCommunicationsFamilyPdu::Unmarshal(data_stream);
  radio_entity_type_.Unmarshal(data_stream);
  data_stream >> transmit_state_;
  data_stream >> input_source_;
  data_stream >> padding1_;
  antenna_location_.Unmarshal(data_stream);
  relative_antenna_location_.Unmarshal(data_stream);
  data_stream >> antenna_pattern_type_;
  data_stream >> antenna_pattern_count_;
  data_stream >> frequency_;
  data_stream >> transmit_frequency_bandwidth_;
  data_stream >> power_;
  modulation_type_.Unmarshal(data_stream);
  data_stream >> crypto_system_;
  data_stream >> crypto_key_id_;
  data_stream >> modulation_parameter_count_;
  data_stream >> padding2_;
  data_stream >> padding3_;

  modulation_parameters_list_.clear();
  for (std::size_t idx = 0; idx < modulation_parameter_count_; idx++) {
    Vector3Float x;
    x.Unmarshal(data_stream);
    modulation_parameters_list_.push_back(x);
  }

  antenna_pattern_list_.clear();
  for (std::size_t idx = 0; idx < antenna_pattern_count_; idx++) {
    Vector3Float x;
    x.Unmarshal(data_stream);
    antenna_pattern_list_.push_back(x);
  }
}

bool TransmitterPdu::operator==(const TransmitterPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = RadioCommunicationsFamilyPdu::operator==(rhs);

  if (!(radio_entity_type_ == rhs.radio_entity_type_)) {
    ivars_equal = false;
  }
  if (!(transmit_state_ == rhs.transmit_state_)) {
    ivars_equal = false;
  }
  if (!(input_source_ == rhs.input_source_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(antenna_location_ == rhs.antenna_location_)) {
    ivars_equal = false;
  }
  if (!(relative_antenna_location_ == rhs.relative_antenna_location_)) {
    ivars_equal = false;
  }
  if (!(antenna_pattern_type_ == rhs.antenna_pattern_type_)) {
    ivars_equal = false;
  }
  if (!(frequency_ == rhs.frequency_)) {
    ivars_equal = false;
  }
  if (!(transmit_frequency_bandwidth_ == rhs.transmit_frequency_bandwidth_)) {
    ivars_equal = false;
  }
  if (!(power_ == rhs.power_)) {
    ivars_equal = false;
  }
  if (!(modulation_type_ == rhs.modulation_type_)) {
    ivars_equal = false;
  }
  if (!(crypto_system_ == rhs.crypto_system_)) {
    ivars_equal = false;
  }
  if (!(crypto_key_id_ == rhs.crypto_key_id_)) {
    ivars_equal = false;
  }
  if (!(padding2_ == rhs.padding2_)) {
    ivars_equal = false;
  }
  if (!(padding3_ == rhs.padding3_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < modulation_parameters_list_.size(); idx++) {
    if (!(modulation_parameters_list_[idx] ==
          rhs.modulation_parameters_list_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < antenna_pattern_list_.size(); idx++) {
    if (!(antenna_pattern_list_[idx] == rhs.antenna_pattern_list_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t TransmitterPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      RadioCommunicationsFamilyPdu::GetMarshalledSize() +
      radio_entity_type_.GetMarshalledSize() + sizeof(transmit_state_) +
      sizeof(input_source_) + sizeof(padding1_) +
      antenna_location_.GetMarshalledSize() +
      relative_antenna_location_.GetMarshalledSize() +
      sizeof(antenna_pattern_type_) + sizeof(antenna_pattern_count_) +
      sizeof(frequency_) + sizeof(transmit_frequency_bandwidth_) +
      sizeof(power_) + modulation_type_.GetMarshalledSize() +
      sizeof(crypto_system_) + sizeof(crypto_key_id_) +
      sizeof(modulation_parameter_count_) + sizeof(padding2_) +
      sizeof(padding3_);

  for (auto list_element : modulation_parameters_list_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (auto list_element : antenna_pattern_list_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
