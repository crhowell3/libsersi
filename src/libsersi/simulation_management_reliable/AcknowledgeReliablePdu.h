#pragma once

#include "libsersi/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.12.5: Ack receipt of a start-resume, stop-freeze, create-entity
// or remove enitty (reliable) pdus. COMPLETE

class AcknowledgeReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** ack flags */
  uint16_t acknowledge_flag_;

  /** response flags */
  uint16_t response_flag_;

  /** Request ID */
  uint32_t request_id_;

 public:
  AcknowledgeReliablePdu();
  ~AcknowledgeReliablePdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint16_t GetAcknowledgeFlag() const;
  void SetAcknowledgeFlag(uint16_t value);

  [[nodiscard]] uint16_t GetResponseFlag() const;
  void SetResponseFlag(uint16_t value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const AcknowledgeReliablePdu& rhs) const;
};
}  // namespace dis
