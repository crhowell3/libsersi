#pragma once

#include "libsersi/utils/DataStream.hpp"

namespace dis {
// Section 5.2.8. Time measurements that exceed one hour. Hours is the number of
// hours since January 1, 1970, UTC

class ClockTime {
 private:
  /** Hours in UTC */
   uint32_t hour_{}; // NOLINT

   /** Time past the hour */
   uint32_t time_past_hour_{}; // NOLINT

 public:
  ClockTime() = default;
  virtual ~ClockTime() = default;

  virtual void Marshal(DataStream& data_stream) const {
    data_stream << hour_;
    data_stream << time_past_hour_;
  }

  virtual void Unmarshal(DataStream& data_stream) {
    data_stream >> hour_;
    data_stream >> time_past_hour_;
  }

  [[nodiscard]] auto GetHour() const -> uint32_t { return hour_; }

  void SetHour(uint32_t value) { hour_ = value; }

  [[nodiscard]] auto GetTimePastHour() const -> uint32_t {
    return time_past_hour_;
  }
  void SetTimePastHour(uint32_t value) {
    time_past_hour_ = value;
  }

  [[nodiscard]] virtual auto GetMarshalledSize() const -> uint32_t {
    return sizeof(hour_) + sizeof(time_past_hour_);
  }

  auto operator==(const ClockTime& rhs) const -> bool{
    return hour_ == rhs.hour_ && time_past_hour_ == rhs.time_past_hour_;
  }
};

}  // namespace dis
