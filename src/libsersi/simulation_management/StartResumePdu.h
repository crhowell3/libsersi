#pragma once

#include "libsersi/common/ClockTime.h"
#include "libsersi/simulation_management/SimulationManagementFamilyPdu.h"
#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.2.6.3. Start or resume an exercise. COMPLETE

class StartResumePdu final : public SimulationManagementFamilyPdu {
 private:
  /** UTC time at which the simulation shall start or resume */
  ClockTime real_world_time_;

  /** Simulation clock time at which the simulation shall start or resume */
  ClockTime simulation_time_;

  /** Identifier for the request */
  uint32_t request_id_;

 public:
  StartResumePdu();
  ~StartResumePdu() final = default;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  ClockTime& GetRealWorldTime();
  [[nodiscard]] const ClockTime& GetRealWorldTime() const;
  void SetRealWorldTime(const ClockTime& value);

  ClockTime& GetSimulationTime();
  [[nodiscard]] const ClockTime& GetSimulationTime() const;
  void SetSimulationTime(const ClockTime& value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const StartResumePdu& rhs) const;
};
}  // namespace dis
