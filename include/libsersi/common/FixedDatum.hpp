#pragma once

#include "libsersi/utils/DataStream.h"

namespace dis {
// Section 5.2.18. Fixed Datum Record

class FixedDatum {
 private:
  /** ID of the fixed datum */
  uint32_t fixed_datum_id_;

  /** Value for the fixed datum */
  uint32_t fixed_datum_value_;

 public:
  FixedDatum() = default;
  ~FixedDatum() = default;

  void Marshal(dis::DataStream& data_stream) const {
    data_stream << fixed_datum_id_;
    data_stream << fixed_datum_value_;
  }
  void Unmarshal(dis::DataStream& data_stream) {
    data_stream >> fixed_datum_id_;
    data_stream >> fixed_datum_value_;
  }

  [[nodiscard]] auto GetFixedDatumId() const -> uint32_t {
    return fixed_datum_id_;
  }
  void SetFixedDatumId(uint32_t value) {
    fixed_datum_id_ = value;
  }

  [[nodiscard]] auto GetFixedDatumValue() const -> uint32_t {
    return fixed_datum_value_;
  }
  void SetFixedDatumValue(uint32_t value) {
    fixed_datum_value_ = value;
  }

  [[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
    return sizeof(fixed_datum_id_) + sizeof(fixed_datum_value_);
  }

  auto operator==(const FixedDatum& rhs) const -> bool {
    return fixed_datum_id_ == rhs.fixed_datum_id_ &&
           fixed_datum_value_ == rhs.fixed_datum_value_;
  }
};
}  // namespace dis
