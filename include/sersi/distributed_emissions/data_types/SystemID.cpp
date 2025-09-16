#include "libsersi/distributed_emissions/SystemID.h"

namespace dis {
SystemID::SystemID()
    : system_type_(0), system_name_(0), system_mode_(0), change_options_(0) {}

uint16_t SystemID::GetSystemType() const { return system_type_; }

void SystemID::SetSystemType(uint16_t value) { system_type_ = value; }

uint16_t SystemID::GetSystemName() const { return system_name_; }

void SystemID::SetSystemName(uint16_t value) { system_name_ = value; }

uint8_t SystemID::GetSystemMode() const { return system_mode_; }

void SystemID::SetSystemMode(uint8_t value) { system_mode_ = value; }

uint8_t SystemID::GetChangeOptions() const { return change_options_; }

void SystemID::SetChangeOptions(uint8_t value) { change_options_ = value; }

void SystemID::Marshal(DataStream& data_stream) const {
  data_stream << system_type_;
  data_stream << system_name_;
  data_stream << system_mode_;
  data_stream << change_options_;
}

void SystemID::Unmarshal(DataStream& data_stream) {
  data_stream >> system_type_;
  data_stream >> system_name_;
  data_stream >> system_mode_;
  data_stream >> change_options_;
}

bool SystemID::operator==(const SystemID& rhs) const {
  bool ivars_equal = true;

  if (!(system_type_ == rhs.system_type_)) {
    ivars_equal = false;
  }
  if (!(system_name_ == rhs.system_name_)) {
    ivars_equal = false;
  }
  if (!(system_mode_ == rhs.system_mode_)) {
    ivars_equal = false;
  }
  if (!(change_options_ == rhs.change_options_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t SystemID::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(system_type_) + sizeof(system_name_) +
                             sizeof(system_mode_) + sizeof(change_options_);
  return marshal_size;
}

}  // namespace dis
