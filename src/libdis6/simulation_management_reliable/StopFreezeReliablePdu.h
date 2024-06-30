#pragma once

#include "libdis6/common/ClockTime.h"
#include "libdis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12.4: Stop freeze simulation, reliable. COMPLETE

class StopFreezeReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** time in real world for this operation to happen */
  ClockTime real_world_time_;

  /** Reason for stopping/freezing simulation */
  uint8_t reason_;

  /** internal behvior of the simulation while frozen */
  uint8_t frozen_behavior_;

  /** reliability level */
  uint8_t required_reliability_service_;

  /** padding */
  uint8_t pad1_;

  /** Request ID */
  uint32_t request_id_;

 public:
  StopFreezeReliablePdu();
  ~StopFreezeReliablePdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  ClockTime& GetRealWorldTime();
  [[nodiscard]] const ClockTime& GetRealWorldTime() const;
  void SetRealWorldTime(const ClockTime& value);

  [[nodiscard]] uint8_t GetReason() const;
  void SetReason(uint8_t value);

  [[nodiscard]] uint8_t GetFrozenBehavior() const;
  void SetFrozenBehavior(uint8_t value);

  [[nodiscard]] uint8_t GetRequiredReliabilityService() const;
  void SetRequiredReliabilityService(uint8_t value);

  [[nodiscard]] uint8_t GetPad1() const;
  void SetPad1(uint8_t value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const StopFreezeReliablePdu& rhs) const;
};
}  // namespace dis
