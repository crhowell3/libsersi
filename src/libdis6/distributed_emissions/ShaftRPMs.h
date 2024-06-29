#pragma once

#include <cstddef>

#include "dis6/utils/DataStream.h"

namespace dis {
// Shaft RPMs, used in underwater acoustic clacluations.

class ShaftRPMs {
 private:
  /** Current shaft RPMs */
  int16_t current_shaft_rpms_;

  /** ordered shaft rpms */
  int16_t ordered_shaft_rpms_;

  /** rate of change of shaft RPMs */
  float shaft_rpm_rate_of_change_;

 public:
  ShaftRPMs();
  ~ShaftRPMs() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] int16_t GetCurrentShaftRPMs() const;
  void SetCurrentShaftRPMs(int16_t value);

  [[nodiscard]] int16_t GetOrderedShaftRPMs() const;
  void SetOrderedShaftRPMs(int16_t value);

  [[nodiscard]] float GetShaftRPMRateOfChange() const;
  void SetShaftRPMRateOfChange(float value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const ShaftRPMs& rhs) const;
};
}  // namespace dis
