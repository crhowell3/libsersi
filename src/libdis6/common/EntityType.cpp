#include "libdis6/common/EntityType.h"

namespace dis {
EntityType::EntityType()
    : entity_kind_(0),
      domain_(0),
      country_(0),
      category_(0),
      subcategory_(0),
      specific_(0),
      extra_(0) {}

uint8_t EntityType::GetEntityKind() const { return entity_kind_; }

void EntityType::SetEntityKind(uint8_t value) { entity_kind_ = value; }

uint8_t EntityType::GetDomain() const { return domain_; }

void EntityType::SetDomain(uint8_t value) { domain_ = value; }

uint16_t EntityType::GetCountry() const { return country_; }

void EntityType::SetCountry(uint16_t value) { country_ = value; }

uint8_t EntityType::GetCategory() const { return category_; }

void EntityType::SetCategory(uint8_t value) { category_ = value; }

uint8_t EntityType::GetSubcategory() const { return subcategory_; }

void EntityType::SetSubcategory(uint8_t value) { subcategory_ = value; }

uint8_t EntityType::GetSpecific() const { return specific_; }

void EntityType::SetSpecific(uint8_t value) { specific_ = value; }

uint8_t EntityType::GetExtra() const { return extra_; }

void EntityType::SetExtra(uint8_t value) { extra_ = value; }

void EntityType::Marshal(DataStream& data_stream) const {
  data_stream << entity_kind_;
  data_stream << domain_;
  data_stream << country_;
  data_stream << category_;
  data_stream << subcategory_;
  data_stream << specific_;
  data_stream << extra_;
}

void EntityType::Unmarshal(DataStream& data_stream) {
  data_stream >> entity_kind_;
  data_stream >> domain_;
  data_stream >> country_;
  data_stream >> category_;
  data_stream >> subcategory_;
  data_stream >> specific_;
  data_stream >> extra_;
}

bool EntityType::operator==(const EntityType& rhs) const {
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
  if (!(specific_ == rhs.specific_)) {
    ivars_equal = false;
  }
  if (!(extra_ == rhs.extra_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t EntityType::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(entity_kind_) + sizeof(domain_) +
                             sizeof(country_) + sizeof(category_) +
                             sizeof(subcategory_) + sizeof(specific_) +
                             sizeof(extra_);

  return marshal_size;
}

}  // namespace dis
