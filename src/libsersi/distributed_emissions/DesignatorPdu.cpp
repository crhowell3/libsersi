#include "libsersi/distributed_emissions/DesignatorPdu.h"

namespace dis {
DesignatorPdu::DesignatorPdu()
    : code_name_(0),
      designator_code_(0),
      designator_power_(0.0),
      designator_wavelength_(0.0),
      dead_reckoning_algorithm_(0),
      padding1_(0),
      padding2_(0) {
  SetPduType(24);
}

DesignatorPdu::~DesignatorPdu() = default;

const EntityID& DesignatorPdu::GetDesignatingEntityId() const {
  return designating_entity_id_;
}

void DesignatorPdu::SetDesignatingEntityId(const EntityID& value) {
  designating_entity_id_ = value;
}

uint16_t DesignatorPdu::GetCodeName() const { return code_name_; }

void DesignatorPdu::SetCodeName(uint16_t value) { code_name_ = value; }

const EntityID& DesignatorPdu::GetDesignatedEntityId() const {
  return designated_entity_id_;
}

void DesignatorPdu::SetDesignatedEntityId(const EntityID& value) {
  designated_entity_id_ = value;
}

uint16_t DesignatorPdu::GetDesignatorCode() const { return designator_code_; }

void DesignatorPdu::SetDesignatorCode(uint16_t value) { designator_code_ = value; }

float DesignatorPdu::GetDesignatorPower() const { return designator_power_; }

void DesignatorPdu::SetDesignatorPower(float value) { designator_power_ = value; }

float DesignatorPdu::GetDesignatorWavelength() const {
  return designator_wavelength_;
}

void DesignatorPdu::SetDesignatorWavelength(float value) {
  designator_wavelength_ = value;
}

const Vector3Float& DesignatorPdu::GetDesignatorSpotWrtDesignated() const {
  return designator_spot_wrt_designated_;
}

void DesignatorPdu::SetDesignatorSpotWrtDesignated(const Vector3Float& value) {
  designator_spot_wrt_designated_ = value;
}

const Vector3Double& DesignatorPdu::GetDesignatorSpotLocation() const {
  return designator_spot_location_;
}

void DesignatorPdu::SetDesignatorSpotLocation(const Vector3Double& value) {
  designator_spot_location_ = value;
}

char DesignatorPdu::GetDeadReckoningAlgorithm() const {
  return dead_reckoning_algorithm_;
}

void DesignatorPdu::SetDeadReckoningAlgorithm(char value) {
  dead_reckoning_algorithm_ = value;
}

uint16_t DesignatorPdu::GetPadding1() const { return padding1_; }

void DesignatorPdu::SetPadding1(uint16_t value) { padding1_ = value; }

char DesignatorPdu::GetPadding2() const { return padding2_; }

void DesignatorPdu::SetPadding2(char value) { padding2_ = value; }

const Vector3Float& DesignatorPdu::GetEntityLinearAcceleration() const {
  return entity_linear_acceleration_;
}

void DesignatorPdu::SetEntityLinearAcceleration(const Vector3Float& value) {
  entity_linear_acceleration_ = value;
}

void DesignatorPdu::Marshal(DataStream& data_stream) const {
  DistributedEmissionsFamilyPdu::Marshal(data_stream);
  designating_entity_id_.Marshal(data_stream);
  data_stream << code_name_;
  designated_entity_id_.Marshal(data_stream);
  data_stream << designator_code_;
  data_stream << designator_power_;
  data_stream << designator_wavelength_;
  designator_spot_wrt_designated_.Marshal(data_stream);
  designator_spot_location_.Marshal(data_stream);
  data_stream << dead_reckoning_algorithm_;
  data_stream << padding1_;
  data_stream << padding2_;
  entity_linear_acceleration_.Marshal(data_stream);
}

void DesignatorPdu::Unmarshal(DataStream& data_stream) {
  DistributedEmissionsFamilyPdu::Unmarshal(data_stream);
  designating_entity_id_.Unmarshal(data_stream);
  data_stream >> code_name_;
  designated_entity_id_.Unmarshal(data_stream);
  data_stream >> designator_code_;
  data_stream >> designator_power_;
  data_stream >> designator_wavelength_;
  designator_spot_wrt_designated_.Unmarshal(data_stream);
  designator_spot_location_.Unmarshal(data_stream);
  data_stream >> dead_reckoning_algorithm_;
  data_stream >> padding1_;
  data_stream >> padding2_;
  entity_linear_acceleration_.Unmarshal(data_stream);
}

bool DesignatorPdu::operator==(const DesignatorPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = DistributedEmissionsFamilyPdu::operator==(rhs);

  if (!(designating_entity_id_ == rhs.designating_entity_id_)) {
    ivars_equal = false;
  }
  if (!(code_name_ == rhs.code_name_)) {
    ivars_equal = false;
  }
  if (!(designated_entity_id_ == rhs.designated_entity_id_)) {
    ivars_equal = false;
  }
  if (!(designator_code_ == rhs.designator_code_)) {
    ivars_equal = false;
  }
  if (!(designator_power_ == rhs.designator_power_)) {
    ivars_equal = false;
  }
  if (!(designator_wavelength_ == rhs.designator_wavelength_)) {
    ivars_equal = false;
  }
  if (!(designator_spot_wrt_designated_ ==
        rhs.designator_spot_wrt_designated_)) {
    ivars_equal = false;
  }
  if (!(designator_spot_location_ == rhs.designator_spot_location_)) {
    ivars_equal = false;
  }
  if (!(dead_reckoning_algorithm_ == rhs.dead_reckoning_algorithm_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(padding2_ == rhs.padding2_)) {
    ivars_equal = false;
  }
  if (!(entity_linear_acceleration_ == rhs.entity_linear_acceleration_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t DesignatorPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      DistributedEmissionsFamilyPdu::GetMarshalledSize() +
      designating_entity_id_.GetMarshalledSize() + sizeof(code_name_) +
      designated_entity_id_.GetMarshalledSize() + sizeof(designator_code_) +
      sizeof(designator_power_) + sizeof(designator_wavelength_) +
      designator_spot_wrt_designated_.GetMarshalledSize() +
      designator_spot_location_.GetMarshalledSize() +
      sizeof(dead_reckoning_algorithm_) + sizeof(padding1_) +
      sizeof(padding2_) + entity_linear_acceleration_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
