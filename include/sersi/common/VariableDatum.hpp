#pragma once

#include <cstddef>
#include <iostream>
#include <vector>

#include "libsersi/utils/DataStream.hpp"

namespace dis {

constexpr auto kBits = 8;

// Section 5.2.32. Variable Datum Record

class VariableDatum {
 private:
  /** ID of the variable datum */
  uint32_t variable_datum_id_;

  /** length of the variable datums */
  uint32_t variable_datum_length_;

  /** The variable datum data.*/
  std::vector<char> variable_datums_;
  uint32_t array_length_;

 public:
  VariableDatum() = default;
  ~VariableDatum() = default;

  void Marshal(dis::DataStream& data_stream) const {
    data_stream << variable_datum_id_;
    data_stream << variable_datum_length_;

    for (auto i = 0; i < array_length_; ++i) {
      data_stream << variable_datums_[i];
    }
  }
  void Unmarshal(dis::DataStream& data_stream) {
    data_stream >> variable_datum_id_;
    data_stream >> variable_datum_length_;

    const auto byte_length = variable_datum_length_ / kBits;
    auto chunks = byte_length / kBits;
    if (byte_length % kBits > 0) {
      chunks++;
    }
    array_length_ = chunks * kBits;

    if (variable_datums_.size() < array_length_) {
      try {
        variable_datums_.resize(array_length_);
      } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return;
      }
    }

    for (auto i = 0; i < array_length_; ++i) {
      data_stream >> variable_datums_[i];
    }
  }

  [[nodiscard]] auto GetVariableDatumId() const -> uint32_t {
    return variable_datum_id_;
  }
  void SetVariableDatumId(uint32_t value) { variable_datum_id_ = value; }

  [[nodiscard]] auto GetVariableDatumLength() const -> uint32_t {
    return variable_datum_length_;
  }
  void SetVariableDatumLength(uint32_t value) {
    variable_datum_length_ = value;
  }

  auto GetVariableDatums() -> char* { return variable_datums_.data(); }
  [[nodiscard]] auto GetVariableDatums() const -> const char* {
    return variable_datums_.data();
  }

  void SetVariableDatums(const char* value, uint32_t length) {
    variable_datum_length_ = length * kBits;

    uint32_t chunks = length / kBits;
    const auto remainder = length % kBits;
    if (remainder > 0) {
      chunks++;
    }
    array_length_ = chunks * kBits;

    if (variable_datums_.size() < length) {
      try {
        variable_datums_.resize(length);
      } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return;
      }
    }

    for (auto i = 0; i < length; ++i) {
      variable_datums_[i] = value[i];
    }
    for (auto i = length; i < variable_datums_.size(); ++i) {
      variable_datums_[i] = 0;
    }
  }

  [[nodiscard]] auto GetMarshalledSize() const -> std::size_t {
    return sizeof(variable_datum_id_) + sizeof(variable_datum_length_) +
           variable_datums_.size() * sizeof(char);
  }

  auto operator==(const VariableDatum& rhs) const -> bool {
    return variable_datum_id_ == rhs.variable_datum_id_ &&
           variable_datum_length_ == rhs.variable_datum_length_ &&
           variable_datums_ == rhs.variable_datums_;
  }
};
}  // namespace dis
