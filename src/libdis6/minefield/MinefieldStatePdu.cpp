#include "libdis6/minefield/MinefieldStatePdu.h"

namespace dis {
MinefieldStatePdu::MinefieldStatePdu()
    : minefield_sequence_(0),
      force_id_(0),
      number_of_perimeter_points_(0),
      number_of_mine_types_(0),
      appearance_(0),
      protocol_mode_(0) {
  SetPduType(37);
}

MinefieldStatePdu::~MinefieldStatePdu() {
  perimeter_points_.clear();
  mine_type_.clear();
}

EntityID& MinefieldStatePdu::GetMinefieldId() { return minefield_id_; }

const EntityID& MinefieldStatePdu::GetMinefieldId() const {
  return minefield_id_;
}

void MinefieldStatePdu::SetMinefieldId(const EntityID& value) {
  minefield_id_ = value;
}

uint16_t MinefieldStatePdu::GetMinefieldSequence() const {
  return minefield_sequence_;
}

void MinefieldStatePdu::SetMinefieldSequence(uint16_t value) {
  minefield_sequence_ = value;
}

uint8_t MinefieldStatePdu::GetForceId() const { return force_id_; }

void MinefieldStatePdu::SetForceId(uint8_t value) { force_id_ = value; }

uint8_t MinefieldStatePdu::GetNumberOfPerimeterPoints() const {
  return perimeter_points_.size();
}

EntityType& MinefieldStatePdu::GetMinefieldType() { return minefield_type_; }

const EntityType& MinefieldStatePdu::GetMinefieldType() const {
  return minefield_type_;
}

void MinefieldStatePdu::SetMinefieldType(const EntityType& value) {
  minefield_type_ = value;
}

uint16_t MinefieldStatePdu::GetNumberOfMineTypes() const {
  return mine_type_.size();
}

Vector3Double& MinefieldStatePdu::GetMinefieldLocation() {
  return minefield_location_;
}

const Vector3Double& MinefieldStatePdu::GetMinefieldLocation() const {
  return minefield_location_;
}

void MinefieldStatePdu::SetMinefieldLocation(const Vector3Double& value) {
  minefield_location_ = value;
}

Orientation& MinefieldStatePdu::GetMinefieldOrientation() {
  return minefield_orientation_;
}

const Orientation& MinefieldStatePdu::GetMinefieldOrientation() const {
  return minefield_orientation_;
}

void MinefieldStatePdu::SetMinefieldOrientation(const Orientation& value) {
  minefield_orientation_ = value;
}

uint16_t MinefieldStatePdu::GetAppearance() const { return appearance_; }

void MinefieldStatePdu::SetAppearance(uint16_t value) { appearance_ = value; }

uint16_t MinefieldStatePdu::GetProtocolMode() const { return protocol_mode_; }

void MinefieldStatePdu::SetProtocolMode(uint16_t value) {
  protocol_mode_ = value;
}

std::vector<Point>& MinefieldStatePdu::GetPerimeterPoints() {
  return perimeter_points_;
}

const std::vector<Point>& MinefieldStatePdu::GetPerimeterPoints() const {
  return perimeter_points_;
}

void MinefieldStatePdu::SetPerimeterPoints(const std::vector<Point>& value) {
  perimeter_points_ = value;
}

std::vector<EntityType>& MinefieldStatePdu::GetMineType() { return mine_type_; }

const std::vector<EntityType>& MinefieldStatePdu::GetMineType() const {
  return mine_type_;
}

void MinefieldStatePdu::SetMineType(const std::vector<EntityType>& value) {
  mine_type_ = value;
}

void MinefieldStatePdu::Marshal(DataStream& data_stream) const {
  MinefieldFamilyPdu::Marshal(data_stream);
  minefield_id_.Marshal(data_stream);
  data_stream << minefield_sequence_;
  data_stream << force_id_;
  data_stream << static_cast<uint8_t>(perimeter_points_.size());
  minefield_type_.Marshal(data_stream);
  data_stream << static_cast<uint16_t>(mine_type_.size());
  minefield_location_.Marshal(data_stream);
  minefield_orientation_.Marshal(data_stream);
  data_stream << appearance_;
  data_stream << protocol_mode_;

  for (auto x : perimeter_points_) {
    x.Marshal(data_stream);
  }

  for (const auto& x : mine_type_) {
    x.Marshal(data_stream);
  }
}

void MinefieldStatePdu::Unmarshal(DataStream& data_stream) {
  MinefieldFamilyPdu::Unmarshal(data_stream);
  minefield_id_.Unmarshal(data_stream);
  data_stream >> minefield_sequence_;
  data_stream >> force_id_;
  data_stream >> number_of_perimeter_points_;
  minefield_type_.Unmarshal(data_stream);
  data_stream >> number_of_mine_types_;
  minefield_location_.Unmarshal(data_stream);
  minefield_orientation_.Unmarshal(data_stream);
  data_stream >> appearance_;
  data_stream >> protocol_mode_;

  perimeter_points_.clear();
  for (std::size_t idx = 0; idx < number_of_perimeter_points_; idx++) {
    Point x;
    x.Unmarshal(data_stream);
    perimeter_points_.push_back(x);
  }

  mine_type_.clear();
  for (std::size_t idx = 0; idx < number_of_mine_types_; idx++) {
    EntityType x;
    x.Unmarshal(data_stream);
    mine_type_.push_back(x);
  }
}

bool MinefieldStatePdu::operator==(const MinefieldStatePdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = MinefieldFamilyPdu::operator==(rhs);

  if (!(minefield_id_ == rhs.minefield_id_)) {
    ivars_equal = false;
  }
  if (!(minefield_sequence_ == rhs.minefield_sequence_)) {
    ivars_equal = false;
  }
  if (!(force_id_ == rhs.force_id_)) {
    ivars_equal = false;
  }
  if (!(minefield_type_ == rhs.minefield_type_)) {
    ivars_equal = false;
  }
  if (!(minefield_location_ == rhs.minefield_location_)) {
    ivars_equal = false;
  }
  if (!(minefield_orientation_ == rhs.minefield_orientation_)) {
    ivars_equal = false;
  }
  if (!(appearance_ == rhs.appearance_)) {
    ivars_equal = false;
  }
  if (!(protocol_mode_ == rhs.protocol_mode_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < perimeter_points_.size(); idx++) {
    if (!(perimeter_points_[idx] == rhs.perimeter_points_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < mine_type_.size(); idx++) {
    if (!(mine_type_[idx] == rhs.mine_type_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t MinefieldStatePdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      MinefieldFamilyPdu::GetMarshalledSize() +
      minefield_id_.GetMarshalledSize() + sizeof(minefield_sequence_) +
      sizeof(force_id_) + sizeof(number_of_perimeter_points_) +
      minefield_type_.GetMarshalledSize() + sizeof(number_of_mine_types_) +
      minefield_location_.GetMarshalledSize() +
      minefield_orientation_.GetMarshalledSize() + sizeof(appearance_) +
      sizeof(protocol_mode_);

  for (auto list_element : perimeter_points_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (const auto& list_element : mine_type_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
