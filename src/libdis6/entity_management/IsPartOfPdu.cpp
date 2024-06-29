#include "dis6/entity_management/IsPartOfPdu.h"

#include <cstddef>

namespace dis {

IsPartOfPdu::IsPartOfPdu() { SetPduType(36); }

EntityID& IsPartOfPdu::GetOriginatingEntityId() {
  return originating_entity_id_;
}

const EntityID& IsPartOfPdu::GetOriginatingEntityId() const {
  return originating_entity_id_;
}

void IsPartOfPdu::SetOriginatingEntityId(const EntityID& value) {
  originating_entity_id_ = value;
}

EntityID& IsPartOfPdu::GetReceivingEntityId() { return receiving_entity_id_; }

const EntityID& IsPartOfPdu::GetReceivingEntityId() const {
  return receiving_entity_id_;
}

void IsPartOfPdu::SetReceivingEntityId(const EntityID& value) {
  receiving_entity_id_ = value;
}

Relationship& IsPartOfPdu::GetRelationship() { return relationship_; }

const Relationship& IsPartOfPdu::GetRelationship() const {
  return relationship_;
}

void IsPartOfPdu::SetRelationship(const Relationship& value) {
  relationship_ = value;
}

Vector3Float& IsPartOfPdu::GetPartLocation() { return part_location_; }

const Vector3Float& IsPartOfPdu::GetPartLocation() const {
  return part_location_;
}

void IsPartOfPdu::SetPartLocation(const Vector3Float& value) {
  part_location_ = value;
}

NamedLocation& IsPartOfPdu::GetNamedLocationId() { return named_location_id_; }

const NamedLocation& IsPartOfPdu::GetNamedLocationId() const {
  return named_location_id_;
}

void IsPartOfPdu::SetNamedLocationId(const NamedLocation& value) {
  named_location_id_ = value;
}

EntityType& IsPartOfPdu::GetPartEntityType() { return part_entity_type_; }

const EntityType& IsPartOfPdu::GetPartEntityType() const {
  return part_entity_type_;
}

void IsPartOfPdu::SetPartEntityType(const EntityType& value) {
  part_entity_type_ = value;
}

void IsPartOfPdu::Marshal(DataStream& data_stream) const {
  EntityManagementFamilyPdu::Marshal(data_stream);
  originating_entity_id_.Marshal(data_stream);
  receiving_entity_id_.Marshal(data_stream);
  relationship_.Marshal(data_stream);
  part_location_.Marshal(data_stream);
  named_location_id_.Marshal(data_stream);
  part_entity_type_.Marshal(data_stream);
}

void IsPartOfPdu::Unmarshal(DataStream& data_stream) {
  EntityManagementFamilyPdu::Unmarshal(data_stream);
  originating_entity_id_.Unmarshal(data_stream);
  receiving_entity_id_.Unmarshal(data_stream);
  relationship_.Unmarshal(data_stream);
  part_location_.Unmarshal(data_stream);
  named_location_id_.Unmarshal(data_stream);
  part_entity_type_.Unmarshal(data_stream);
}

bool IsPartOfPdu::operator==(const IsPartOfPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityManagementFamilyPdu::operator==(rhs);

  if (!(originating_entity_id_ == rhs.originating_entity_id_)) {
    ivars_equal = false;
  }
  if (!(receiving_entity_id_ == rhs.receiving_entity_id_)) {
    ivars_equal = false;
  }
  if (!(relationship_ == rhs.relationship_)) {
    ivars_equal = false;
  }
  if (!(part_location_ == rhs.part_location_)) {
    ivars_equal = false;
  }
  if (!(named_location_id_ == rhs.named_location_id_)) {
    ivars_equal = false;
  }
  if (!(part_entity_type_ == rhs.part_entity_type_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t IsPartOfPdu::GetMarshalledSize() const {
  std::size_t marshal_size = EntityManagementFamilyPdu::GetMarshalledSize() +
                             originating_entity_id_.GetMarshalledSize() +
                             receiving_entity_id_.GetMarshalledSize() +
                             relationship_.GetMarshalledSize() +
                             part_location_.GetMarshalledSize() +
                             named_location_id_.GetMarshalledSize() +
                             part_entity_type_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
