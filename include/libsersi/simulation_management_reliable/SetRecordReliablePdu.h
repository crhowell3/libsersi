#pragma once

#include <vector>

#include "libsersi/common/RecordSet.h"
#include "libsersi/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.12.14: Initializing or changing internal parameter info.

class SetRecordReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** request ID */
  uint32_t request_id_;

  /** level of reliability service used for this transaction */
  uint8_t required_reliability_service_;

  /** padding. The spec is unclear and contradictory here. */
  uint16_t pad1_;

  /** padding */
  uint8_t pad2_;

  /** Number of record sets in list */
  uint32_t number_of_record_sets_;

  /** record sets */
  std::vector<RecordSet> record_sets_;

 public:
  SetRecordReliablePdu();
  ~SetRecordReliablePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] uint8_t GetRequiredReliabilityService() const;
  void SetRequiredReliabilityService(uint8_t value);

  [[nodiscard]] uint16_t GetPad1() const;
  void SetPad1(uint16_t value);

  [[nodiscard]] uint8_t GetPad2() const;
  void SetPad2(uint8_t value);

  [[nodiscard]] uint32_t GetNumberOfRecordSets() const;

  std::vector<RecordSet>& GetRecordSets();
  [[nodiscard]] const std::vector<RecordSet>& GetRecordSets() const;
  void SetRecordSets(const std::vector<RecordSet>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const SetRecordReliablePdu& rhs) const;
};
}  // namespace dis
