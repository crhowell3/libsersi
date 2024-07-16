#pragma once

#include <cstddef>
#include <vector>

#include "libsersi/utils/DataStream.h"

// length in bytes for the variable data. This should be a dynamically allocated
// array.
#define STATIC_ARRAY_LENGTH 128

namespace dis {
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
  VariableDatum();
  ~VariableDatum();

  void Marshal(dis::DataStream& data_stream) const;
  void Unmarshal(dis::DataStream& data_stream);

  [[nodiscard]] uint32_t GetVariableDatumId() const;
  void SetVariableDatumId(uint32_t value);

  [[nodiscard]] uint32_t GetVariableDatumLength() const;
  void SetVariableDatumLength(uint32_t value);

  char* GetVariableDatums();
  [[nodiscard]] const char* GetVariableDatums() const;
  void SetVariableDatums(const char* value, uint32_t length);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const VariableDatum& rhs) const;
};
}  // namespace dis
