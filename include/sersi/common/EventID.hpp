#pragma once

#include <cstddef>

#include "sersi/utils/DataStream.hpp"

namespace dis {
// Section 5.2.18. Identifies a unique event in a simulation via the combination
// of three values

class EventID {
 private:
  /** The site ID */
  uint16_t site_;

  /** The application ID */
  uint16_t application_;

  /** the number of the event */
  uint16_t event_number_;

 public:
  EventID();
  ~EventID() = default;

  void Marshal(dis::DataStream& data_stream) const {
    data_stream << site_;
    data_stream << application_;
    data_stream << event_number_;
  }
  void Unmarshal(dis::DataStream& data_stream) {
    data_stream >> site_;
    data_stream >> application_;
    data_stream >> event_number_;
  }

  [[nodiscard]] auto GetSite() const -> uint16_t { return site_; }
  void SetSite(uint16_t value);

  [[nodiscard]] auto GetApplication() const -> uint16_t { return application_; }
  void SetApplication(uint16_t value);

  [[nodiscard]] auto GetEventNumber() const -> uint16_t {
    return event_number_;
  }
  void SetEventNumber(uint16_t value);

  [[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
    return sizeof(site_) + sizeof(application_) + sizeof(event_number_);
  }

  auto operator==(const EventID& rhs) const -> bool {
    return site_ == rhs.site_ && application_ == rhs.application_ &&
           event_number_ == rhs.event_number_;
  }
};
}  // namespace dis
