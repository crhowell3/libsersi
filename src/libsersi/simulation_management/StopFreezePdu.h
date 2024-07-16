#pragma once

#include "libsersi/common/ClockTime.h"
#include "libsersi/simulation_management/SimulationManagementFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.2.3.4. Stop or freeze an exercise. COMPLETE

class StopFreezePdu final : public SimulationManagementFamilyPdu {
 private:
  /** UTC time at which the simulation shall stop or freeze */
  ClockTime real_world_time_;

  /** Reason the simulation was stopped or frozen */
  uint8_t reason_;

  /** Internal behavior of the simulation and its appearance while frozento the
   * other participants */
  uint8_t frozen_behavior_;

  /** padding */
  int16_t padding1_;

  /** Request ID that is unique */
  uint32_t request_id_;

 public:
  StopFreezePdu();
  ~StopFreezePdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  ClockTime& GetRealWorldTime();
  [[nodiscard]] const ClockTime& GetRealWorldTime() const;
  void SetRealWorldTime(const ClockTime& value);

  [[nodiscard]] uint8_t GetReason() const;
  void SetReason(uint8_t value);

  [[nodiscard]] uint8_t GetFrozenBehavior() const;
  void SetFrozenBehavior(uint8_t value);

  [[nodiscard]] int16_t GetPadding1() const;
  void SetPadding1(int16_t value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const StopFreezePdu& rhs) const;
};
}  // namespace dis
