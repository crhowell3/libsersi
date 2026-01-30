#include radio_communications/RadioEntityType.h"

namespace dis {
RadioEntityType::RadioEntityType()
    : entity_kind_(0),
      domain_(0),
      country_(0),
      category_(0),
      nomenclature_version_(0),
      nomenclature_(0) {}

uint8_t RadioEntityType::GetEntityKind() const { return entity_kind_; }

void RadioEntityType::SetEntityKind(uint8_t value) { entity_kind_ = value; }

uint8_t RadioEntityType::GetDomain() const { return domain_; }

void RadioEntityType::SetDomain(uint8_t value) { domain_ = value; }

uint16_t RadioEntityType::GetCountry() const { return country_; }

void RadioEntityType::SetCountry(uint16_t value) { country_ = value; }

uint8_t RadioEntityType::GetCategory() const { return category_; }

void RadioEntityType::SetCategory(uint8_t value) { category_ = value; }

uint8_t RadioEntityType::GetNomenclatureVersion() const {
  return nomenclature_version_;
}

void RadioEntityType::SetNomenclatureVersion(uint8_t value) {
  nomenclature_version_ = value;
}

uint16_t RadioEntityType::GetNomenclature() const { return nomenclature_; }

void RadioEntityType::SetNomenclature(uint16_t value) { nomenclature_ = value; }

void RadioEntityType::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << entity_kind_;
  byte_buffer << domain_;
  byte_buffer << country_;
  byte_buffer << category_;
  byte_buffer << nomenclature_version_;
  byte_buffer << nomenclature_;
}

void RadioEntityType::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> entity_kind_;
  byte_buffer >> domain_;
  byte_buffer >> country_;
  byte_buffer >> category_;
  byte_buffer >> nomenclature_version_;
  byte_buffer >> nomenclature_;
}

bool RadioEntityType::operator==(const RadioEntityType& rhs) const {
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
  if (!(nomenclature_version_ == rhs.nomenclature_version_)) {
    ivars_equal = false;
  }
  if (!(nomenclature_ == rhs.nomenclature_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t RadioEntityType::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(entity_kind_) + sizeof(domain_) + sizeof(country_) +
      sizeof(category_) + sizeof(nomenclature_version_) + sizeof(nomenclature_);

  return marshal_size;
}

}  // namespace dis
