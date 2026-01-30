#pragma once

#include <vector>

#include common/FixedDatum.h"
#include common/VariableDatum.h"
#include simulation_management_reliable/SimulationManagementWithReliabilityFamilyPdu.h"
#include utils/ByteBuffer.hpp"

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

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

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
