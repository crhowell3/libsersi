#pragma once

#include <vector>

#include "libsersi/synthetic_environment/GridAxisRecord.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// 5.2.44: Grid data record, representation 1

class GridAxisRecordRepresentation1 : public GridAxisRecord {
 private:
  /** constant scale factor */
  float field_scale_;

  /** constant offset used to scale grid data */
  float field_offset_;

  /** Number of data values */
  uint16_t number_of_values_;

  /** variable length list of data parameters ^^^this is wrong--need padding as
   * well */
  std::vector<uint16_t> data_values_;

 public:
  GridAxisRecordRepresentation1();
  ~GridAxisRecordRepresentation1() override;

  void Marshal(dis::DataStream& data_stream) const override;
  void Unmarshal(dis::DataStream& data_stream) override;

  [[nodiscard]] float GetFieldScale() const;
  void SetFieldScale(float value);

  [[nodiscard]] float GetFieldOffset() const;
  void SetFieldOffset(float value);

  [[nodiscard]] uint16_t GetNumberOfValues() const;

  std::vector<uint16_t>& GetDataValues();
  [[nodiscard]] const std::vector<uint16_t>& GetDataValues() const;
  void SetDataValues(const std::vector<uint16_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const GridAxisRecordRepresentation1& rhs) const;
};
}  // namespace dis
