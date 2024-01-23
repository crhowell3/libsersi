#pragma once

#include <vector>

#include "dis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12.13: A request for one or more records of data from an entity.
// COMPLETE

class RecordQueryReliablePdu final
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

  /** event type */
  uint16_t event_type_;

  /** time */
  uint32_t time_;

  /** numberOfRecords */
  uint32_t number_of_records_;

  /** record IDs */
  std::vector<uint32_t> record_ids_;

 public:
  RecordQueryReliablePdu();
  ~RecordQueryReliablePdu() final;

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

  [[nodiscard]] uint16_t GetEventType() const;
  void SetEventType(uint16_t value);

  [[nodiscard]] uint32_t GetTime() const;
  void SetTime(uint32_t value);

  [[nodiscard]] uint32_t GetNumberOfRecords() const;

  std::vector<uint32_t>& GetRecordIDs();
  [[nodiscard]] const std::vector<uint32_t>& GetRecordIDs() const;
  void SetRecordIDs(const std::vector<uint32_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const RecordQueryReliablePdu& rhs) const;
};
}  // namespace dis
