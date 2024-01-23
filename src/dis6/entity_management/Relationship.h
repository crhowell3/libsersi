#pragma once

#include <cstddef>

#include "dis6/utils/DataStream.h"

namespace dis {
// 5.2.56. Purpose for joinging two entities

class Relationship {
 private:
  /** Nature of join */
  uint16_t nature_;

  /** position of join */
  uint16_t position_;

 public:
  Relationship();
  ~Relationship() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint16_t GetNature() const;
  void SetNature(uint16_t value);

  [[nodiscard]] uint16_t GetPosition() const;
  void SetPosition(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Relationship& rhs) const;
};
}  // namespace dis
