#pragma once

#include <vector>

#include common/FixedDatum.h"
#include common/VariableDatum.h"
#include simulation_management/SimulationManagementFamilyPdu.h"
#include utils/ByteBuffer.hpp"

namespace dis {
// Section 5.3.6.8. Request for data from an entity. COMPLETE

class DataQueryPdu final : public SimulationManagementFamilyPdu {
 private:
  /** ID of request */
  uint32_t request_id_;

  /** time issues between issues of Data PDUs. Zero means send once only. */
  uint32_t time_interval_;

  /** Number of fixed datum records */
  uint32_t number_of_fixed_datum_records_;

  /** Number of variable datum records */
  uint32_t number_of_variable_datum_records_;

  /** variable length list of fixed datums */
  std::vector<FixedDatum> fixed_datums_;

  /** variable length list of variable length datums */
  std::vector<VariableDatum> variable_datums_;

 public:
  DataQueryPdu();
  ~DataQueryPdu() final;

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const final;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer) final;

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] uint32_t GetTimeInterval() const;
  void SetTimeInterval(uint32_t value);

  [[nodiscard]] uint32_t GetNumberOfFixedDatumRecords() const;

  [[nodiscard]] uint32_t GetNumberOfVariableDatumRecords() const;

  std::vector<FixedDatum>& GetFixedDatums();
  [[nodiscard]] const std::vector<FixedDatum>& GetFixedDatums() const;
  void SetFixedDatums(const std::vector<FixedDatum>& value);

  std::vector<VariableDatum>& GetVariableDatums();
  [[nodiscard]] const std::vector<VariableDatum>& GetVariableDatums() const;
  void SetVariableDatums(const std::vector<VariableDatum>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const DataQueryPdu& rhs) const;
};
}  // namespace dis
