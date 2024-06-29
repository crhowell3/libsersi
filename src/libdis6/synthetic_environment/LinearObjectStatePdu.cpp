#include "dis6/synthetic_environment/LinearObjectStatePdu.h"

namespace dis {
LinearObjectStatePdu::LinearObjectStatePdu()
    : update_number_(0), force_id_(0), number_of_segments_(0) {
  SetPduType(44);
}

LinearObjectStatePdu::~LinearObjectStatePdu() {
  linear_segment_parameters_.clear();
}

dis::EntityID& LinearObjectStatePdu::GetObjectId() { return object_id_; }

const dis::EntityID& LinearObjectStatePdu::GetObjectId() const {
  return object_id_;
}

void LinearObjectStatePdu::SetObjectId(const dis::EntityID& value) {
  object_id_ = value;
}

dis::EntityID& LinearObjectStatePdu::GetReferencedObjectId() {
  return referenced_object_id_;
}

const EntityID& LinearObjectStatePdu::GetReferencedObjectId() const {
  return referenced_object_id_;
}

void LinearObjectStatePdu::SetReferencedObjectId(const EntityID& value) {
  referenced_object_id_ = value;
}

uint16_t LinearObjectStatePdu::GetUpdateNumber() const {
  return update_number_;
}

void LinearObjectStatePdu::SetUpdateNumber(uint16_t value) {
  update_number_ = value;
}

uint8_t LinearObjectStatePdu::GetForceId() const { return force_id_; }

void LinearObjectStatePdu::SetForceId(uint8_t value) { force_id_ = value; }

uint8_t LinearObjectStatePdu::GetNumberOfSegments() const {
  return linear_segment_parameters_.size();
}

SimulationAddress& LinearObjectStatePdu::GetRequesterId() {
  return requester_id_;
}

const SimulationAddress& LinearObjectStatePdu::GetRequesterId() const {
  return requester_id_;
}

void LinearObjectStatePdu::SetRequesterId(const SimulationAddress& value) {
  requester_id_ = value;
}

SimulationAddress& LinearObjectStatePdu::GetReceivingId() {
  return receiving_id_;
}

const SimulationAddress& LinearObjectStatePdu::GetReceivingId() const {
  return receiving_id_;
}

void LinearObjectStatePdu::SetReceivingId(const SimulationAddress& value) {
  receiving_id_ = value;
}

ObjectType& LinearObjectStatePdu::GetObjectType() { return object_type_; }

const ObjectType& LinearObjectStatePdu::GetObjectType() const {
  return object_type_;
}

void LinearObjectStatePdu::SetObjectType(const ObjectType& value) {
  object_type_ = value;
}

std::vector<LinearSegmentParameter>&
LinearObjectStatePdu::GetLinearSegmentParameters() {
  return linear_segment_parameters_;
}

const std::vector<LinearSegmentParameter>&
LinearObjectStatePdu::GetLinearSegmentParameters() const {
  return linear_segment_parameters_;
}

void LinearObjectStatePdu::SetLinearSegmentParameters(
    const std::vector<LinearSegmentParameter>& value) {
  linear_segment_parameters_ = value;
}

void LinearObjectStatePdu::Marshal(DataStream& data_stream) const {
  SyntheticEnvironmentFamilyPdu::Marshal(data_stream);
  object_id_.Marshal(data_stream);
  referenced_object_id_.Marshal(data_stream);
  data_stream << update_number_;
  data_stream << force_id_;
  data_stream << static_cast<uint8_t>(linear_segment_parameters_.size());
  requester_id_.Marshal(data_stream);
  receiving_id_.Marshal(data_stream);
  object_type_.Marshal(data_stream);

  for (auto x : linear_segment_parameters_) {
    x.Marshal(data_stream);
  }
}

void LinearObjectStatePdu::Unmarshal(DataStream& data_stream) {
  SyntheticEnvironmentFamilyPdu::Unmarshal(data_stream);
  object_id_.Unmarshal(data_stream);
  referenced_object_id_.Unmarshal(data_stream);
  data_stream >> update_number_;
  data_stream >> force_id_;
  data_stream >> number_of_segments_;
  requester_id_.Unmarshal(data_stream);
  receiving_id_.Unmarshal(data_stream);
  object_type_.Unmarshal(data_stream);

  linear_segment_parameters_.clear();
  for (std::size_t idx = 0; idx < number_of_segments_; idx++) {
    LinearSegmentParameter x;
    x.Unmarshal(data_stream);
    linear_segment_parameters_.push_back(x);
  }
}

bool LinearObjectStatePdu::operator==(const LinearObjectStatePdu& rhs) const {
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
  if (!(requester_id_ == rhs.requester_id_)) {
    ivars_equal = false;
  }
  if (!(receiving_id_ == rhs.receiving_id_)) {
    ivars_equal = false;
  }
  if (!(object_type_ == rhs.object_type_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < linear_segment_parameters_.size(); idx++) {
    if (!(linear_segment_parameters_[idx] ==
          rhs.linear_segment_parameters_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t LinearObjectStatePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      SyntheticEnvironmentFamilyPdu::GetMarshalledSize() +
      object_id_.GetMarshalledSize() +
      referenced_object_id_.GetMarshalledSize() + sizeof(update_number_) +
      sizeof(force_id_) + sizeof(number_of_segments_) +
      requester_id_.GetMarshalledSize() + receiving_id_.GetMarshalledSize() +
      object_type_.GetMarshalledSize();

  for (auto list_element : linear_segment_parameters_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
