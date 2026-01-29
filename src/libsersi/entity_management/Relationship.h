#pragma once

#include <cstddef>

#include "libsersi/utils/ByteBuffer.hpp"

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

  Result<void, std::string> Marshal(ByteBuffer& byte_buffer) const;
  Result<void, std::string> Unmarshal(ByteBuffer& byte_buffer);

  [[nodiscard]] uint16_t GetNature() const;
  void SetNature(uint16_t value);

  [[nodiscard]] uint16_t GetPosition() const;
  void SetPosition(uint16_t value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Relationship& rhs) const;
};
}  // namespace dis
