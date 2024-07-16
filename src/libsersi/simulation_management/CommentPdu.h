#pragma once

#include <vector>

#include "libsersi/common/FixedDatum.h"
#include "libsersi/common/VariableDatum.h"
#include "libsersi/simulation_management/SimulationManagementFamilyPdu.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.3.6.12. Arbitrary messages can be entered into the data stream via
// use of this PDU. COMPLETE

class CommentPdu final : public SimulationManagementFamilyPdu {
 private:
  /** Number of fixed datum records */
  uint32_t number_of_fixed_datum_records_;

  /** Number of variable datum records */
  uint32_t number_of_variable_datum_records_;

  /** variable length list of fixed datums */
  std::vector<FixedDatum> fixed_datums_;

  /** variable length list of variable length datums */
  std::vector<VariableDatum> variable_datums_;

 public:
  CommentPdu();
  ~CommentPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint32_t GetNumberOfFixedDatumRecords() const;

  [[nodiscard]] uint32_t GetNumberOfVariableDatumRecords() const;

  std::vector<FixedDatum>& GetFixedDatums();
  [[nodiscard]] const std::vector<FixedDatum>& GetFixedDatums() const;
  void SetFixedDatums(const std::vector<FixedDatum>& value);

  std::vector<VariableDatum>& GetVariableDatums();
  [[nodiscard]] const std::vector<VariableDatum>& GetVariableDatums() const;
  void SetVariableDatums(const std::vector<VariableDatum>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const CommentPdu& rhs) const;
};
}  // namespace dis
