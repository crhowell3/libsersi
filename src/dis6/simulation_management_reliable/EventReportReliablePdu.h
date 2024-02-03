#pragma once

#include <vector>

#include "dis6/common/FixedDatum.h"
#include "dis6/common/VariableDatum.h"
#include "dis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12.11: reports the occurance of a significatnt event to the
// simulation manager. Needs manual intervention to fix padding in variable
// datums. UNFINISHED.

class EventReportReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** Event type */
  uint16_t event_type_;

  /** padding */
  uint32_t pad1_;

  /** Fixed datum record count */
  uint32_t number_of_fixed_datum_records_;

  /** variable datum record count */
  uint32_t number_of_variable_datum_records_;

  /** Fixed datum records */
  std::vector<FixedDatum> fixed_datum_records_;

  /** Variable datum records */
  std::vector<VariableDatum> variable_datum_records_;

 public:
  EventReportReliablePdu();
  ~EventReportReliablePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint16_t GetEventType() const;
  void SetEventType(uint16_t value);

  [[nodiscard]] uint32_t GetPad1() const;
  void SetPad1(uint32_t value);

  [[nodiscard]] uint32_t GetNumberOfFixedDatumRecords() const;

  [[nodiscard]] uint32_t GetNumberOfVariableDatumRecords() const;

  std::vector<FixedDatum>& GetFixedDatumRecords();
  [[nodiscard]] const std::vector<FixedDatum>& GetFixedDatumRecords() const;
  void SetFixedDatumRecords(const std::vector<FixedDatum>& value);

  std::vector<VariableDatum>& GetVariableDatumRecords();
  [[nodiscard]] const std::vector<VariableDatum>& GetVariableDatumRecords()
      const;
  void SetVariableDatumRecords(const std::vector<VariableDatum>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const EventReportReliablePdu& rhs) const;
};
}  // namespace dis
