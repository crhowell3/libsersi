#include "libdis6/entity_information/EntityStateUpdatePdu.h"

namespace dis {
EntityStateUpdatePdu::EntityStateUpdatePdu()
    : padding1_(0),
      number_of_articulation_parameters_(0),
      entity_appearance_(0) {
  SetPduType(67);
  SetProtocolFamily(1);
}

EntityStateUpdatePdu::~EntityStateUpdatePdu() {
  articulation_parameters_.clear();
}

EntityID& EntityStateUpdatePdu::GetEntityId() { return entity_id_; }

const EntityID& EntityStateUpdatePdu::GetEntityId() const { return entity_id_; }

void EntityStateUpdatePdu::SetEntityId(const EntityID& value) {
  entity_id_ = value;
}

char EntityStateUpdatePdu::GetPadding1() const { return padding1_; }

void EntityStateUpdatePdu::SetPadding1(char value) { padding1_ = value; }

uint8_t EntityStateUpdatePdu::GetNumberOfArticulationParameters() const {
  return articulation_parameters_.size();
}

Vector3Float& EntityStateUpdatePdu::GetEntityLinearVelocity() {
  return entity_linear_velocity_;
}

const Vector3Float& EntityStateUpdatePdu::GetEntityLinearVelocity() const {
  return entity_linear_velocity_;
}

void EntityStateUpdatePdu::SetEntityLinearVelocity(const Vector3Float& value) {
  entity_linear_velocity_ = value;
}

Vector3Double& EntityStateUpdatePdu::GetEntityLocation() {
  return entity_location_;
}

const Vector3Double& EntityStateUpdatePdu::GetEntityLocation() const {
  return entity_location_;
}

void EntityStateUpdatePdu::SetEntityLocation(const Vector3Double& value) {
  entity_location_ = value;
}

Orientation& EntityStateUpdatePdu::GetEntityOrientation() {
  return entity_orientation_;
}

const Orientation& EntityStateUpdatePdu::GetEntityOrientation() const {
  return entity_orientation_;
}

void EntityStateUpdatePdu::SetEntityOrientation(const Orientation& value) {
  entity_orientation_ = value;
}

int EntityStateUpdatePdu::GetEntityAppearance() const {
  return entity_appearance_;
}

void EntityStateUpdatePdu::SetEntityAppearance(int value) {
  entity_appearance_ = value;
}

std::vector<ArticulationParameter>&
EntityStateUpdatePdu::GetArticulationParameters() {
  return articulation_parameters_;
}

const std::vector<ArticulationParameter>&
EntityStateUpdatePdu::GetArticulationParameters() const {
  return articulation_parameters_;
}

void EntityStateUpdatePdu::SetArticulationParameters(
    const std::vector<ArticulationParameter>& value) {
  articulation_parameters_ = value;
}

void EntityStateUpdatePdu::Marshal(DataStream& data_stream) const {
  EntityInformationFamilyPdu::Marshal(data_stream);
  entity_id_.Marshal(data_stream);
  data_stream << padding1_;
  data_stream << static_cast<uint8_t>(articulation_parameters_.size());
  entity_linear_velocity_.Marshal(data_stream);
  entity_location_.Marshal(data_stream);
  entity_orientation_.Marshal(data_stream);
  data_stream << entity_appearance_;

  for (auto x : articulation_parameters_) {
    x.Marshal(data_stream);
  }
}

void EntityStateUpdatePdu::Unmarshal(DataStream& data_stream) {
  EntityInformationFamilyPdu::Unmarshal(data_stream);
  entity_id_.Unmarshal(data_stream);
  data_stream >> padding1_;
  data_stream >> number_of_articulation_parameters_;
  entity_linear_velocity_.Unmarshal(data_stream);
  entity_location_.Unmarshal(data_stream);
  entity_orientation_.Unmarshal(data_stream);
  data_stream >> entity_appearance_;

  articulation_parameters_.clear();
  for (std::size_t idx = 0; idx < number_of_articulation_parameters_; idx++) {
    ArticulationParameter x;
    x.Unmarshal(data_stream);
    articulation_parameters_.push_back(x);
  }
}

bool EntityStateUpdatePdu::operator==(const EntityStateUpdatePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityInformationFamilyPdu::operator==(rhs);

  if (!(entity_id_ == rhs.entity_id_)) {
    ivars_equal = false;
  }
  if (!(padding1_ == rhs.padding1_)) {
    ivars_equal = false;
  }
  if (!(entity_linear_velocity_ == rhs.entity_linear_velocity_)) {
    ivars_equal = false;
  }
  if (!(entity_location_ == rhs.entity_location_)) {
    ivars_equal = false;
  }
  if (!(entity_orientation_ == rhs.entity_orientation_)) {
    ivars_equal = false;
  }
  if (!(entity_appearance_ == rhs.entity_appearance_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < articulation_parameters_.size(); idx++) {
    if (!(articulation_parameters_[idx] == rhs.articulation_parameters_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t EntityStateUpdatePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      EntityInformationFamilyPdu::GetMarshalledSize() +
      entity_id_.GetMarshalledSize() + sizeof(padding1_) +
      sizeof(number_of_articulation_parameters_) +
      entity_linear_velocity_.GetMarshalledSize() +
      entity_location_.GetMarshalledSize() +
      entity_orientation_.GetMarshalledSize() + sizeof(entity_appearance_);

  for (auto list_element : articulation_parameters_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}
}  // namespace dis
