#pragma once

#include <cstddef>

#include "dis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12.2: Removal of an entity , reliable. COMPLETE

class RemoveEntityReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** level of reliability service used for this transaction */
  uint8_t required_reliability_service_;

  /** padding */
  uint16_t pad1_;

  /** padding */
  uint8_t pad2_;

  /** Request ID */
  uint32_t request_id_;

 public:
  RemoveEntityReliablePdu();
  ~RemoveEntityReliablePdu() final = default;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint8_t GetRequiredReliabilityService() const;
  void SetRequiredReliabilityService(uint8_t value);

  [[nodiscard]] uint16_t GetPad1() const;
  void SetPad1(uint16_t value);

  [[nodiscard]] uint8_t GetPad2() const;
  void SetPad2(uint8_t value);

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const RemoveEntityReliablePdu& rhs) const;
};
}  // namespace dis
