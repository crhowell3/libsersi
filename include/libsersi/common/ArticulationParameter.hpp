#pragma once

#include <cstdint>

#include "libsersi/utils/DataStream.hpp"

namespace dis {
// Section 5.2.5. Articulation parameters for  movable parts and attached parts
// of an entity. Specifes wether or not a change has occured,  the part
// identifcation of the articulated part to which it is attached, and the type
// and value of each parameter.

class ArticulationParameter {
 private:
  uint8_t parameter_type_designator_{};

  uint8_t change_indicator_{};

  uint16_t part_attached_to_{};

  int parameter_type_{};

  double parameter_value_{};

 public:
  ArticulationParameter() = default;
  ~ArticulationParameter() = default;

  void Marshal(DataStream& data_stream) const {
   data_stream << parameter_type_designator_;
   data_stream << change_indicator_;
   data_stream << part_attached_to_;
   data_stream << parameter_type_;
   data_stream << parameter_value_;
  }

void Unmarshal(DataStream& data_stream) {
  data_stream >> parameter_type_designator_;
  data_stream >> change_indicator_;
  data_stream >> part_attached_to_;
  data_stream >> parameter_type_;
  data_stream >> parameter_value_;
}

[[nodiscard]] auto GetParameterTypeDesignator() const -> uint8_t {
  return parameter_type_designator_;
}

void SetParameterTypeDesignator(uint8_t value) {
  parameter_type_designator_ = value;
}

[[nodiscard]] auto GetChangeIndicator() const -> uint8_t {
  return change_indicator_;
}

void SetChangeIndicator(uint8_t value) {
  change_indicator_ = value;
}

[[nodiscard]] auto GetPartAttachedTo() const -> uint16_t {
  return part_attached_to_;
}

void SetPartAttachedTo(uint16_t value) {
  part_attached_to_ = value;
}

[[nodiscard]] auto GetParameterType() const -> int { return parameter_type_; }

void SetParameterType(int value) { parameter_type_ = value; }

[[nodiscard]] auto GetParameterValue() const -> double{
  return parameter_value_;
}

void SetParameterValue(double value) {
  parameter_value_ = value;
}
auto operator==(const ArticulationParameter& rhs) const -> bool {
  return parameter_type_designator_ == rhs.parameter_type_designator_ &&
         change_indicator_ == rhs.change_indicator_ &&
         part_attached_to_ == rhs.part_attached_to_ &&
         parameter_type_ == rhs.parameter_type_ &&
         parameter_value_ == rhs.parameter_value_;
}

[[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
  return sizeof(parameter_type_designator_) +
         sizeof(change_indicator_) + sizeof(part_attached_to_) +
         sizeof(parameter_type_) + sizeof(parameter_value_);
}
};

}  // namespace dis
