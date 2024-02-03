#pragma once

#include <cstddef>

#include "dis6/common/Vector3Double.h"
#include "dis6/common/Vector3Float.h"
#include "dis6/utils/DataStream.h"

namespace dis {
// 5.2.3: location of the radiating portion of the antenna, specified in world
// coordinates and entity coordinates.

class AntennaLocation {
 private:
  /// Location of the radiating portion of the antenna in world coordinates
  Vector3Double antenna_location_;

  /// Location of the radiating portion of the antenna in entity coordinates
  Vector3Float relative_antenna_location_;

 public:
  AntennaLocation();
  ~AntennaLocation() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  Vector3Double& GetAntennaLocation();
  [[nodiscard]] const Vector3Double& GetAntennaLocation() const;
  void SetAntennaLocation(const Vector3Double& value);

  Vector3Float& GetRelativeAntennaLocation();
  [[nodiscard]] const Vector3Float& GetRelativeAntennaLocation() const;
  void SetRelativeAntennaLocation(const Vector3Float& value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AntennaLocation& rhs) const;
};
}  // namespace dis
