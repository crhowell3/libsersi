#include "dis6/entity_management/AggregateType.h"

namespace dis {
AggregateType::AggregateType()
    : aggregate_kind_(0),
      domain_(0),
      country_(0),
      category_(0),
      subcategory_(0),
      specific_(0),
      extra_(0) {}

uint8_t AggregateType::GetAggregateKind() const { return aggregate_kind_; }

void AggregateType::SetAggregateKind(uint8_t value) { aggregate_kind_ = value; }

uint8_t AggregateType::GetDomain() const { return domain_; }

void AggregateType::SetDomain(uint8_t value) { domain_ = value; }

uint16_t AggregateType::GetCountry() const { return country_; }

void AggregateType::SetCountry(uint16_t value) { country_ = value; }

uint8_t AggregateType::GetCategory() const { return category_; }

void AggregateType::SetCategory(uint8_t value) { category_ = value; }

uint8_t AggregateType::GetSubcategory() const { return subcategory_; }

void AggregateType::SetSubcategory(uint8_t value) { subcategory_ = value; }

uint8_t AggregateType::GetSpecific() const { return specific_; }

void AggregateType::SetSpecific(uint8_t value) { specific_ = value; }

uint8_t AggregateType::GetExtra() const { return extra_; }

void AggregateType::SetExtra(uint8_t value) { extra_ = value; }

void AggregateType::Marshal(DataStream& data_stream) const {
  data_stream << aggregate_kind_;
  data_stream << domain_;
  data_stream << country_;
  data_stream << category_;
  data_stream << subcategory_;
  data_stream << specific_;
  data_stream << extra_;
}

void AggregateType::Unmarshal(DataStream& data_stream) {
  data_stream >> aggregate_kind_;
  data_stream >> domain_;
  data_stream >> country_;
  data_stream >> category_;
  data_stream >> subcategory_;
  data_stream >> specific_;
  data_stream >> extra_;
}

bool AggregateType::operator==(const AggregateType& rhs) const {
  bool ivars_equal = true;

  if (!(aggregate_kind_ == rhs.aggregate_kind_)) {
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

std::size_t AggregateType::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(aggregate_kind_) + sizeof(domain_) +
                             sizeof(country_) + sizeof(category_) +
                             sizeof(subcategory_) + sizeof(specific_) +
                             sizeof(extra_);

  return marshal_size;
}

}  // namespace dis
