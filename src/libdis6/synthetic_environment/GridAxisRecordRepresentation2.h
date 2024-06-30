#pragma once

#include <vector>

#include "libdis6/synthetic_environment/GridAxisRecord.h"
#include "libdis6/utils/DataStream.h"

namespace dis {
// 5.2.44: Grid data record, representation 1

class GridAxisRecordRepresentation2 : public GridAxisRecord {
 private:
  /** number of values */
  uint16_t number_of_values_;

  /** variable length list of data parameters ^^^this is wrong--need padding as
   * well */
  std::vector<uint32_t> data_values_;

 public:
  GridAxisRecordRepresentation2();
  ~GridAxisRecordRepresentation2() override;

  void Marshal(dis::DataStream& data_stream) const override;
  void Unmarshal(dis::DataStream& data_stream) override;

  [[nodiscard]] uint16_t GetNumberOfValues() const;

  std::vector<uint32_t>& GetDataValues();
  [[nodiscard]] const std::vector<uint32_t>& GetDataValues() const;
  void SetDataValues(const std::vector<uint32_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const GridAxisRecordRepresentation2& rhs) const;
};
}  // namespace dis
