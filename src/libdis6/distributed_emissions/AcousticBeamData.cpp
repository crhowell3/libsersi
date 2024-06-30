#include "libdis6/distributed_emissions/AcousticBeamData.h"

namespace dis {

AcousticBeamData::AcousticBeamData()
    : beam_data_length_(0), beam_id_number_(0), pad2_(0) {}

uint16_t AcousticBeamData::GetBeamDataLength() const {
  return beam_data_length_;
}

void AcousticBeamData::SetBeamDataLength(uint16_t value) {
  beam_data_length_ = value;
}

uint8_t AcousticBeamData::GetBeamIdNumber() const { return beam_id_number_; }

void AcousticBeamData::SetBeamIdNumber(uint8_t value) { beam_id_number_ = value; }

uint16_t AcousticBeamData::GetPad2() const { return pad2_; }

void AcousticBeamData::SetPad2(uint16_t value) { pad2_ = value; }

AcousticBeamFundamentalParameter&
AcousticBeamData::GetFundamentalDataParameters() {
  return fundamental_data_parameters_;
}

const AcousticBeamFundamentalParameter&
AcousticBeamData::GetFundamentalDataParameters() const {
  return fundamental_data_parameters_;
}

void AcousticBeamData::SetFundamentalDataParameters(
    const AcousticBeamFundamentalParameter& value) {
  fundamental_data_parameters_ = value;
}

void AcousticBeamData::Marshal(DataStream& data_stream) const {
  data_stream << beam_data_length_;
  data_stream << beam_id_number_;
  data_stream << pad2_;
  fundamental_data_parameters_.Marshal(data_stream);
}

void AcousticBeamData::Unmarshal(DataStream& data_stream) {
  data_stream >> beam_data_length_;
  data_stream >> beam_id_number_;
  data_stream >> pad2_;
  fundamental_data_parameters_.Unmarshal(data_stream);
}

bool AcousticBeamData::operator==(const AcousticBeamData& rhs) const {
  bool ivars_equal = true;

  if (!(beam_data_length_ == rhs.beam_data_length_)) {
    ivars_equal = false;
  }
  if (!(beam_id_number_ == rhs.beam_id_number_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(fundamental_data_parameters_ == rhs.fundamental_data_parameters_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t AcousticBeamData::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(beam_data_length_) + sizeof(beam_id_number_) +
                        sizeof(pad2_) +
                        fundamental_data_parameters_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis

