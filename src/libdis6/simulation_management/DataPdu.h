#pragma once

#include <vector>

#include "libdis6/common/FixedDatum.h"
#include "libdis6/common/VariableDatum.h"
#include "libdis6/simulation_management/SimulationManagementFamilyPdu.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.3.6.10. Information issued in response to a data query pdu or a set
// data pdu is communicated using a data pdu. COMPLETE

class DataPdu final : public SimulationManagementFamilyPdu {
 private:
  /** ID of request */
  uint32_t request_id_;

  /** padding */
  uint32_t padding1_;

  /** Number of fixed datum records */
  uint32_t number_of_fixed_datum_records_;

  /** Number of variable datum records */
  uint32_t number_of_variable_datum_records_;

  /** variable length list of fixed datums */
  std::vector<FixedDatum> fixed_datums_;

  /** variable length list of variable length datums */
  std::vector<VariableDatum> variable_datums_;

 public:
  DataPdu();
  ~DataPdu() final;

  void Marshal(DataStream& data_stream) const final;
  void Unmarshal(DataStream& data_stream) final;

  [[nodiscard]] uint32_t GetRequestId() const;
  void SetRequestId(uint32_t value);

  [[nodiscard]] uint32_t GetPadding1() const;
  void SetPadding1(uint32_t value);

  [[nodiscard]] uint32_t GetNumberOfFixedDatumRecords() const;

  [[nodiscard]] uint32_t GetNumberOfVariableDatumRecords() const;

  std::vector<FixedDatum>& GetFixedDatums();
  [[nodiscard]] const std::vector<FixedDatum>& GetFixedDatums() const;
  void SetFixedDatums(const std::vector<FixedDatum>& value);

  std::vector<VariableDatum>& GetVariableDatums();
  [[nodiscard]] const std::vector<VariableDatum>& GetVariableDatums() const;
  void SetVariableDatums(const std::vector<VariableDatum>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const final;

  bool operator==(const DataPdu& rhs) const;
};
}  // namespace dis
