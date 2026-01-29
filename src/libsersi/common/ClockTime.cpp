#include "libsersi/common/ClockTime.h"

namespace dis {
ClockTime::ClockTime() : hour_(0), time_past_hour_(0) {}

ClockTime::~ClockTime() = default;

int ClockTime::GetHour() const { return hour_; }

void ClockTime::SetHour(int value) { hour_ = value; }

uint32_t ClockTime::GetTimePastHour() const { return time_past_hour_; }

void ClockTime::SetTimePastHour(uint32_t value) { time_past_hour_ = value; }

Result<void, std::string> ClockTime::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << hour_;
  byte_buffer << time_past_hour_;

  return Result<void, std::string>::Ok();
}

Result<void, std::string> ClockTime::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> hour_;
  byte_buffer >> time_past_hour_;

  return Result<void, std::string>::Ok();
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
