#include "dis6/distributed_emissions/IffFundamentalData.h"

namespace dis {
IffFundamentalData::IffFundamentalData()
    : system_status_(0),
      alternate_parameter4_(0),
      information_layers_(0),
      modifier_(0),
      parameter1_(0),
      parameter2_(0),
      parameter3_(0),
      parameter4_(0),
      parameter5_(0),
      parameter6_(0) {}

uint8_t IffFundamentalData::GetSystemStatus() const { return system_status_; }

void IffFundamentalData::SetSystemStatus(uint8_t value) {
  system_status_ = value;
}

uint8_t IffFundamentalData::GetAlternateParameter4() const {
  return alternate_parameter4_;
}

void IffFundamentalData::SetAlternateParameter4(uint8_t value) {
  alternate_parameter4_ = value;
}

uint8_t IffFundamentalData::GetInformationLayers() const {
  return information_layers_;
}

void IffFundamentalData::SetInformationLayers(uint8_t value) {
  information_layers_ = value;
}

uint8_t IffFundamentalData::GetModifier() const { return modifier_; }

void IffFundamentalData::SetModifier(uint8_t value) { modifier_ = value; }

uint16_t IffFundamentalData::GetParameter1() const { return parameter1_; }

void IffFundamentalData::SetParameter1(uint16_t value) { parameter1_ = value; }

uint16_t IffFundamentalData::GetParameter2() const { return parameter2_; }

void IffFundamentalData::SetParameter2(uint16_t value) { parameter2_ = value; }

uint16_t IffFundamentalData::GetParameter3() const { return parameter3_; }

void IffFundamentalData::SetParameter3(uint16_t value) { parameter3_ = value; }

uint16_t IffFundamentalData::GetParameter4() const { return parameter4_; }

void IffFundamentalData::SetParameter4(uint16_t value) { parameter4_ = value; }

uint16_t IffFundamentalData::GetParameter5() const { return parameter5_; }

void IffFundamentalData::SetParameter5(uint16_t value) { parameter5_ = value; }

uint16_t IffFundamentalData::GetParameter6() const { return parameter6_; }

void IffFundamentalData::SetParameter6(uint16_t value) { parameter6_ = value; }

void IffFundamentalData::Marshal(DataStream& data_stream) const {
  data_stream << system_status_;
  data_stream << alternate_parameter4_;
  data_stream << information_layers_;
  data_stream << modifier_;
  data_stream << parameter1_;
  data_stream << parameter2_;
  data_stream << parameter3_;
  data_stream << parameter4_;
  data_stream << parameter5_;
  data_stream << parameter6_;
}

void IffFundamentalData::Unmarshal(DataStream& data_stream) {
  data_stream >> system_status_;
  data_stream >> alternate_parameter4_;
  data_stream >> information_layers_;
  data_stream >> modifier_;
  data_stream >> parameter1_;
  data_stream >> parameter2_;
  data_stream >> parameter3_;
  data_stream >> parameter4_;
  data_stream >> parameter5_;
  data_stream >> parameter6_;
}

bool IffFundamentalData::operator==(const IffFundamentalData& rhs) const {
  bool ivars_equal = true;

  if (!(system_status_ == rhs.system_status_)) {
    ivars_equal = false;
  }
  if (!(alternate_parameter4_ == rhs.alternate_parameter4_)) {
    ivars_equal = false;
  }
  if (!(information_layers_ == rhs.information_layers_)) {
    ivars_equal = false;
  }
  if (!(modifier_ == rhs.modifier_)) {
    ivars_equal = false;
  }
  if (!(parameter1_ == rhs.parameter1_)) {
    ivars_equal = false;
  }
  if (!(parameter2_ == rhs.parameter2_)) {
    ivars_equal = false;
  }
  if (!(parameter3_ == rhs.parameter3_)) {
    ivars_equal = false;
  }
  if (!(parameter4_ == rhs.parameter4_)) {
    ivars_equal = false;
  }
  if (!(parameter5_ == rhs.parameter5_)) {
    ivars_equal = false;
  }
  if (!(parameter6_ == rhs.parameter6_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t IffFundamentalData::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(system_status_) + sizeof(alternate_parameter4_) +
      sizeof(information_layers_) + sizeof(modifier_) + sizeof(parameter1_) +
      sizeof(parameter2_) + sizeof(parameter3_) + sizeof(parameter4_) +
      sizeof(parameter5_) + sizeof(parameter6_);

  return marshal_size;
}

}  // namespace dis
