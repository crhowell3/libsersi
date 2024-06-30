#include "libdis6/distributed_emissions/ShaftRPMs.h"

namespace dis {
ShaftRPMs::ShaftRPMs()
    : current_shaft_rpms_(0),
      ordered_shaft_rpms_(0),
      shaft_rpm_rate_of_change_(0.0) {}

int16_t ShaftRPMs::GetCurrentShaftRPMs() const { return current_shaft_rpms_; }

void ShaftRPMs::SetCurrentShaftRPMs(int16_t value) {
  current_shaft_rpms_ = value;
}

int16_t ShaftRPMs::GetOrderedShaftRPMs() const { return ordered_shaft_rpms_; }

void ShaftRPMs::SetOrderedShaftRPMs(int16_t value) {
  ordered_shaft_rpms_ = value;
}

float ShaftRPMs::GetShaftRPMRateOfChange() const {
  return shaft_rpm_rate_of_change_;
}

void ShaftRPMs::SetShaftRPMRateOfChange(float value) {
  shaft_rpm_rate_of_change_ = value;
}

void ShaftRPMs::Marshal(DataStream& data_stream) const {
  data_stream << current_shaft_rpms_;
  data_stream << ordered_shaft_rpms_;
  data_stream << shaft_rpm_rate_of_change_;
}

void ShaftRPMs::Unmarshal(DataStream& data_stream) {
  data_stream >> current_shaft_rpms_;
  data_stream >> ordered_shaft_rpms_;
  data_stream >> shaft_rpm_rate_of_change_;
}

bool ShaftRPMs::operator==(const ShaftRPMs& rhs) const {
  bool ivars_equal = true;

  if (current_shaft_rpms_ != rhs.current_shaft_rpms_) {
    ivars_equal = false;
  }
  if (ordered_shaft_rpms_ != rhs.ordered_shaft_rpms_) {
    ivars_equal = false;
  }
  if (shaft_rpm_rate_of_change_ != rhs.shaft_rpm_rate_of_change_) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t ShaftRPMs::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(current_shaft_rpms_) +
                             sizeof(ordered_shaft_rpms_) +
                             sizeof(shaft_rpm_rate_of_change_);
  return marshal_size;
}

}  // namespace dis
