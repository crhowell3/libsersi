#include "libdis6/entity_management/AggregateID.h"

namespace dis {
AggregateID::AggregateID() : site_(0), application_(0), aggregate_id_(0) {}

uint16_t AggregateID::GetSite() const { return site_; }

void AggregateID::SetSite(uint16_t value) { site_ = value; }

uint16_t AggregateID::GetApplication() const { return application_; }

void AggregateID::SetApplication(uint16_t value) { application_ = value; }

uint16_t AggregateID::GetAggregateId() const { return aggregate_id_; }

void AggregateID::SetAggregateId(uint16_t value) { aggregate_id_ = value; }

void AggregateID::Marshal(DataStream& data_stream) const {
  data_stream << site_;
  data_stream << application_;
  data_stream << aggregate_id_;
}

void AggregateID::Unmarshal(DataStream& data_stream) {
  data_stream >> site_;
  data_stream >> application_;
  data_stream >> aggregate_id_;
}

bool AggregateID::operator==(const AggregateID& rhs) const {
  bool ivars_equal = true;

  if (!(site_ == rhs.site_)) {
    ivars_equal = false;
  }
  if (!(application_ == rhs.application_)) {
    ivars_equal = false;
  }
  if (!(aggregate_id_ == rhs.aggregate_id_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t AggregateID::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(site_) + sizeof(application_) + sizeof(aggregate_id_);

  return marshal_size;
}

}  // namespace dis
