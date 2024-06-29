#include "dis6/distributed_emissions/FundamentalParameterDataIff.h"

namespace dis {
FundamentalParameterDataIff::FundamentalParameterDataIff()
    : erp_(0.0),
      frequency_(0.0),
      pgrf_(0.0),
      pulse_width_(0.0),
      burst_length_(0),
      applicable_modes_(0),
      pad2_(0),
      pad3_(0) {}

float FundamentalParameterDataIff::GetErp() const { return erp_; }

void FundamentalParameterDataIff::SetErp(float value) { erp_ = value; }

float FundamentalParameterDataIff::GetFrequency() const { return frequency_; }

void FundamentalParameterDataIff::SetFrequency(float value) {
  frequency_ = value;
}

float FundamentalParameterDataIff::GetPgrf() const { return pgrf_; }

void FundamentalParameterDataIff::SetPgrf(float value) { pgrf_ = value; }

float FundamentalParameterDataIff::GetPulseWidth() const {
  return pulse_width_;
}

void FundamentalParameterDataIff::SetPulseWidth(float value) {
  pulse_width_ = value;
}

uint32_t FundamentalParameterDataIff::GetBurstLength() const {
  return burst_length_;
}

void FundamentalParameterDataIff::SetBurstLength(uint32_t value) {
  burst_length_ = value;
}

uint8_t FundamentalParameterDataIff::GetApplicableModes() const {
  return applicable_modes_;
}

void FundamentalParameterDataIff::SetApplicableModes(uint8_t value) {
  applicable_modes_ = value;
}

uint16_t FundamentalParameterDataIff::GetPad2() const { return pad2_; }

void FundamentalParameterDataIff::SetPad2(uint16_t value) { pad2_ = value; }

uint8_t FundamentalParameterDataIff::GetPad3() const { return pad3_; }

void FundamentalParameterDataIff::SetPad3(uint8_t value) { pad3_ = value; }

void FundamentalParameterDataIff::Marshal(DataStream& data_stream) const {
  data_stream << erp_;
  data_stream << frequency_;
  data_stream << pgrf_;
  data_stream << pulse_width_;
  data_stream << burst_length_;
  data_stream << applicable_modes_;
  data_stream << pad2_;
  data_stream << pad3_;
}

void FundamentalParameterDataIff::Unmarshal(DataStream& data_stream) {
  data_stream >> erp_;
  data_stream >> frequency_;
  data_stream >> pgrf_;
  data_stream >> pulse_width_;
  data_stream >> burst_length_;
  data_stream >> applicable_modes_;
  data_stream >> pad2_;
  data_stream >> pad3_;
}

bool FundamentalParameterDataIff::operator==(
    const FundamentalParameterDataIff& rhs) const {
  bool ivars_equal = true;

  if (!(erp_ == rhs.erp_)) {
    ivars_equal = false;
  }
  if (!(frequency_ == rhs.frequency_)) {
    ivars_equal = false;
  }
  if (!(pgrf_ == rhs.pgrf_)) {
    ivars_equal = false;
  }
  if (!(pulse_width_ == rhs.pulse_width_)) {
    ivars_equal = false;
  }
  if (!(burst_length_ == rhs.burst_length_)) {
    ivars_equal = false;
  }
  if (!(applicable_modes_ == rhs.applicable_modes_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(pad3_ == rhs.pad3_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t FundamentalParameterDataIff::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(erp_) + sizeof(frequency_) + sizeof(pgrf_) +
                             sizeof(pulse_width_) + sizeof(burst_length_) +
                             sizeof(applicable_modes_) + sizeof(pad2_) +
                             sizeof(pad3_);

  return marshal_size;
}

}  // namespace dis
