#pragma once

#include <cstddef>
#include <cstdint>

#include "libsersi/simulation_management/SimulationManagementFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.6.5. Acknowledge the receiptof a start/resume, stop/freeze, or
// RemoveEntityPDU. COMPLETE

class AcknowledgePdu final : public SimulationManagementFamilyPdu {
 private:
  /** type of message being acknowledged */
  uint16_t acknowledge_flag_;

  /** Whether or not the receiving entity was able to comply with the request */
  uint16_t response_flag_;

  /** Request ID that is unique */
  uint32_t request_id_;

 public:
  AcknowledgePdu();
  ~AcknowledgePdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint16_t GetAcknowledgeFlag() const;
  void SetAcknowledgeFlag(uint16_t value);

  [[nodiscard]] uint16_t GetResponseFlag() const;
  void SetResponseFlag(uint16_t value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const AcknowledgePdu& rhs) const;
};
}  // namespace dis
