#include "libsersi/distributed_emissions/PropulsionSystemData.h"

#include <cstddef>

namespace dis {
PropulsionSystemData::PropulsionSystemData()
    : power_setting_(0.0), engine_rpm_(0.0) {}

float PropulsionSystemData::GetPowerSetting() const { return power_setting_; }

void PropulsionSystemData::SetPowerSetting(float value) {
  power_setting_ = value;
}

float PropulsionSystemData::GetEngineRpm() const { return engine_rpm_; }

void PropulsionSystemData::SetEngineRpm(float value) { engine_rpm_ = value; }

void PropulsionSystemData::Marshal(DataStream& data_stream) const {
  data_stream << power_setting_;
  data_stream << engine_rpm_;
}

void PropulsionSystemData::Unmarshal(DataStream& data_stream) {
  data_stream >> power_setting_;
  data_stream >> engine_rpm_;
}

bool PropulsionSystemData::operator==(const PropulsionSystemData& rhs) const {
  bool ivars_equal = true;

  if (!(power_setting_ == rhs.power_setting_)) {
    ivars_equal = false;
  }
  if (!(engine_rpm_ == rhs.engine_rpm_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t PropulsionSystemData::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(power_setting_) + sizeof(engine_rpm_);
  return marshal_size;
}

}  // namespace dis
