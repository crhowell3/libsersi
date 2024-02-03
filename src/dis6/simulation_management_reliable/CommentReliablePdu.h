#pragma once

#include <vector>

#include "dis6/common/FixedDatum.h"
#include "dis6/common/VariableDatum.h"
#include "dis6/simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.3.12.12: Arbitrary messages. Only reliable this time. Neds manual
// intervention to fix padding in variable datums. UNFINISHED

class CommentReliablePdu final
    : public SimulationManagementWithReliabilityFamilyPdu {
 private:
  /** Fixed datum record count */
  uint32_t number_of_fixed_datum_records_;

  /** variable datum record count */
  uint32_t number_of_variable_datum_records_;

  /** Fixed datum records */
  std::vector<FixedDatum> fixed_datum_records_;

  /** Variable datum records */
  std::vector<VariableDatum> variable_datum_records_;

 public:
  CommentReliablePdu();
  ~CommentReliablePdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

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

  bool operator==(const CommentReliablePdu& rhs) const;
};
}  // namespace dis
