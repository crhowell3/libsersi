#pragma once

#include "libsersi/utils/DataStream.h"

namespace dis {
// 5.2.44: Grid data record, a common abstract superclass for several subtypes

class GridAxisRecord {
 private:
  /** type of environmental sample */
  uint16_t sample_type_;

  /** value that describes data representation */
  uint16_t data_representation_;

 public:
  GridAxisRecord();
  virtual ~GridAxisRecord();

  virtual void Marshal(dis::DataStream& data_stream) const;
  virtual void Unmarshal(dis::DataStream& data_stream);

  [[nodiscard]] uint16_t GetSampleType() const;
  void SetSampleType(uint16_t value);

  [[nodiscard]] uint16_t GetDataRepresentation() const;
  void SetDataRepresentation(uint16_t value);

  [[nodiscard]] virtual std::size_t GetMarshalledSize() const;

  bool operator==(const GridAxisRecord& rhs) const;
};
}  // namespace dis
