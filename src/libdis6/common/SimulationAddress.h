#pragma once

#include <cstddef>

#include "libdis6/utils/DataStream.h"

namespace dis {
// Section 5.2.14.1. A Simulation Address  record shall consist of the Site
// Identification number and the Application Identification number.

class SimulationAddress {
 private:
  /** The site ID */
  uint16_t site_;

  /** The application ID */
  uint16_t application_;

 public:
  SimulationAddress();
  ~SimulationAddress() = default;

  void Marshal(dis::DataStream& data_stream) const;
  void Unmarshal(dis::DataStream& data_stream);

  [[nodiscard]] uint16_t GetSite() const;
  void SetSite(uint16_t value);

  [[nodiscard]] uint16_t GetApplication() const;
  void SetApplication(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const SimulationAddress& rhs) const;
};
}  // namespace dis
