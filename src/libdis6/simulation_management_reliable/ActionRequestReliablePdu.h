#pragma once

#include <vector>

#include "dis6/common/FixedDatum.h"
#include "dis6/common/VariableDatum.h"
#include "dis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12.6: request from a simulation manager to a managed entity to
// perform a specified action. COMPLETE

class ActionRequestReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** level of reliability service used for this transaction */
  uint8_t required_reliability_service_;

  /** padding */
  uint16_t pad1_;

  /** padding */
  uint8_t pad2_;

  /** request ID */
  uint32_t request_id_;

  /** request ID */
  uint32_t action_id_;

  /** Fixed datum record count */
  uint32_t number_of_fixed_datum_records_;

  /** variable datum record count */
  uint32_t number_of_variable_datum_records_;

  /** Fixed datum records */
  std::vector<FixedDatum> fixed_datum_records_;

  /** Variable datum records */
  std::vector<VariableDatum> variable_datum_records_;

 public:
  ActionRequestReliablePdu();
  ~ActionRequestReliablePdu() final;

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

  [[nodiscard]] uint32_t GetActionId() const;
  void SetActionId(uint32_t value);

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

  bool operator==(const ActionRequestReliablePdu& rhs) const;
};
}  // namespace dis
