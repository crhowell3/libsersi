#include "dis6/entity_management/AggregateStatePdu.h"

namespace dis {
AggregateStatePdu::AggregateStatePdu()
    : force_id_(0),
      aggregate_state_(0),
      formation_(0),
      number_of_dis_aggregates_(0),
      number_of_dis_entities_(0),
      number_of_silent_aggregate_types_(0),
      number_of_silent_entity_types_(0),
      pad2_(0),
      number_of_variable_datum_records_(0) {
  SetPduType(33);
}

AggregateStatePdu::~AggregateStatePdu() {
  aggregate_id_list_.clear();
  entity_id_list_.clear();
  silent_aggregate_system_list_.clear();
  silent_entity_system_list_.clear();
  variable_datum_list_.clear();
}

EntityID& AggregateStatePdu::GetAggregateId() { return aggregate_id_; }

const EntityID& AggregateStatePdu::GetAggregateId() const {
  return aggregate_id_;
}

void AggregateStatePdu::SetAggregateId(const EntityID& value) {
  aggregate_id_ = value;
}

uint8_t AggregateStatePdu::GetForceId() const { return force_id_; }

void AggregateStatePdu::SetForceId(uint8_t value) { force_id_ = value; }

uint8_t AggregateStatePdu::GetAggregateState() const {
  return aggregate_state_;
}

void AggregateStatePdu::SetAggregateState(uint8_t value) {
  aggregate_state_ = value;
}

EntityType& AggregateStatePdu::GetAggregateType() { return aggregate_type_; }

const EntityType& AggregateStatePdu::GetAggregateType() const {
  return aggregate_type_;
}

void AggregateStatePdu::SetAggregateType(const EntityType& value) {
  aggregate_type_ = value;
}

uint32_t AggregateStatePdu::GetFormation() const { return formation_; }

void AggregateStatePdu::SetFormation(uint32_t value) { formation_ = value; }

AggregateMarking& AggregateStatePdu::GetAggregateMarking() {
  return aggregate_marking_;
}

const AggregateMarking& AggregateStatePdu::GetAggregateMarking() const {
  return aggregate_marking_;
}

void AggregateStatePdu::SetAggregateMarking(const AggregateMarking& value) {
  aggregate_marking_ = value;
}

Vector3Float& AggregateStatePdu::GetDimensions() { return dimensions_; }

const Vector3Float& AggregateStatePdu::GetDimensions() const {
  return dimensions_;
}

void AggregateStatePdu::SetDimensions(const Vector3Float& value) {
  dimensions_ = value;
}

Orientation& AggregateStatePdu::GetOrientation() { return orientation_; }

const Orientation& AggregateStatePdu::GetOrientation() const {
  return orientation_;
}

void AggregateStatePdu::SetOrientation(const Orientation& value) {
  orientation_ = value;
}

Vector3Double& AggregateStatePdu::GetCenterOfMass() { return center_of_mass_; }

const Vector3Double& AggregateStatePdu::GetCenterOfMass() const {
  return center_of_mass_;
}

void AggregateStatePdu::SetCenterOfMass(const Vector3Double& value) {
  center_of_mass_ = value;
}

Vector3Float& AggregateStatePdu::GetVelocity() { return velocity_; }

const Vector3Float& AggregateStatePdu::GetVelocity() const { return velocity_; }

void AggregateStatePdu::SetVelocity(const Vector3Float& value) {
  velocity_ = value;
}

uint16_t AggregateStatePdu::GetNumberOfDisAggregates() const {
  return aggregate_id_list_.size();
}

uint16_t AggregateStatePdu::GetNumberOfDisEntities() const {
  return entity_id_list_.size();
}

uint16_t AggregateStatePdu::GetNumberOfSilentAggregateTypes() const {
  return silent_aggregate_system_list_.size();
}

uint16_t AggregateStatePdu::GetNumberOfSilentEntityTypes() const {
  return silent_entity_system_list_.size();
}

std::vector<AggregateID>& AggregateStatePdu::GetAggregateIdList() {
  return aggregate_id_list_;
}

const std::vector<AggregateID>& AggregateStatePdu::GetAggregateIdList() const {
  return aggregate_id_list_;
}

void AggregateStatePdu::SetAggregateIdList(
    const std::vector<AggregateID>& value) {
  aggregate_id_list_ = value;
}

std::vector<EntityID>& AggregateStatePdu::GetEntityIdList() {
  return entity_id_list_;
}

const std::vector<EntityID>& AggregateStatePdu::GetEntityIdList() const {
  return entity_id_list_;
}

void AggregateStatePdu::SetEntityIdList(const std::vector<EntityID>& value) {
  entity_id_list_ = value;
}

uint8_t AggregateStatePdu::GetPad2() const { return pad2_; }

void AggregateStatePdu::SetPad2(uint8_t value) { pad2_ = value; }

std::vector<EntityType>& AggregateStatePdu::GetSilentAggregateSystemList() {
  return silent_aggregate_system_list_;
}

const std::vector<EntityType>& AggregateStatePdu::GetSilentAggregateSystemList()
    const {
  return silent_aggregate_system_list_;
}

void AggregateStatePdu::SetSilentAggregateSystemList(
    const std::vector<EntityType>& value) {
  silent_aggregate_system_list_ = value;
}

std::vector<EntityType>& AggregateStatePdu::GetSilentEntitySystemList() {
  return silent_entity_system_list_;
}

const std::vector<EntityType>& AggregateStatePdu::GetSilentEntitySystemList()
    const {
  return silent_entity_system_list_;
}

void AggregateStatePdu::SetSilentEntitySystemList(
    const std::vector<EntityType>& value) {
  silent_entity_system_list_ = value;
}

uint32_t AggregateStatePdu::GetNumberOfVariableDatumRecords() const {
  return variable_datum_list_.size();
}

std::vector<VariableDatum>& AggregateStatePdu::GetVariableDatumList() {
  return variable_datum_list_;
}

const std::vector<VariableDatum>& AggregateStatePdu::GetVariableDatumList()
    const {
  return variable_datum_list_;
}

void AggregateStatePdu::SetVariableDatumList(
    const std::vector<VariableDatum>& value) {
  variable_datum_list_ = value;
}

void AggregateStatePdu::Marshal(DataStream& data_stream) const {
  EntityManagementFamilyPdu::Marshal(data_stream);
  aggregate_id_.Marshal(data_stream);
  data_stream << force_id_;
  data_stream << aggregate_state_;
  aggregate_type_.Marshal(data_stream);
  data_stream << formation_;
  aggregate_marking_.Marshal(data_stream);
  dimensions_.Marshal(data_stream);
  orientation_.Marshal(data_stream);
  center_of_mass_.Marshal(data_stream);
  velocity_.Marshal(data_stream);
  data_stream << static_cast<uint16_t>(aggregate_id_list_.size());
  data_stream << static_cast<uint16_t>(entity_id_list_.size());
  data_stream << static_cast<uint16_t>(silent_aggregate_system_list_.size());
  data_stream << static_cast<uint16_t>(silent_entity_system_list_.size());

  for (auto x : aggregate_id_list_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : entity_id_list_) {
    x.Marshal(data_stream);
  }

  data_stream << pad2_;

  for (const auto& x : silent_aggregate_system_list_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : silent_entity_system_list_) {
    x.Marshal(data_stream);
  }

  data_stream << static_cast<uint32_t>(variable_datum_list_.size());

  for (const auto& x : variable_datum_list_) {
    x.Marshal(data_stream);
  }
}

void AggregateStatePdu::Unmarshal(DataStream& data_stream) {
  EntityManagementFamilyPdu::Unmarshal(data_stream);
  aggregate_id_.Unmarshal(data_stream);
  data_stream >> force_id_;
  data_stream >> aggregate_state_;
  aggregate_type_.Unmarshal(data_stream);
  data_stream >> formation_;
  aggregate_marking_.Unmarshal(data_stream);
  dimensions_.Unmarshal(data_stream);
  orientation_.Unmarshal(data_stream);
  center_of_mass_.Unmarshal(data_stream);
  velocity_.Unmarshal(data_stream);
  data_stream >> number_of_dis_aggregates_;
  data_stream >> number_of_dis_entities_;
  data_stream >> number_of_silent_aggregate_types_;
  data_stream >> number_of_silent_entity_types_;

  aggregate_id_list_.clear();
  for (std::size_t idx = 0; idx < number_of_dis_aggregates_; idx++) {
    AggregateID x;
    x.Unmarshal(data_stream);
    aggregate_id_list_.push_back(x);
  }

  entity_id_list_.clear();
  for (std::size_t idx = 0; idx < number_of_dis_entities_; idx++) {
    EntityID x;
    x.Unmarshal(data_stream);
    entity_id_list_.push_back(x);
  }
  data_stream >> pad2_;

  silent_aggregate_system_list_.clear();
  for (std::size_t idx = 0; idx < number_of_silent_aggregate_types_; idx++) {
    EntityType x;
    x.Unmarshal(data_stream);
    silent_aggregate_system_list_.push_back(x);
  }

  silent_entity_system_list_.clear();
  for (std::size_t idx = 0; idx < number_of_silent_entity_types_; idx++) {
    EntityType x;
    x.Unmarshal(data_stream);
    silent_entity_system_list_.push_back(x);
  }
  data_stream >> number_of_variable_datum_records_;

  variable_datum_list_.clear();
  for (std::size_t idx = 0; idx < number_of_variable_datum_records_; idx++) {
    VariableDatum x;
    x.Unmarshal(data_stream);
    variable_datum_list_.push_back(x);
  }
}

bool AggregateStatePdu::operator==(const AggregateStatePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityManagementFamilyPdu::operator==(rhs);

  if (!(aggregate_id_ == rhs.aggregate_id_)) {
    ivars_equal = false;
  }
  if (!(force_id_ == rhs.force_id_)) {
    ivars_equal = false;
  }
  if (!(aggregate_state_ == rhs.aggregate_state_)) {
    ivars_equal = false;
  }
  if (!(aggregate_type_ == rhs.aggregate_type_)) {
    ivars_equal = false;
  }
  if (!(formation_ == rhs.formation_)) {
    ivars_equal = false;
  }
  if (!(aggregate_marking_ == rhs.aggregate_marking_)) {
    ivars_equal = false;
  }
  if (!(dimensions_ == rhs.dimensions_)) {
    ivars_equal = false;
  }
  if (!(orientation_ == rhs.orientation_)) {
    ivars_equal = false;
  }
  if (!(center_of_mass_ == rhs.center_of_mass_)) {
    ivars_equal = false;
  }
  if (!(velocity_ == rhs.velocity_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < aggregate_id_list_.size(); idx++) {
    if (!(aggregate_id_list_[idx] == rhs.aggregate_id_list_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < entity_id_list_.size(); idx++) {
    if (!(entity_id_list_[idx] == rhs.entity_id_list_[idx])) {
      ivars_equal = false;
    }
  }

  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < silent_aggregate_system_list_.size(); idx++) {
    if (!(silent_aggregate_system_list_[idx] ==
          rhs.silent_aggregate_system_list_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < silent_entity_system_list_.size(); idx++) {
    if (!(silent_entity_system_list_[idx] ==
          rhs.silent_entity_system_list_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < variable_datum_list_.size(); idx++) {
    if (!(variable_datum_list_[idx] == rhs.variable_datum_list_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t AggregateStatePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      EntityManagementFamilyPdu::GetMarshalledSize() +
      aggregate_id_.GetMarshalledSize() + sizeof(force_id_) +
      sizeof(aggregate_state_) + aggregate_type_.GetMarshalledSize() +
      sizeof(formation_) + aggregate_marking_.GetMarshalledSize() +
      dimensions_.GetMarshalledSize() + orientation_.GetMarshalledSize() +
      center_of_mass_.GetMarshalledSize() + velocity_.GetMarshalledSize() +
      sizeof(number_of_dis_aggregates_) + sizeof(number_of_dis_entities_) +
      sizeof(number_of_silent_aggregate_types_) +
      sizeof(number_of_silent_entity_types_);

  for (auto list_element : aggregate_id_list_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : entity_id_list_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  marshal_size += sizeof(pad2_);

  for (const auto& list_element : silent_aggregate_system_list_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : silent_entity_system_list_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  marshal_size += sizeof(number_of_variable_datum_records_);

  for (const auto& list_element : variable_datum_list_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
