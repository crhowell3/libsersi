#pragma once

#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.2.8. Time measurements that exceed one hour. Hours is the number of
// hours since January 1, 1970, UTC

class ClockTime {
 private:
  /** Hours in UTC */
  int hour_;  // NOLINT

  /** Time past the hour */
  uint32_t time_past_hour_;  // NOLINT

 public:
  ClockTime();
  virtual ~ClockTime();

  virtual void Marshal(DataStream& data_stream) const;
  virtual void Unmarshal(DataStream& data_stream);

  [[nodiscard]] int GetHour() const;
  void SetHour(int value);

  [[nodiscard]] uint32_t GetTimePastHour() const;
  void SetTimePastHour(uint32_t value);

  [[nodiscard]] virtual int GetMarshalledSize() const;

  bool operator==(const ClockTime& rhs) const;
};
}  // namespace dis

