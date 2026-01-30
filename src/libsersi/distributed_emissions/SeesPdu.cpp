#include distributed_emissions/SeesPdu.h"

namespace dis {
SeesPdu::SeesPdu()
    : infrared_signature_representation_index_(0),
      acoustic_signature_representation_index_(0),
      radar_cross_section_signature_representation_index_(0),
      number_of_propulsion_systems_(0),
      number_of_vectoring_nozzle_systems_(0) {
  SetPduType(30);
}

SeesPdu::~SeesPdu() {
  propulsion_system_data_.clear();
  vectoring_system_data_.clear();
}

EntityID& SeesPdu::GetOriginatingEntityId() { return originating_entity_id_; }

const EntityID& SeesPdu::GetOriginatingEntityId() const {
  return originating_entity_id_;
}

void SeesPdu::SetOriginatingEntityId(const EntityID& value) {
  originating_entity_id_ = value;
}

uint16_t SeesPdu::GetInfraredSignatureRepresentationIndex() const {
  return infrared_signature_representation_index_;
}

void SeesPdu::SetInfraredSignatureRepresentationIndex(uint16_t value) {
  infrared_signature_representation_index_ = value;
}

uint16_t SeesPdu::GetAcousticSignatureRepresentationIndex() const {
  return acoustic_signature_representation_index_;
}

void SeesPdu::SetAcousticSignatureRepresentationIndex(uint16_t value) {
  acoustic_signature_representation_index_ = value;
}

uint16_t SeesPdu::GetRadarCrossSectionSignatureRepresentationIndex() const {
  return radar_cross_section_signature_representation_index_;
}

void SeesPdu::SetRadarCrossSectionSignatureRepresentationIndex(uint16_t value) {
  radar_cross_section_signature_representation_index_ = value;
}

uint16_t SeesPdu::GetNumberOfPropulsionSystems() const {
  return propulsion_system_data_.size();
}

uint16_t SeesPdu::GetNumberOfVectoringNozzleSystems() const {
  return vectoring_system_data_.size();
}

std::vector<PropulsionSystemData>& SeesPdu::GetPropulsionSystemData() {
  return propulsion_system_data_;
}

const std::vector<PropulsionSystemData>& SeesPdu::GetPropulsionSystemData()
    const {
  return propulsion_system_data_;
}

void SeesPdu::SetPropulsionSystemData(
    const std::vector<PropulsionSystemData>& value) {
  propulsion_system_data_ = value;
}

std::vector<VectoringNozzleSystemData>& SeesPdu::GetVectoringSystemData() {
  return vectoring_system_data_;
}

const std::vector<VectoringNozzleSystemData>& SeesPdu::GetVectoringSystemData()
    const {
  return vectoring_system_data_;
}

void SeesPdu::SetVectoringSystemData(
    const std::vector<VectoringNozzleSystemData>& value) {
  vectoring_system_data_ = value;
}

void SeesPdu::Marshal(ByteBuffer& byte_buffer) const {
  DistributedEmissionsFamilyPdu::Marshal(byte_buffer);
  originating_entity_id_.Marshal(byte_buffer);
  byte_buffer << infrared_signature_representation_index_;
  byte_buffer << acoustic_signature_representation_index_;
  byte_buffer << radar_cross_section_signature_representation_index_;
  byte_buffer << static_cast<uint16_t>(propulsion_system_data_.size());
  byte_buffer << static_cast<uint16_t>(vectoring_system_data_.size());

  for (const auto& x : propulsion_system_data_) {
    x.Marshal(byte_buffer);
  }

  for (const auto& x : vectoring_system_data_) {
    x.Marshal(byte_buffer);
  }
}

void SeesPdu::Unmarshal(ByteBuffer& byte_buffer) {
  DistributedEmissionsFamilyPdu::Unmarshal(byte_buffer);
  originating_entity_id_.Unmarshal(byte_buffer);
  byte_buffer >> infrared_signature_representation_index_;
  byte_buffer >> acoustic_signature_representation_index_;
  byte_buffer >> radar_cross_section_signature_representation_index_;
  byte_buffer >> number_of_propulsion_systems_;
  byte_buffer >> number_of_vectoring_nozzle_systems_;

  propulsion_system_data_.clear();
  for (std::size_t idx = 0; idx < number_of_propulsion_systems_; idx++) {
    PropulsionSystemData x;
    x.Unmarshal(byte_buffer);
    propulsion_system_data_.push_back(x);
  }

  vectoring_system_data_.clear();
  for (std::size_t idx = 0; idx < number_of_vectoring_nozzle_systems_; idx++) {
    VectoringNozzleSystemData x;
    x.Unmarshal(byte_buffer);
    vectoring_system_data_.push_back(x);
  }
}

bool SeesPdu::operator==(const SeesPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = DistributedEmissionsFamilyPdu::operator==(rhs);

  if (!(originating_entity_id_ == rhs.originating_entity_id_)) {
    ivars_equal = false;
  }
  if (!(infrared_signature_representation_index_ ==
        rhs.infrared_signature_representation_index_)) {
    ivars_equal = false;
  }
  if (!(acoustic_signature_representation_index_ ==
        rhs.acoustic_signature_representation_index_)) {
    ivars_equal = false;
  }
  if (!(radar_cross_section_signature_representation_index_ ==
        rhs.radar_cross_section_signature_representation_index_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < propulsion_system_data_.size(); idx++) {
    if (!(propulsion_system_data_[idx] == rhs.propulsion_system_data_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < vectoring_system_data_.size(); idx++) {
    if (!(vectoring_system_data_[idx] == rhs.vectoring_system_data_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t SeesPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      DistributedEmissionsFamilyPdu::GetMarshalledSize() +
      originating_entity_id_.GetMarshalledSize() +
      sizeof(infrared_signature_representation_index_) +
      sizeof(acoustic_signature_representation_index_) +
      sizeof(radar_cross_section_signature_representation_index_) +
      sizeof(number_of_propulsion_systems_) +
      sizeof(number_of_vectoring_nozzle_systems_);

  for (const auto& list_element : propulsion_system_data_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : vectoring_system_data_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
