#include "dis6/synthetic_environment/ArealObjectStatePdu.h"

#include <cstdint>

namespace dis {
ArealObjectStatePdu::ArealObjectStatePdu()
    : update_number_(0), force_id_(0), modifications_(0), number_of_points_(0) {
  SetPduType(45);
}

ArealObjectStatePdu::~ArealObjectStatePdu() { object_location_.clear(); }

dis::EntityID& ArealObjectStatePdu::GetObjectId() { return object_id_; }

const dis::EntityID& ArealObjectStatePdu::GetObjectId() const {
  return object_id_;
}

void ArealObjectStatePdu::SetObjectId(const dis::EntityID& value) {
  object_id_ = value;
}

dis::EntityID& ArealObjectStatePdu::GetReferencedObjectId() {
  return referenced_object_id_;
}

const dis::EntityID& ArealObjectStatePdu::GetReferencedObjectId() const {
  return referenced_object_id_;
}

void ArealObjectStatePdu::SetReferencedObjectId(const dis::EntityID& value) {
  referenced_object_id_ = value;
}

uint16_t ArealObjectStatePdu::GetUpdateNumber() const { return update_number_; }

void ArealObjectStatePdu::SetUpdateNumber(uint16_t value) {
  update_number_ = value;
}

uint8_t ArealObjectStatePdu::GetForceId() const { return force_id_; }

void ArealObjectStatePdu::SetForceId(uint8_t value) { force_id_ = value; }

uint8_t ArealObjectStatePdu::GetModifications() const { return modifications_; }

void ArealObjectStatePdu::SetModifications(uint8_t value) {
  modifications_ = value;
}

dis::EntityType& ArealObjectStatePdu::GetObjectType() { return object_type_; }

const dis::EntityType& ArealObjectStatePdu::GetObjectType() const {
  return object_type_;
}

void ArealObjectStatePdu::SetObjectType(const dis::EntityType& value) {
  object_type_ = value;
}

uint32_t ArealObjectStatePdu::GetSpecificObjectAppearance() const {
  return specific_object_appearance_;
}

void ArealObjectStatePdu::SetSpecificObjectAppearance(uint32_t value) {
  specific_object_appearance_ = value;
}

uint16_t ArealObjectStatePdu::GetGeneralObjectAppearance() const {
  return general_object_appearance_;
}

void ArealObjectStatePdu::SetGeneralObjectAppearance(uint16_t value) {
  general_object_appearance_ = value;
}

uint16_t ArealObjectStatePdu::GetNumberOfPoints() const {
  return object_location_.size();
}

SimulationAddress& ArealObjectStatePdu::GetRequesterId() {
  return requester_id_;
}

const SimulationAddress& ArealObjectStatePdu::GetRequesterId() const {
  return requester_id_;
}

void ArealObjectStatePdu::SetRequesterId(const SimulationAddress& value) {
  requester_id_ = value;
}

SimulationAddress& ArealObjectStatePdu::GetReceivingId() {
  return receiving_id_;
}

const SimulationAddress& ArealObjectStatePdu::GetReceivingId() const {
  return receiving_id_;
}

void ArealObjectStatePdu::SetReceivingId(const SimulationAddress& value) {
  receiving_id_ = value;
}

std::vector<Vector3Double>& ArealObjectStatePdu::GetObjectLocation() {
  return object_location_;
}

const std::vector<Vector3Double>& ArealObjectStatePdu::GetObjectLocation()
    const {
  return object_location_;
}

void ArealObjectStatePdu::SetObjectLocation(
    const std::vector<Vector3Double>& value) {
  object_location_ = value;
}

void ArealObjectStatePdu::Marshal(DataStream& data_stream) const {
  SyntheticEnvironmentFamilyPdu::Marshal(data_stream);
  object_id_.Marshal(data_stream);
  referenced_object_id_.Marshal(data_stream);
  data_stream << update_number_;
  data_stream << force_id_;
  data_stream << modifications_;
  object_type_.Marshal(data_stream);
  data_stream << specific_object_appearance_;
  data_stream << general_object_appearance_;
  data_stream << static_cast<uint16_t>(object_location_.size());
  requester_id_.Marshal(data_stream);
  receiving_id_.Marshal(data_stream);

  for (auto x : object_location_) {
    x.Marshal(data_stream);
  }
}

void ArealObjectStatePdu::Unmarshal(DataStream& data_stream) {
  SyntheticEnvironmentFamilyPdu::Unmarshal(data_stream);
  object_id_.Unmarshal(data_stream);
  referenced_object_id_.Unmarshal(data_stream);
  data_stream >> update_number_;
  data_stream >> force_id_;
  data_stream >> modifications_;
  object_type_.Unmarshal(data_stream);
  data_stream >> specific_object_appearance_;
  data_stream >> general_object_appearance_;
  data_stream >> number_of_points_;
  requester_id_.Unmarshal(data_stream);
  receiving_id_.Unmarshal(data_stream);

  object_location_.clear();
  for (std::size_t idx = 0; idx < number_of_points_; idx++) {
    Vector3Double x;
    x.Unmarshal(data_stream);
    object_location_.push_back(x);
  }
}

bool ArealObjectStatePdu::operator==(const ArealObjectStatePdu& rhs) const {
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
  if (!(specific_object_appearance_ == rhs.specific_object_appearance_)) {
    ivars_equal = false;
  }
  if (!(general_object_appearance_ == rhs.general_object_appearance_)) {
    ivars_equal = false;
  }
  if (!(requester_id_ == rhs.requester_id_)) {
    ivars_equal = false;
  }
  if (!(receiving_id_ == rhs.receiving_id_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < object_location_.size(); idx++) {
    if (!(object_location_[idx] == rhs.object_location_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t ArealObjectStatePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SyntheticEnvironmentFamilyPdu::GetMarshalledSize() +
      object_id_.GetMarshalledSize() +
      referenced_object_id_.GetMarshalledSize() + sizeof(update_number_) +
      sizeof(force_id_) + sizeof(modifications_) +
      object_type_.GetMarshalledSize() + sizeof(specific_object_appearance_) +
      sizeof(general_object_appearance_) + sizeof(number_of_points_) +
      requester_id_.GetMarshalledSize() + receiving_id_.GetMarshalledSize();

  for (auto list_element : object_location_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
