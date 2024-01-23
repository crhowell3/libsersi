#include "dis6/common/EventID.h"

namespace dis {
EventID::EventID() : site_(0), application_(0), event_number_(0) {}

uint16_t EventID::GetSite() const { return site_; }

void EventID::SetSite(uint16_t value) { site_ = value; }

uint16_t EventID::GetApplication() const { return application_; }

void EventID::SetApplication(uint16_t value) { application_ = value; }

uint16_t EventID::GetEventNumber() const { return event_number_; }

void EventID::SetEventNumber(uint16_t value) { event_number_ = value; }

void EventID::Marshal(DataStream& data_stream) const {
  data_stream << site_;
  data_stream << application_;
  data_stream << event_number_;
}

void EventID::Unmarshal(DataStream& data_stream) {
  data_stream >> site_;
  data_stream >> application_;
  data_stream >> event_number_;
}

bool EventID::operator==(const EventID& rhs) const {
  bool ivars_equal = true;

  if (!(site_ == rhs.site_)) {
    ivars_equal = false;
  }
  if (!(application_ == rhs.application_)) {
    ivars_equal = false;
  }
  if (!(event_number_ == rhs.event_number_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t EventID::GetMarshalledSize() const {
  std::size_t marshal_size =
      sizeof(site_) + sizeof(application_) + sizeof(event_number_);
  return marshal_size;
}

}  // namespace dis
