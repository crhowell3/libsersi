#include "libsersi/entity_management/IsGroupOfPdu.h"

namespace dis {
IsGroupOfPdu::IsGroupOfPdu()
    : grouped_entity_category_(0),
      number_of_grouped_entities_(0),
      pad2_(0),
      latitude_(0.0),
      longitude_(0.0) {
  SetPduType(34);
}

IsGroupOfPdu::~IsGroupOfPdu() { grouped_entity_descriptions_.clear(); }

EntityID& IsGroupOfPdu::GetGroupEntityId() { return group_entity_id_; }

const EntityID& IsGroupOfPdu::GetGroupEntityId() const {
  return group_entity_id_;
}

void IsGroupOfPdu::SetGroupEntityId(const EntityID& value) {
  group_entity_id_ = value;
}

uint8_t IsGroupOfPdu::GetGroupedEntityCategory() const {
  return grouped_entity_category_;
}

void IsGroupOfPdu::SetGroupedEntityCategory(uint8_t value) {
  grouped_entity_category_ = value;
}

uint8_t IsGroupOfPdu::GetNumberOfGroupedEntities() const {
  return grouped_entity_descriptions_.size();
}

uint32_t IsGroupOfPdu::GetPad2() const { return pad2_; }

void IsGroupOfPdu::SetPad2(uint32_t value) { pad2_ = value; }

double IsGroupOfPdu::GetLatitude() const { return latitude_; }

void IsGroupOfPdu::SetLatitude(double value) { latitude_ = value; }

double IsGroupOfPdu::GetLongitude() const { return longitude_; }

void IsGroupOfPdu::SetLongitude(double value) { longitude_ = value; }

std::vector<VariableDatum>& IsGroupOfPdu::GetGroupedEntityDescriptions() {
  return grouped_entity_descriptions_;
}

const std::vector<VariableDatum>& IsGroupOfPdu::GetGroupedEntityDescriptions()
    const {
  return grouped_entity_descriptions_;
}

void IsGroupOfPdu::SetGroupedEntityDescriptions(
    const std::vector<VariableDatum>& value) {
  grouped_entity_descriptions_ = value;
}

void IsGroupOfPdu::Marshal(DataStream& data_stream) const {
  EntityManagementFamilyPdu::Marshal(data_stream);
  group_entity_id_.Marshal(data_stream);
  data_stream << grouped_entity_category_;
  data_stream << static_cast<uint8_t>(grouped_entity_descriptions_.size());
  data_stream << pad2_;
  data_stream << latitude_;
  data_stream << longitude_;

  for (const auto& x : grouped_entity_descriptions_) {
    x.Marshal(data_stream);
  }
}

void IsGroupOfPdu::Unmarshal(DataStream& data_stream) {
  EntityManagementFamilyPdu::Unmarshal(data_stream);
  group_entity_id_.Unmarshal(data_stream);
  data_stream >> grouped_entity_category_;
  data_stream >> number_of_grouped_entities_;
  data_stream >> pad2_;
  data_stream >> latitude_;
  data_stream >> longitude_;

  grouped_entity_descriptions_.clear();
  for (std::size_t idx = 0; idx < number_of_grouped_entities_; idx++) {
    VariableDatum x;
    x.Unmarshal(data_stream);
    grouped_entity_descriptions_.push_back(x);
  }
}

bool IsGroupOfPdu::operator==(const IsGroupOfPdu& rhs) const {
  bool ivars_equal = true;

  ivars_equal = EntityManagementFamilyPdu::operator==(rhs);

  if (!(group_entity_id_ == rhs.group_entity_id_)) {
    ivars_equal = false;
  }
  if (!(grouped_entity_category_ == rhs.grouped_entity_category_)) {
    ivars_equal = false;
  }
  if (!(pad2_ == rhs.pad2_)) {
    ivars_equal = false;
  }
  if (!(latitude_ == rhs.latitude_)) {
    ivars_equal = false;
  }
  if (!(longitude_ == rhs.longitude_)) {
    ivars_equal = false;
  }

  for (std::size_t idx = 0; idx < grouped_entity_descriptions_.size(); idx++) {
    if (!(grouped_entity_descriptions_[idx] ==
          rhs.grouped_entity_descriptions_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t IsGroupOfPdu::GetMarshalledSize() const {
  std::size_t marshal_size =
      EntityManagementFamilyPdu::GetMarshalledSize() +
      group_entity_id_.GetMarshalledSize() + sizeof(grouped_entity_category_) +
      sizeof(number_of_grouped_entities_) + sizeof(pad2_) + sizeof(latitude_) +
      sizeof(longitude_);

  for (const auto& list_element : grouped_entity_descriptions_) {
    marshal_size += list_element.GetMarshalledSize();
  }

  return marshal_size;
}

}  // namespace dis
