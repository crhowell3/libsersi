#include "libsersi/common/ClockTime.h"

namespace dis {
ClockTime::ClockTime() : hour_(0), time_past_hour_(0) {}

ClockTime::~ClockTime() = default;

int ClockTime::GetHour() const { return hour_; }

void ClockTime::SetHour(int value) { hour_ = value; }

uint32_t ClockTime::GetTimePastHour() const { return time_past_hour_; }

void ClockTime::SetTimePastHour(uint32_t value) { time_past_hour_ = value; }

void ClockTime::Marshal(DataStream& data_stream) const {
  data_stream << hour_;
  data_stream << time_past_hour_;
}

void ClockTime::Unmarshal(DataStream& data_stream) {
  data_stream >> hour_;
  data_stream >> time_past_hour_;
}

bool ClockTime::operator==(const ClockTime& rhs) const {
  bool ivars_equal = true;

  if (!(hour_ == rhs.hour_)) {
    ivars_equal = false;
  }
  if (!(time_past_hour_ == rhs.time_past_hour_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

int ClockTime::GetMarshalledSize() const {
  int marshal_size = 0;

  marshal_size = marshal_size + 4;  // hour_
  marshal_size = marshal_size + 4;  // time_past_hour_
  return marshal_size;
}

}  // namespace dis
