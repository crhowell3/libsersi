#pragma once

#include "dis6/common/ClockTime.h"
#include "dis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12.3: Start resume simulation, reliable. COMPLETE

class StartResumeReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** time in real world for this operation to happen */
  ClockTime real_world_time_;

  /** time in simulation for the simulation to resume */
  ClockTime simulation_time_;

  /** level of reliability service used for this transaction */
  uint8_t required_reliability_service_;

  /** padding */
  uint16_t pad1_;

  /** padding */
  uint8_t pad2_;

  /** Request ID */
  uint32_t request_id_;

 public:
  StartResumeReliablePdu();
  ~StartResumeReliablePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  ClockTime& GetRealWorldTime();
  [[nodiscard]] const ClockTime& GetRealWorldTime() const;
  void SetRealWorldTime(const ClockTime& value);

  ClockTime& GetSimulationTime();
  [[nodiscard]] const ClockTime& GetSimulationTime() const;
  void SetSimulationTime(const ClockTime& value);

  [[nodiscard]] uint8_t GetRequiredReliabilityService() const;
  void SetRequiredReliabilityService(uint8_t value);

  [[nodiscard]] uint16_t GetPad1() const;
  void SetPad1(uint16_t value);

  [[nodiscard]] uint8_t GetPad2() const;
  void SetPad2(uint8_t value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const StartResumeReliablePdu& rhs) const;
};
}  // namespace dis
