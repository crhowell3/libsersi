#pragma once

#include <cstdint>

#include "libsersi/utils/ByteBuffer.hpp"

namespace dis {
// Section 5.2.5. Articulation parameters for  movable parts and attached parts
// of an entity. Specifes wether or not a change has occured,  the part
// identifcation of the articulated part to which it is attached, and the type
// and value of each parameter.

class ArticulationParameter {
 private:
  uint8_t parameter_type_designator_;

  uint8_t change_indicator_;

  uint16_t part_attached_to_;

  int parameter_type_;

  double parameter_value_;

 public:
  ArticulationParameter();
  ~ArticulationParameter() = default;

  void Marshal(ByteBuffer& byte_buffer) const;
  void Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] uint8_t GetParameterTypeDesignator() const;
  void SetParameterTypeDesignator(uint8_t value);

  [[nodiscard]] uint8_t GetChangeIndicator() const;
  void SetChangeIndicator(uint8_t value);

  [[nodiscard]] uint16_t GetPartAttachedTo() const;
  void SetPartAttachedTo(uint16_t value);

  [[nodiscard]] int GetParameterType() const;
  void SetParameterType(int value);

  [[nodiscard]] double GetParameterValue() const;
  void SetParameterValue(double value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const ArticulationParameter& rhs) const;
};

}  // namespace dis
