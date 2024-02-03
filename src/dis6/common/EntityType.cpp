#include "dis6/common/EntityType.h"

namespace dis {
EntityType::EntityType()
    : _entityKind(0),
      domain_(0),
      country_(0),
      category_(0),
      subcategory_(0),
      specific_(0),
      extra_(0) {}

EntityType::~EntityType() = default;

uint8_t EntityType::GetEntityKind() { return GetEntityKind; }

void EntityType::SetEntityKind(uint8_t value) { _entityKind = value; }

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

  if (!(GetEntityKind == rhs.entity_kind_)) {
    ivars_equal = false;
  }
  if (!(_domain == rhs.domain_)) {
    ivars_equal = false;
  }
  if (!(_country == rhs.country_)) {
    ivars_equal = false;
  }
  if (!(_category == rhs.category_)) {
    ivars_equal = false;
  }
  if (!(_subcategory == rhs.subcategory_)) {
    ivars_equal = false;
  }
  if (!(_specific == rhs.specific_)) {
    ivars_equal = false;
  }
  if (!(_extra == rhs.extra_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

int EntityType::GetMarshalledSize() const {
  int marshal_size = 0;

  marshal_size = marshal_size + 1;  // _entityKind
  marshal_size = marshal_size + 1;  // _domain
  marshal_size = marshal_size + 2;  // _country
  marshal_size = marshal_size + 1;  // _category
  marshal_size = marshal_size + 1;  // _subcategory
  marshal_size = marshal_size + 1;  // _specific
  marshal_size = marshal_size + 1;  // _extra
  return marshal_size;
}

}  // namespace dis

