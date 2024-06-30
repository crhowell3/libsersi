#include "libdis6/minefield/MinefieldDataPdu.h"

namespace dis {
MinefieldDataPdu::MinefieldDataPdu()
    : minefield_sequence_number_(0),
      request_id_(0),
      pdu_sequence_number_(0),
      number_of_pdus_(0),
      number_of_mines_in_this_pdu_(0),
      number_of_sensor_types_(0),
      pad2_(0),
      data_filter_(0),
      pad3_(0) {
  SetPduType(39);
}

MinefieldDataPdu::~MinefieldDataPdu() {
  sensor_types_.clear();
  mine_location_.clear();
}

EntityID& MinefieldDataPdu::GetMinefieldId() { return minefield_id_; }

const EntityID& MinefieldDataPdu::GetMinefieldId() const {
  return minefield_id_;
}

void MinefieldDataPdu::SetMinefieldId(const EntityID& value) {
  minefield_id_ = value;
}

EntityID& MinefieldDataPdu::GetRequestingEntityId() {
  return requesting_entity_id_;
}

const EntityID& MinefieldDataPdu::GetRequestingEntityId() const {
  return requesting_entity_id_;
}

void MinefieldDataPdu::SetRequestingEntityId(const EntityID& value) {
  requesting_entity_id_ = value;
}

uint16_t MinefieldDataPdu::GetMinefieldSequenceNumber() const {
  return minefield_sequence_number_;
}

void MinefieldDataPdu::SetMinefieldSequenceNumber(uint16_t value) {
  minefield_sequence_number_ = value;
}

uint8_t MinefieldDataPdu::GetRequestId() const { return request_id_; }

void MinefieldDataPdu::SetRequestId(uint8_t value) { request_id_ = value; }

uint8_t MinefieldDataPdu::GetPduSequenceNumber() const {
  return pdu_sequence_number_;
}

void MinefieldDataPdu::SetPduSequenceNumber(uint8_t value) {
  pdu_sequence_number_ = value;
}

uint8_t MinefieldDataPdu::GetNumberOfPdus() const { return number_of_pdus_; }

void MinefieldDataPdu::SetNumberOfPdus(uint8_t value) {
  number_of_pdus_ = value;
}

uint8_t MinefieldDataPdu::GetNumberOfMinesInThisPdu() const {
  return mine_location_.size();
}

uint8_t MinefieldDataPdu::GetNumberOfSensorTypes() const {
  return sensor_types_.size();
}

uint8_t MinefieldDataPdu::GetPad2() const { return pad2_; }

void MinefieldDataPdu::SetPad2(uint8_t value) { pad2_ = value; }

uint32_t MinefieldDataPdu::GetDataFilter() const { return data_filter_; }

void MinefieldDataPdu::SetDataFilter(uint32_t value) { data_filter_ = value; }

EntityType& MinefieldDataPdu::GetMineType() { return mine_type_; }

const EntityType& MinefieldDataPdu::GetMineType() const { return mine_type_; }

void MinefieldDataPdu::SetMineType(const EntityType& value) {
  mine_type_ = value;
}

std::vector<uint16_t>& MinefieldDataPdu::GetSensorTypes() {
  return sensor_types_;
}

const std::vector<uint16_t>& MinefieldDataPdu::GetSensorTypes() const {
  return sensor_types_;
}

void MinefieldDataPdu::SetSensorTypes(const std::vector<uint16_t>& value) {
  sensor_types_ = value;
}

uint8_t MinefieldDataPdu::GetPad3() const { return pad3_; }

void MinefieldDataPdu::SetPad3(uint8_t value) { pad3_ = value; }

std::vector<Vector3Float>& MinefieldDataPdu::GetMineLocation() {
  return mine_location_;
}

const std::vector<Vector3Float>& MinefieldDataPdu::GetMineLocation() const {
  return mine_location_;
}

void MinefieldDataPdu::SetMineLocation(const std::vector<Vector3Float>& value) {
  mine_location_ = value;
}

void MinefieldDataPdu::Marshal(DataStream& data_stream) const {
  MinefieldFamilyPdu::Marshal(data_stream);
  minefield_id_.Marshal(data_stream);
  requesting_entity_id_.Marshal(data_stream);
  data_stream << minefield_sequence_number_;
  data_stream << request_id_;
  data_stream << pdu_sequence_number_;
  data_stream << number_of_pdus_;
  data_stream << static_cast<uint8_t>(mine_location_.size());
  data_stream << static_cast<uint8_t>(sensor_types_.size());
  data_stream << pad2_;
  data_stream << data_filter_;
  mine_type_.Marshal(data_stream);

  for (unsigned short x : sensor_types_) {
    data_stream << x;
  }

  data_stream << pad3_;

  for (auto x : mine_location_) {
    x.Marshal(data_stream);
  }
}

void MinefieldDataPdu::Unmarshal(DataStream& data_stream) {
  MinefieldFamilyPdu::Unmarshal(data_stream);
  minefield_id_.Unmarshal(data_stream);
  requesting_entity_id_.Unmarshal(data_stream);
  data_stream >> minefield_sequence_number_;
  data_stream >> request_id_;
  data_stream >> pdu_sequence_number_;
  data_stream >> number_of_pdus_;
  data_stream >> number_of_mines_in_this_pdu_;
  data_stream >> number_of_sensor_types_;
  data_stream >> pad2_;
  data_stream >> data_filter_;
  mine_type_.Unmarshal(data_stream);

  sensor_types_.clear();
  for (std::size_t idx = 0; idx < number_of_sensor_types_; idx++) {
    uint16_t x;
    data_stream >> x;
    sensor_types_.push_back(x);
  }
  data_stream >> pad3_;

  mine_location_.clear();
  for (std::size_t idx = 0; idx < number_of_mines_in_this_pdu_; idx++) {
    Vector3Float x;
    x.Unmarshal(data_stream);
    mine_location_.push_back(x);
  }
}

bool MinefieldDataPdu::operator==(const MinefieldDataPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = MinefieldFamilyPdu::operator==(rhs);

  if (!(minefield_id_ == rhs.minefield_id_)) {
    ivars_equal = false;
  }
  if (!(requesting_entity_id_ == rhs.requesting_entity_id_)) {
    ivars_equal = false;
  }
  if (!(minefield_sequence_number_ == rhs.minefield_sequence_number_)) {
    ivars_equal = false;
  }
  if (!(request_id_ == rhs.request_id_)) {
    ivars_equal = false;
  }
  if (!(pdu_sequence_number_ == rhs.pdu_sequence_number_)) {
    ivars_equal = false;
  }
  if (!(number_of_pdus_ == rhs.number_of_pdus_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(data_filter_ == rhs.data_filter_)) {
    ivars_equal = false;
  }
  if (!(mine_type_ == rhs.mine_type_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < sensor_types_.size(); idx++) {
    if (!(sensor_types_[idx] == rhs.sensor_types_[idx])) {
      ivars_equal = false;
    }
  }

  if (!(pad3_ == rhs.pad3_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < mine_location_.size(); idx++) {
    if (!(mine_location_[idx] == rhs.mine_location_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t MinefieldDataPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      MinefieldFamilyPdu::GetMarshalledSize() +
      minefield_id_.GetMarshalledSize() +
      requesting_entity_id_.GetMarshalledSize() +
      sizeof(minefield_sequence_number_) + sizeof(request_id_) +
      sizeof(pdu_sequence_number_) + sizeof(number_of_pdus_) +
      sizeof(number_of_mines_in_this_pdu_) + sizeof(number_of_sensor_types_) +
      sizeof(pad2_) + sizeof(data_filter_) + mine_type_.GetMarshalledSize();

  for (const auto list_element : sensor_types_) {
    marshal_size += sizeof(list_element);
  }

  marshal_size += sizeof(pad3_);

  for (auto list_element : mine_location_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}
}  // namespace dis
