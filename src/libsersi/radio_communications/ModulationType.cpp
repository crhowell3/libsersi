#include "libsersi/radio_communications/ModulationType.h"

namespace dis {
ModulationType::ModulationType()
    : spread_spectrum_(0), major_(0), detail_(0), system_(0) {}

uint16_t ModulationType::GetSpreadSpectrum() const { return spread_spectrum_; }

void ModulationType::SetSpreadSpectrum(uint16_t value) {
  spread_spectrum_ = value;
}

uint16_t ModulationType::GetMajor() const { return major_; }

void ModulationType::SetMajor(uint16_t value) { major_ = value; }

uint16_t ModulationType::GetDetail() const { return detail_; }

void ModulationType::SetDetail(uint16_t value) { detail_ = value; }

uint16_t ModulationType::GetSystem() const { return system_; }

void ModulationType::SetSystem(uint16_t value) { system_ = value; }

void ModulationType::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << spread_spectrum_;
  byte_buffer << major_;
  byte_buffer << detail_;
  byte_buffer << system_;
}

void ModulationType::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> spread_spectrum_;
  byte_buffer >> major_;
  byte_buffer >> detail_;
  byte_buffer >> system_;
}

bool ModulationType::operator==(const ModulationType& rhs) const {
  bool ivars_equal = true;

  if (!(spread_spectrum_ == rhs.spread_spectrum_)) {
    ivars_equal = false;
  }
  if (!(major_ == rhs.major_)) {
    ivars_equal = false;
  }
  if (!(detail_ == rhs.detail_)) {
    ivars_equal = false;
  }
  if (!(system_ == rhs.system_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t ModulationType::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(spread_spectrum_) + sizeof(major_) +
                             sizeof(detail_) + sizeof(system_);

  return marshal_size;
}

}  // namespace dis
