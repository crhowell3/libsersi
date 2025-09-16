#pragma once

#include <cstddef>
#include <cstdint>

#include "Enumerations.hpp"
#include "sersi/utils/DataStream.hpp"

namespace dis {
// Record sets, used in transfer control request PDU

class RecordSet {
 private:
  /** record ID */
  VariableRecordTypes record_id_;

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
  RecordSet() = default;
  ~RecordSet() = default;

  void Marshal(dis::DataStream& data_stream) const {
    data_stream << static_cast<uint32_t>(record_id_);
    data_stream << record_set_serial_number_;
    data_stream << record_length_;
    data_stream << record_count_;
    data_stream << record_values_;
    data_stream << pad4_;
  }

  void Unmarshal(dis::DataStream& data_stream) {
    data_stream >> record_id_;
    data_stream >> record_set_serial_number_;
    data_stream >> record_length_;
    data_stream >> record_count_;
    data_stream >> record_values_;
    data_stream >> pad4_;
  }

  [[nodiscard]] auto GetRecordId() const -> VariableRecordTypes {
    return record_id_;
  }
  void SetRecordId(VariableRecordTypes value) { record_id_ = value; }

  [[nodiscard]] auto GetRecordSetSerialNumber() const -> uint32_t {
    return record_set_serial_number_;
  }
  void SetRecordSetSerialNumber(uint32_t value) {
    record_set_serial_number_ = value;
  }

  [[nodiscard]] auto GetRecordLength() const -> uint16_t {
    return record_length_;
  }
  void SetRecordLength(uint16_t value) { record_length_ = value; }

  [[nodiscard]] auto GetRecordCount() const -> uint16_t {
    return record_count_;
  }
  void SetRecordCount(uint16_t value) { record_count_ = value; }

  [[nodiscard]] auto GetRecordValues() const -> uint16_t {
    return record_values_;
  }
  void SetRecordValues(uint16_t value) { record_values_ = value; }

  [[nodiscard]] auto GetPad4() const -> uint8_t { return pad4_; }
  void SetPad4(uint8_t value) { pad4_ = value; }

  [[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
    return sizeof(record_id_) + sizeof(record_set_serial_number_) +
           sizeof(record_length_) + sizeof(record_count_) +
           sizeof(record_values_) + sizeof(pad4_);
  }

  auto operator==(const RecordSet& rhs) const -> bool {
    return record_id_ == rhs.record_id_ &&
           record_set_serial_number_ == rhs.record_set_serial_number_ &&
           record_length_ == rhs.record_length_ &&
           record_count_ == rhs.record_count_ &&
           record_values_ == rhs.record_values_ && pad4_ == rhs.pad4_;
  }
};
}  // namespace dis
