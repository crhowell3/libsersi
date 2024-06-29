#include "dis6/entity_information/EntityStatePdu.h"

namespace dis {
EntityStatePdu::EntityStatePdu()
    : force_id_(0),
      number_of_articulation_parameters_(0),
      entity_appearance_(0),
      capabilities_(0) {
  SetPduType(1);
}

EntityStatePdu::~EntityStatePdu() { articulation_parameters_.clear(); }

EntityID& EntityStatePdu::GetEntityId() { return entity_id_; }

const EntityID& EntityStatePdu::GetEntityId() const { return entity_id_; }

void EntityStatePdu::SetEntityId(const EntityID& value) { entity_id_ = value; }

uint8_t EntityStatePdu::GetForceId() const { return force_id_; }

void EntityStatePdu::SetForceId(uint8_t value) { force_id_ = value; }

char EntityStatePdu::GetNumberOfArticulationParameters() const {
  return static_cast<char>(articulation_parameters_.size());
}

EntityType& EntityStatePdu::GetEntityType() { return entity_type_; }

const EntityType& EntityStatePdu::GetEntityType() const { return entity_type_; }

void EntityStatePdu::SetEntityType(const EntityType& value) {
  entity_type_ = value;
}

EntityType& EntityStatePdu::GetAlternativeEntityType() {
  return alternative_entity_type_;
}

const EntityType& EntityStatePdu::GetAlternativeEntityType() const {
  return alternative_entity_type_;
}

void EntityStatePdu::SetAlternativeEntityType(const EntityType& value) {
  alternative_entity_type_ = value;
}

Vector3Float& EntityStatePdu::GetEntityLinearVelocity() {
  return entity_linear_velocity_;
}

const Vector3Float& EntityStatePdu::GetEntityLinearVelocity() const {
  return entity_linear_velocity_;
}

void EntityStatePdu::SetEntityLinearVelocity(const Vector3Float& value) {
  entity_linear_velocity_ = value;
}

Vector3Double& EntityStatePdu::GetEntityLocation() { return entity_location_; }

const Vector3Double& EntityStatePdu::GetEntityLocation() const {
  return entity_location_;
}

void EntityStatePdu::SetEntityLocation(const Vector3Double& value) {
  entity_location_ = value;
}

Orientation& EntityStatePdu::GetEntityOrientation() {
  return entity_orientation_;
}

const Orientation& EntityStatePdu::GetEntityOrientation() const {
  return entity_orientation_;
}

void EntityStatePdu::SetEntityOrientation(const Orientation& value) {
  entity_orientation_ = value;
}

int EntityStatePdu::GetEntityAppearance() const { return entity_appearance_; }

void EntityStatePdu::SetEntityAppearance(int value) {
  entity_appearance_ = value;
}

DeadReckoningParameter& EntityStatePdu::GetDeadReckoningParameters() {
  return dead_reckoning_parameters_;
}

const DeadReckoningParameter& EntityStatePdu::GetDeadReckoningParameters()
    const {
  return dead_reckoning_parameters_;
}

void EntityStatePdu::SetDeadReckoningParameters(
    const DeadReckoningParameter& value) {
  dead_reckoning_parameters_ = value;
}

Marking& EntityStatePdu::GetMarking() { return marking_; }

const Marking& EntityStatePdu::GetMarking() const { return marking_; }

void EntityStatePdu::SetMarking(const Marking& value) { marking_ = value; }

int EntityStatePdu::GetCapabilities() const { return capabilities_; }

void EntityStatePdu::SetCapabilities(int value) { capabilities_ = value; }

std::vector<ArticulationParameter>&
EntityStatePdu::GetArticulationParameters() {
  return articulation_parameters_;
}

const std::vector<ArticulationParameter>&
EntityStatePdu::GetArticulationParameters() const {
  return articulation_parameters_;
}

void EntityStatePdu::SetArticulationParameters(
    const std::vector<ArticulationParameter>& value) {
  articulation_parameters_ = value;
}

void EntityStatePdu::Marshal(DataStream& data_stream) const {
  EntityInformationFamilyPdu::Marshal(
      data_stream);  // Marshal information in superclass first
  entity_id_.Marshal(data_stream);
  data_stream << force_id_;
  data_stream << static_cast<uint8_t>(articulation_parameters_.size());
  entity_type_.Marshal(data_stream);
  alternative_entity_type_.Marshal(data_stream);
  entity_linear_velocity_.Marshal(data_stream);
  entity_location_.Marshal(data_stream);
  entity_orientation_.Marshal(data_stream);
  data_stream << entity_appearance_;
  dead_reckoning_parameters_.Marshal(data_stream);
  marking_.Marshal(data_stream);
  data_stream << capabilities_;

  for (auto x : articulation_parameters_) {
    x.Marshal(data_stream);
  }
}

void EntityStatePdu::Unmarshal(DataStream& data_stream) {
  EntityInformationFamilyPdu::Unmarshal(
      data_stream);  // Unmarshal information in superclass first
  entity_id_.Unmarshal(data_stream);
  data_stream >> force_id_;
  data_stream >> number_of_articulation_parameters_;
  entity_type_.Unmarshal(data_stream);
  alternative_entity_type_.Unmarshal(data_stream);
  entity_linear_velocity_.Unmarshal(data_stream);
  entity_location_.Unmarshal(data_stream);
  entity_orientation_.Unmarshal(data_stream);
  data_stream >> entity_appearance_;
  dead_reckoning_parameters_.Unmarshal(data_stream);
  marking_.Unmarshal(data_stream);
  data_stream >> capabilities_;

  articulation_parameters_.clear();
  for (char idx = 0; idx < number_of_articulation_parameters_; idx++) {
    ArticulationParameter x;
    x.Unmarshal(data_stream);
    articulation_parameters_.push_back(x);
  }
}

bool EntityStatePdu::operator==(const EntityStatePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityInformationFamilyPdu::operator==(rhs);

  if (!(entity_id_ == rhs.entity_id_)) {
    ivars_equal = false;
  }
  if (!(force_id_ == rhs.force_id_)) {
    ivars_equal = false;
  }
  if (!(entity_type_ == rhs.entity_type_)) {
    ivars_equal = false;
  }
  if (!(alternative_entity_type_ == rhs.alternative_entity_type_)) {
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
  if (!(dead_reckoning_parameters_ == rhs.dead_reckoning_parameters_)) {
    ivars_equal = false;
  }
  if (!(marking_ == rhs.marking_)) {
    ivars_equal = false;
  }
  if (!(capabilities_ == rhs.capabilities_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < articulation_parameters_.size(); idx++) {
    if (!(articulation_parameters_[idx] == rhs.articulation_parameters_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t EntityStatePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      EntityInformationFamilyPdu::GetMarshalledSize() +
      entity_id_.GetMarshalledSize() + sizeof(force_id_) +
      sizeof(number_of_articulation_parameters_) +
      entity_type_.GetMarshalledSize() +
      alternative_entity_type_.GetMarshalledSize() +
      entity_linear_velocity_.GetMarshalledSize() +
      entity_location_.GetMarshalledSize() +
      entity_orientation_.GetMarshalledSize() + sizeof(entity_appearance_) +
      dead_reckoning_parameters_.GetMarshalledSize() +
      marking_.GetMarshalledSize() + sizeof(capabilities_);

  for (auto list_element : articulation_parameters_) {
    marshal_size = marshal_size + list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
