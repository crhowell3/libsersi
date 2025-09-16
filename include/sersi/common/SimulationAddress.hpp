#pragma once

#include <cstddef>

#include "libsersi/utils/DataStream.hpp"

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
  SimulationAddress() = default;
  ~SimulationAddress() = default;

  void Marshal(dis::DataStream& data_stream) const {
    data_stream << site_;
    data_stream << application_;
  }
  void Unmarshal(dis::DataStream& data_stream) {
    data_stream >> site_;
    data_stream >> application_;
  }

  [[nodiscard]] uint16_t GetSite() const { return site_; }
  void SetSite(uint16_t value) { site_ = value; }

  [[nodiscard]] uint16_t GetApplication() const { return application_; }
  void SetApplication(uint16_t value) { application_ = value; }

  [[nodiscard]] std::size_t GetMarshalledSize() const {
    return sizeof(site_) + sizeof(application_);
  }

  bool operator==(const SimulationAddress& rhs) const {
    return site_ == rhs.site_ && application_ == rhs.application_;
  }
};
}  // namespace dis
