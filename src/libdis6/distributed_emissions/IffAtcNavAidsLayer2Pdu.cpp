#include "libdis6/distributed_emissions/IffAtcNavAidsLayer2Pdu.h"

namespace dis {
IffAtcNavAidsLayer2Pdu::~IffAtcNavAidsLayer2Pdu() {
  fundamental_iff_parameters_.clear();
}

LayerHeader& IffAtcNavAidsLayer2Pdu::GetLayerHeader() { return layer_header_; }

const LayerHeader& IffAtcNavAidsLayer2Pdu::GetLayerHeader() const {
  return layer_header_;
}

void IffAtcNavAidsLayer2Pdu::SetLayerHeader(const LayerHeader& value) {
  layer_header_ = value;
}

BeamData& IffAtcNavAidsLayer2Pdu::GetBeamData() { return beam_data_; }

const BeamData& IffAtcNavAidsLayer2Pdu::GetBeamData() const {
  return beam_data_;
}

void IffAtcNavAidsLayer2Pdu::SetBeamData(const BeamData& value) {
  beam_data_ = value;
}

BeamData& IffAtcNavAidsLayer2Pdu::GetSecondaryOperationalData() {
  return secondary_operational_data_;
}

const BeamData& IffAtcNavAidsLayer2Pdu::GetSecondaryOperationalData() const {
  return secondary_operational_data_;
}

void IffAtcNavAidsLayer2Pdu::SetSecondaryOperationalData(
    const BeamData& value) {
  secondary_operational_data_ = value;
}

std::vector<FundamentalParameterDataIff>&
IffAtcNavAidsLayer2Pdu::GetFundamentalIffParameters() {
  return fundamental_iff_parameters_;
}

const std::vector<FundamentalParameterDataIff>&
IffAtcNavAidsLayer2Pdu::GetFundamentalIffParameters() const {
  return fundamental_iff_parameters_;
}

void IffAtcNavAidsLayer2Pdu::SetFundamentalIffParameters(
    const std::vector<FundamentalParameterDataIff>& value) {
  fundamental_iff_parameters_ = value;
}

void IffAtcNavAidsLayer2Pdu::Marshal(DataStream& data_stream) const {
  IffAtcNavAidsLayer1Pdu::Marshal(data_stream);
  layer_header_.Marshal(data_stream);
  beam_data_.Marshal(data_stream);
  secondary_operational_data_.Marshal(data_stream);

  for (auto x : fundamental_iff_parameters_) {
    x.Marshal(data_stream);
  }
}

void IffAtcNavAidsLayer2Pdu::Unmarshal(DataStream& data_stream) {
  IffAtcNavAidsLayer1Pdu::Unmarshal(data_stream);
  layer_header_.Unmarshal(data_stream);
  beam_data_.Unmarshal(data_stream);
  secondary_operational_data_.Unmarshal(data_stream);

  fundamental_iff_parameters_.clear();
  for (std::size_t idx = 0; idx < pad2_; idx++) {
    FundamentalParameterDataIff x;
    x.Unmarshal(data_stream);
    fundamental_iff_parameters_.push_back(x);
  }
}

bool IffAtcNavAidsLayer2Pdu::operator==(
    const IffAtcNavAidsLayer2Pdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = IffAtcNavAidsLayer1Pdu::operator==(rhs);

  if (!(layer_header_ == rhs.layer_header_)) {
    ivars_equal = false;
  }
  if (!(beam_data_ == rhs.beam_data_)) {
    ivars_equal = false;
  }
  if (!(secondary_operational_data_ == rhs.secondary_operational_data_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < fundamental_iff_parameters_.size(); idx++) {
    if (!(fundamental_iff_parameters_[idx] ==
          rhs.fundamental_iff_parameters_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t IffAtcNavAidsLayer2Pdu::GetMarshalledSize() const {
  std::size_t marshal_size = IffAtcNavAidsLayer1Pdu::GetMarshalledSize() +
                             layer_header_.GetMarshalledSize() +
                             beam_data_.GetMarshalledSize() +
                             secondary_operational_data_.GetMarshalledSize();

  for (auto list_element : fundamental_iff_parameters_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
