#pragma once

#include <vector>

#include "libsersi/common/FixedDatum.h"
#include "libsersi/common/VariableDatum.h"
#include "libsersi/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.12.7: Response from an entity to an action request PDU. COMPLETE

class ActionResponseReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** request ID */
  uint32_t request_id_;

  /** status of response */
  uint32_t response_status_;

  /** Fixed datum record count */
  uint32_t number_of_fixed_datum_records_;

  /** variable datum record count */
  uint32_t number_of_variable_datum_records_;

  /** Fixed datum records */
  std::vector<FixedDatum> fixed_datum_records_;

  /** Variable datum records */
  std::vector<VariableDatum> variable_datum_records_;

 public:
  ActionResponseReliablePdu();
  ~ActionResponseReliablePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] uint32_t GetResponseStatus() const;
  void SetResponseStatus(uint32_t value);

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

  bool operator==(const ActionResponseReliablePdu& rhs) const;
};
}  // namespace dis
