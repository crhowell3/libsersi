#pragma once

#include <cstddef>

#include "libsersi/utils/DataStream.h"

namespace dis {
// 5.2.46.  Intercom communcations parameters

class IntercomCommunicationsParameters {
 private:
  /** Type of intercom parameters record */
  uint16_t record_type_;

  /** length of record */
  uint16_t record_length_;

  /** Jerks. Looks like the committee is forcing a lookup of the record type
   * parameter to find out how long the field is. This is a placeholder. */
  uint32_t record_specific_field_;

 public:
  IntercomCommunicationsParameters();
  ~IntercomCommunicationsParameters() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetRecordType() const;
  void SetRecordType(uint16_t value);

  [[nodiscard]] uint16_t GetRecordLength() const;
  void SetRecordLength(uint16_t value);

  [[nodiscard]] uint32_t GetRecordSpecificField() const;
  void SetRecordSpecificField(uint32_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const IntercomCommunicationsParameters& rhs) const;
};
}  // namespace dis
