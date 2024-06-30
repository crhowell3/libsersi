#include "libdis6/synthetic_environment/ObjectType.h"

namespace dis {
ObjectType::ObjectType()
    : entity_kind_(0), domain_(0), country_(0), category_(0), subcategory_(0) {}

uint8_t ObjectType::GetEntityKind() const { return entity_kind_; }

void ObjectType::SetEntityKind(uint8_t value) { entity_kind_ = value; }

uint8_t ObjectType::GetDomain() const { return domain_; }

void ObjectType::SetDomain(uint8_t value) { domain_ = value; }

uint16_t ObjectType::GetCountry() const { return country_; }

void ObjectType::SetCountry(uint16_t value) { country_ = value; }

uint8_t ObjectType::GetCategory() const { return category_; }

void ObjectType::SetCategory(uint8_t value) { category_ = value; }

uint8_t ObjectType::GetSubcategory() const { return subcategory_; }

void ObjectType::SetSubcategory(uint8_t value) { subcategory_ = value; }

void ObjectType::Marshal(DataStream& data_stream) const {
  data_stream << entity_kind_;
  data_stream << domain_;
  data_stream << country_;
  data_stream << category_;
  data_stream << subcategory_;
}

void ObjectType::Unmarshal(DataStream& data_stream) {
  data_stream >> entity_kind_;
  data_stream >> domain_;
  data_stream >> country_;
  data_stream >> category_;
  data_stream >> subcategory_;
}

bool ObjectType::operator==(const ObjectType& rhs) const {
  bool ivars_equal = true;

  if (!(entity_kind_ == rhs.entity_kind_)) {
    ivars_equal = false;
  }
  if (!(domain_ == rhs.domain_)) {
    ivars_equal = false;
  }
  if (!(country_ == rhs.country_)) {
    ivars_equal = false;
  }
  if (!(category_ == rhs.category_)) {
    ivars_equal = false;
  }
  if (!(subcategory_ == rhs.subcategory_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t ObjectType::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(entity_kind_) + sizeof(domain_) +
                             sizeof(country_) + sizeof(category_) +
                             sizeof(subcategory_);
  return marshal_size;
}

}  // namespace dis
