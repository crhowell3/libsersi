#include "dis6/radio_communications/AntennaLocation.h"

namespace dis {
AntennaLocation::AntennaLocation() = default;

Vector3Double& AntennaLocation::GetAntennaLocation() {
  return antenna_location_;
}

const Vector3Double& AntennaLocation::GetAntennaLocation() const {
  return antenna_location_;
}

void AntennaLocation::SetAntennaLocation(const Vector3Double& value) {
  antenna_location_ = value;
}

Vector3Float& AntennaLocation::GetRelativeAntennaLocation() {
  return relative_antenna_location_;
}

const Vector3Float& AntennaLocation::GetRelativeAntennaLocation() const {
  return relative_antenna_location_;
}

void AntennaLocation::SetRelativeAntennaLocation(const Vector3Float& value) {
  relative_antenna_location_ = value;
}

void AntennaLocation::Marshal(DataStream& data_stream) const {
  antenna_location_.Marshal(data_stream);
  relative_antenna_location_.Marshal(data_stream);
}

void AntennaLocation::Unmarshal(DataStream& data_stream) {
  antenna_location_.Unmarshal(data_stream);
  relative_antenna_location_.Unmarshal(data_stream);
}

bool AntennaLocation::operator==(const AntennaLocation& rhs) const {
  bool ivars_equal = true;

  if (!(antenna_location_ == rhs.antenna_location_)) {
    ivars_equal = false;
  }
  if (!(relative_antenna_location_ == rhs.relative_antenna_location_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t AntennaLocation::GetMarshalledSize() const {
  std::size_t marshal_size = antenna_location_.GetMarshalledSize() +
                             relative_antenna_location_.GetMarshalledSize();
  return marshal_size;
}

}  // namespace dis
