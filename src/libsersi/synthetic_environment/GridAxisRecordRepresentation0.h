#pragma once

#include <cstdint>
#include <vector>

#include "libsersi/synthetic_environment/GridAxisRecord.h"
#include "libsersi/utils/DataStream.h"

namespace dis {
// 5.2.44: Grid data record, representation 0

class GridAxisRecordRepresentation0 : public GridAxisRecord {
 private:
  /** number of bytes of environmental state data */
  uint16_t number_of_bytes_;

  /** variable length list of data parameters ^^^this is wrong--need padding as
   * well */
  std::vector<uint8_t> data_values_;

 public:
  GridAxisRecordRepresentation0();
  ~GridAxisRecordRepresentation0() override;

  void Marshal(dis::DataStream& data_stream) const override;
  void Unmarshal(dis::DataStream& data_stream) override;

  [[nodiscard]] uint16_t GetNumberOfBytes() const;

  std::vector<uint8_t>& GetDataValues();
  [[nodiscard]] const std::vector<uint8_t>& GetDataValues() const;
  void SetDataValues(const std::vector<uint8_t>& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const override;

  bool operator==(const GridAxisRecordRepresentation0& rhs) const;
};
}  // namespace dis
