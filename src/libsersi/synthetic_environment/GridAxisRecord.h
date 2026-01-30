#pragma once

#include utils/ByteBuffer.hpp"

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

  virtual Result<void, std::string> Marshal(dis::ByteBuffer& byte_buffer) const;
  virtual Result<void, std::string> Unmarshal(dis::ByteBuffer& byte_buffer);

  [[nodiscard]] uint16_t GetSampleType() const;
  void SetSampleType(uint16_t value);

  [[nodiscard]] uint16_t GetDataRepresentation() const;
  void SetDataRepresentation(uint16_t value);

  [[nodiscard]] virtual std::size_t GetMarshalledSize() const;

  bool operator==(const GridAxisRecord& rhs) const;
};
}  // namespace dis
