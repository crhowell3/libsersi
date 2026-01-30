#include "common/SimulationAddress.hpp"

namespace dis {
SimulationAddress::SimulationAddress() : site_(0), application_(0) {}

uint16_t SimulationAddress::GetSite() const { return site_; }

void SimulationAddress::SetSite(uint16_t value) { site_ = value; }

uint16_t SimulationAddress::GetApplication() const { return application_; }

void SimulationAddress::SetApplication(uint16_t value) { application_ = value; }

Result<void, std::string> SimulationAddress::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << site_;
  byte_buffer << application_;

  return Result<void, std::string>::Ok();
}

Result<void, std::string> SimulationAddress::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> site_;
  byte_buffer >> application_;

  return Result<void, std::string>::Ok();
}

bool SimulationAddress::operator==(const SimulationAddress& rhs) const {
  bool ivars_equal = true;

  if (!(site_ == rhs.site_)) {
    ivars_equal = false;
  }
  if (!(application_ == rhs.application_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t SimulationAddress::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(site_) + sizeof(application_);
  return marshal_size;
}

}  // namespace dis
