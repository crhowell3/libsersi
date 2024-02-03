#include "dis6/synthetic_environment/PointObjectStatePdu.h"

namespace dis {
PointObjectStatePdu::PointObjectStatePdu()
    : update_number_(0),
      force_id_(0),
      modifications_(0),
      object_appearance_(0.0),
      pad2_(0) {
  SetPduType(43);
}

PointObjectStatePdu::~PointObjectStatePdu() = default;

dis::EntityID& PointObjectStatePdu::GetObjectId() { return object_id_; }

const dis::EntityID& PointObjectStatePdu::GetObjectId() const {
  return object_id_;
}

void PointObjectStatePdu::SetObjectId(const dis::EntityID& value) {
  object_id_ = value;
}

dis::EntityID& PointObjectStatePdu::GetReferencedObjectId() {
  return referenced_object_id_;
}

const dis::EntityID& PointObjectStatePdu::GetReferencedObjectId() const {
  return referenced_object_id_;
}

void PointObjectStatePdu::SetReferencedObjectId(const dis::EntityID& value) {
  referenced_object_id_ = value;
}

uint16_t PointObjectStatePdu::GetUpdateNumber() const { return update_number_; }

void PointObjectStatePdu::SetUpdateNumber(uint16_t value) {
  update_number_ = value;
}

uint8_t PointObjectStatePdu::GetForceId() const { return force_id_; }

void PointObjectStatePdu::SetForceId(uint8_t value) { force_id_ = value; }

uint8_t PointObjectStatePdu::GetModifications() const { return modifications_; }

void PointObjectStatePdu::SetModifications(uint8_t value) {
  modifications_ = value;
}

ObjectType& PointObjectStatePdu::GetObjectType() { return object_type_; }

const ObjectType& PointObjectStatePdu::GetObjectType() const {
  return object_type_;
}

void PointObjectStatePdu::SetObjectType(const ObjectType& value) {
  object_type_ = value;
}

Vector3Double& PointObjectStatePdu::GetObjectLocation() {
  return object_location_;
}

const Vector3Double& PointObjectStatePdu::GetObjectLocation() const {
  return object_location_;
}

void PointObjectStatePdu::SetObjectLocation(const Vector3Double& value) {
  object_location_ = value;
}

Orientation& PointObjectStatePdu::GetObjectOrientation() {
  return object_orientation_;
}

const Orientation& PointObjectStatePdu::GetObjectOrientation() const {
  return object_orientation_;
}

void PointObjectStatePdu::SetObjectOrientation(const Orientation& value) {
  object_orientation_ = value;
}

double PointObjectStatePdu::GetObjectAppearance() const {
  return object_appearance_;
}

void PointObjectStatePdu::SetObjectAppearance(double value) {
  object_appearance_ = value;
}

SimulationAddress& PointObjectStatePdu::GetRequesterId() {
  return requester_id_;
}

const SimulationAddress& PointObjectStatePdu::GetRequesterId() const {
  return requester_id_;
}

void PointObjectStatePdu::SetRequesterId(const SimulationAddress& value) {
  requester_id_ = value;
}

SimulationAddress& PointObjectStatePdu::GetReceivingId() {
  return receiving_id_;
}

const SimulationAddress& PointObjectStatePdu::GetReceivingId() const {
  return receiving_id_;
}

void PointObjectStatePdu::SetReceivingId(const SimulationAddress& value) {
  receiving_id_ = value;
}

uint32_t PointObjectStatePdu::GetPad2() const { return pad2_; }

void PointObjectStatePdu::SetPad2(uint32_t value) { pad2_ = value; }

void PointObjectStatePdu::Marshal(DataStream& data_stream) const {
  SyntheticEnvironmentFamilyPdu::Marshal(data_stream);
  object_id_.Marshal(data_stream);
  referenced_object_id_.Marshal(data_stream);
  data_stream << update_number_;
  data_stream << force_id_;
  data_stream << modifications_;
  object_type_.Marshal(data_stream);
  object_location_.Marshal(data_stream);
  object_orientation_.Marshal(data_stream);
  data_stream << object_appearance_;
  requester_id_.Marshal(data_stream);
  receiving_id_.Marshal(data_stream);
  data_stream << pad2_;
}

void PointObjectStatePdu::Unmarshal(DataStream& data_stream) {
  SyntheticEnvironmentFamilyPdu::Unmarshal(data_stream);
  object_id_.Unmarshal(data_stream);
  referenced_object_id_.Unmarshal(data_stream);
  data_stream >> update_number_;
  data_stream >> force_id_;
  data_stream >> modifications_;
  object_type_.Unmarshal(data_stream);
  object_location_.Unmarshal(data_stream);
  object_orientation_.Unmarshal(data_stream);
  data_stream >> object_appearance_;
  requester_id_.Unmarshal(data_stream);
  receiving_id_.Unmarshal(data_stream);
  data_stream >> pad2_;
}

bool PointObjectStatePdu::operator==(const PointObjectStatePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = SyntheticEnvironmentFamilyPdu::operator==(rhs);

  if (!(object_id_ == rhs.object_id_)) {
    ivars_equal = false;
  }
  if (!(referenced_object_id_ == rhs.referenced_object_id_)) {
    ivars_equal = false;
  }
  if (!(update_number_ == rhs.update_number_)) {
    ivars_equal = false;
  }
  if (!(force_id_ == rhs.force_id_)) {
    ivars_equal = false;
  }
  if (!(modifications_ == rhs.modifications_)) {
    ivars_equal = false;
  }
  if (!(object_type_ == rhs.object_type_)) {
    ivars_equal = false;
  }
  if (!(object_location_ == rhs.object_location_)) {
    ivars_equal = false;
  }
  if (!(object_orientation_ == rhs.object_orientation_)) {
    ivars_equal = false;
  }
  if (!(object_appearance_ == rhs.object_appearance_)) {
    ivars_equal = false;
  }
  if (!(requester_id_ == rhs.requester_id_)) {
    ivars_equal = false;
  }
  if (!(receiving_id_ == rhs.receiving_id_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t PointObjectStatePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SyntheticEnvironmentFamilyPdu::GetMarshalledSize() +
      object_id_.GetMarshalledSize() +
      referenced_object_id_.GetMarshalledSize() + sizeof(update_number_) +
      sizeof(force_id_) + sizeof(modifications_) +
      object_type_.GetMarshalledSize() + object_location_.GetMarshalledSize() +
      object_orientation_.GetMarshalledSize() + sizeof(object_appearance_) +
      requester_id_.GetMarshalledSize() + receiving_id_.GetMarshalledSize() +
      sizeof(pad2_);
  return marshal_size;
}

}  // namespace dis
