#include "libsersi/entity_management/NamedLocation.h"

namespace dis {
NamedLocation::NamedLocation() : station_name_(0), station_number_(0) {}

uint16_t NamedLocation::GetStationName() const { return station_name_; }

void NamedLocation::SetStationName(uint16_t value) { station_name_ = value; }

uint16_t NamedLocation::GetStationNumber() const { return station_number_; }

void NamedLocation::SetStationNumber(uint16_t value) {
  station_number_ = value;
}

void NamedLocation::Marshal(DataStream& data_stream) const {
  data_stream << station_name_;
  data_stream << station_number_;
}

void NamedLocation::Unmarshal(DataStream& data_stream) {
  data_stream >> station_name_;
  data_stream >> station_number_;
}

bool NamedLocation::operator==(const NamedLocation& rhs) const {
  bool ivars_equal = true;

  if (!(station_name_ == rhs.station_name_)) {
    ivars_equal = false;
  }
  if (!(station_number_ == rhs.station_number_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t NamedLocation::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(station_name_) + sizeof(station_number_);
  return marshal_size;
}

}  // namespace dis
