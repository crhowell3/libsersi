#pragma once

#include <cstddef>

#include "libsersi/utils/ByteBuffer.hpp"

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

  void Marshal(dis::ByteBuffer& byte_buffer) const;
  void Unmarshal(dis::ByteBuffer& byte_buffer);

  [[nodiscard]] uint16_t GetSite() const;
  void SetSite(uint16_t value);

  [[nodiscard]] uint16_t GetApplication() const;
  void SetApplication(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const SimulationAddress& rhs) const;
};
}  // namespace dis
