#include "libsersi/common/ArticulationParameter.h"

namespace dis {

ArticulationParameter::ArticulationParameter()
    : parameter_type_designator_(0),
      change_indicator_(0),
      part_attached_to_(0),
      parameter_type_(0),
      parameter_value_(0.0) {}

uint8_t ArticulationParameter::GetParameterTypeDesignator() const { return parameter_type_designator_; }

void ArticulationParameter::SetParameterTypeDesignator(uint8_t value) { parameter_type_designator_ = value; }

uint8_t ArticulationParameter::GetChangeIndicator() const { return change_indicator_; }

void ArticulationParameter::SetChangeIndicator(uint8_t value) { change_indicator_ = value; }

uint16_t ArticulationParameter::GetPartAttachedTo() const { return part_attached_to_; }

void ArticulationParameter::SetPartAttachedTo(uint16_t value) { part_attached_to_ = value; }

int ArticulationParameter::GetParameterType() const { return parameter_type_; }

void ArticulationParameter::SetParameterType(int value) { parameter_type_ = value; }

double ArticulationParameter::GetParameterValue() const { return parameter_value_; }

void ArticulationParameter::SetParameterValue(double value) { parameter_value_ = value; }

Result<void, std::string> ArticulationParameter::Marshal(ByteBuffer& byte_buffer) const {
  byte_buffer << parameter_type_designator_;
  byte_buffer << change_indicator_;
  byte_buffer << part_attached_to_;
  byte_buffer << parameter_type_;
  byte_buffer << parameter_value_;

  return Result<void, std::string>::Ok();
}

Result<void, std::string> ArticulationParameter::Unmarshal(ByteBuffer& byte_buffer) {
  byte_buffer >> parameter_type_designator_;
  byte_buffer >> change_indicator_;
  byte_buffer >> part_attached_to_;
  byte_buffer >> parameter_type_;
  byte_buffer >> parameter_value_;

  return Result<void, std::string>::Ok();
}

bool ArticulationParameter::operator==(const ArticulationParameter& rhs) const {
  bool ivars_equal = true;

  if (!(parameter_type_designator_ == rhs.parameter_type_designator_)) {
    ivars_equal = false;
  }
  if (!(change_indicator_ == rhs.change_indicator_)) {
    ivars_equal = false;
  }
  if (!(part_attached_to_ == rhs.part_attached_to_)) {
    ivars_equal = false;
  }
  if (!(parameter_type_ == rhs.parameter_type_)) {
    ivars_equal = false;
  }
  if (!(parameter_value_ == rhs.parameter_value_)) {
    ivars_equal = false;
  }

  return ivars_equal;
}

std::size_t ArticulationParameter::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(parameter_type_designator_) + sizeof(change_indicator_) +
                             sizeof(part_attached_to_) + sizeof(parameter_type_) + sizeof(parameter_value_);
  return marshal_size;
}

}  // namespace dis
