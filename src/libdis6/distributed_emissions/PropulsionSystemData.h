#pragma once

#include <cstddef>

#include "dis6/utils/DataStream.h"

namespace dis {
// Data about a propulsion system

class PropulsionSystemData {
 private:
  /** powerSetting */
  float power_setting_;

  /** engine RPMs */
  float engine_rpm_;

 public:
  PropulsionSystemData();
  ~PropulsionSystemData() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] float GetPowerSetting() const;
  void SetPowerSetting(float value);

  [[nodiscard]] float GetEngineRpm() const;
  void SetEngineRpm(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const PropulsionSystemData& rhs) const;
};
}  // namespace dis
