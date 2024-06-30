#include "libdis6/minefield/MinefieldQueryPdu.h"

namespace dis {
MinefieldQueryPdu::MinefieldQueryPdu()
    : request_id_(0),
      number_of_perimeter_points_(0),
      pad2_(0),
      number_of_sensor_types_(0),
      data_filter_(0) {
  SetPduType(38);
}

MinefieldQueryPdu::~MinefieldQueryPdu() {
  requested_perimeter_points_.clear();
  sensor_types_.clear();
}

EntityID& MinefieldQueryPdu::GetMinefieldId() { return minefield_id_; }

const EntityID& MinefieldQueryPdu::GetMinefieldId() const {
  return minefield_id_;
}

void MinefieldQueryPdu::SetMinefieldId(const EntityID& value) {
  minefield_id_ = value;
}

EntityID& MinefieldQueryPdu::GetRequestingEntityId() {
  return requesting_entity_id_;
}

const EntityID& MinefieldQueryPdu::GetRequestingEntityId() const {
  return requesting_entity_id_;
}

void MinefieldQueryPdu::SetRequestingEntityId(const EntityID& value) {
  requesting_entity_id_ = value;
}

uint8_t MinefieldQueryPdu::GetRequestId() const { return request_id_; }

void MinefieldQueryPdu::SetRequestId(uint8_t value) { request_id_ = value; }

uint8_t MinefieldQueryPdu::GetNumberOfPerimeterPoints() const {
  return requested_perimeter_points_.size();
}

uint8_t MinefieldQueryPdu::GetPad2() const { return pad2_; }

void MinefieldQueryPdu::SetPad2(uint8_t value) { pad2_ = value; }

uint8_t MinefieldQueryPdu::GetNumberOfSensorTypes() const {
  return sensor_types_.size();
}

uint32_t MinefieldQueryPdu::GetDataFilter() const { return data_filter_; }

void MinefieldQueryPdu::SetDataFilter(uint32_t value) { data_filter_ = value; }

EntityType& MinefieldQueryPdu::GetRequestedMineType() {
  return requested_mine_type_;
}

const EntityType& MinefieldQueryPdu::GetRequestedMineType() const {
  return requested_mine_type_;
}

void MinefieldQueryPdu::SetRequestedMineType(const EntityType& value) {
  requested_mine_type_ = value;
}

std::vector<Point>& MinefieldQueryPdu::GetRequestedPerimeterPoints() {
  return requested_perimeter_points_;
}

const std::vector<Point>& MinefieldQueryPdu::GetRequestedPerimeterPoints()
    const {
  return requested_perimeter_points_;
}

void MinefieldQueryPdu::SetRequestedPerimeterPoints(
    const std::vector<Point>& value) {
  requested_perimeter_points_ = value;
}

std::vector<uint16_t>& MinefieldQueryPdu::GetSensorTypes() {
  return sensor_types_;
}

const std::vector<uint16_t>& MinefieldQueryPdu::GetSensorTypes() const {
  return sensor_types_;
}

void MinefieldQueryPdu::SetSensorTypes(const std::vector<uint16_t>& value) {
  sensor_types_ = value;
}

void MinefieldQueryPdu::Marshal(DataStream& data_stream) const {
  MinefieldFamilyPdu::Marshal(data_stream);
  minefield_id_.Marshal(data_stream);
  requesting_entity_id_.Marshal(data_stream);
  data_stream << request_id_;
  data_stream << static_cast<uint8_t>(requested_perimeter_points_.size());
  data_stream << pad2_;
  data_stream << static_cast<uint8_t>(sensor_types_.size());
  data_stream << data_filter_;
  requested_mine_type_.Marshal(data_stream);

  for (auto x : requested_perimeter_points_) {
    x.Marshal(data_stream);
  }

  for (uint16_t x : sensor_types_) {
    data_stream << x;
  }
}

void MinefieldQueryPdu::Unmarshal(DataStream& data_stream) {
  MinefieldFamilyPdu::Unmarshal(data_stream);
  minefield_id_.Unmarshal(data_stream);
  requesting_entity_id_.Unmarshal(data_stream);
  data_stream >> request_id_;
  data_stream >> number_of_perimeter_points_;
  data_stream >> pad2_;
  data_stream >> number_of_sensor_types_;
  data_stream >> data_filter_;
  requested_mine_type_.Unmarshal(data_stream);

  requested_perimeter_points_.clear();
  for (std::size_t idx = 0; idx < number_of_perimeter_points_; idx++) {
    Point x;
    x.Unmarshal(data_stream);
    requested_perimeter_points_.push_back(x);
  }

  sensor_types_.clear();
  for (std::size_t idx = 0; idx < number_of_sensor_types_; idx++) {
    uint16_t x;
    data_stream >> x;
    sensor_types_.push_back(x);
  }
}

bool MinefieldQueryPdu::operator==(const MinefieldQueryPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = MinefieldFamilyPdu::operator==(rhs);

  if (!(minefield_id_ == rhs.minefield_id_)) {
    ivars_equal = false;
  }
  if (!(requesting_entity_id_ == rhs.requesting_entity_id_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(data_filter_ == rhs.data_filter_)) {
    ivars_equal = false;
  }
  if (!(requested_mine_type_ == rhs.requested_mine_type_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < requested_perimeter_points_.size(); idx++) {
    if (!(requested_perimeter_points_[idx] ==
          rhs.requested_perimeter_points_[idx])) {
      ivars_equal = false;
    }
  }

  for (std::size_t idx = 0; idx < sensor_types_.size(); idx++) {
    if (!(sensor_types_[idx] == rhs.sensor_types_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t MinefieldQueryPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      MinefieldFamilyPdu::GetMarshalledSize() +
      minefield_id_.GetMarshalledSize() +
      requesting_entity_id_.GetMarshalledSize() + sizeof(request_id_) +
      sizeof(number_of_perimeter_points_) + sizeof(pad2_) +
      sizeof(number_of_sensor_types_) + sizeof(data_filter_) +
      requested_mine_type_.GetMarshalledSize();

  for (auto list_element : requested_perimeter_points_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  for (uint16_t list_element : sensor_types_) {
    marshal_size += sizeof(list_element);
  }

  return marshal_size;
}

}  // namespace dis
