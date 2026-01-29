#pragma once

#include <cstddef>

#include "libsersi/utils/ByteBuffer.hpp"
#include "libsersi/common/Result.hpp"

namespace dis {
// Record sets, used in transfer control request PDU

class RecordSet {
 private:
  /** record ID */
  uint32_t record_id_;

  /** record set serial number */
  uint32_t record_set_serial_number_;

  /** record length */
  uint16_t record_length_;

  /** record count */
  uint16_t record_count_;

  /** ^^^This is wrong--variable sized data records */
  uint16_t record_values_;

  /** ^^^This is wrong--variable sized padding */
  uint8_t pad4_;

 public:
  RecordSet();
  ~RecordSet() = default;

  Result<void, std::string> Marshal(dis::ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(dis::ByteBuffer& byte_buffer);

  [[nodiscard]] uint32_t GetRecordId() const;
  void SetRecordId(uint32_t value);

  [[nodiscard]] uint32_t GetRecordSetSerialNumber() const;
  void SetRecordSetSerialNumber(uint32_t value);

  [[nodiscard]] uint16_t GetRecordLength() const;
  void SetRecordLength(uint16_t value);

  [[nodiscard]] uint16_t GetRecordCount() const;
  void SetRecordCount(uint16_t value);

  [[nodiscard]] uint16_t GetRecordValues() const;
  void SetRecordValues(uint16_t value);

  [[nodiscard]] uint8_t GetPad4() const;
  void SetPad4(uint8_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const RecordSet& rhs) const;
};
}  // namespace dis
