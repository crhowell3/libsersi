#pragma once

#include <cstddef>

#include "libsersi/utils/DataStream.h"

namespace dis {
// discrete ostional relationsihip

class NamedLocation {
 private:
  /** station name enumeration */
  uint16_t station_name_;

  /** station number */
  uint16_t station_number_;

 public:
  NamedLocation();
  ~NamedLocation() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetStationName() const;
  void SetStationName(uint16_t value);

  [[nodiscard]] uint16_t GetStationNumber() const;
  void SetStationNumber(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const NamedLocation& rhs) const;
};
}  // namespace dis
