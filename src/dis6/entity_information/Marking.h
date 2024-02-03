#pragma once

#include <array>

#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.2.15. Specifies the character set used inthe first byte, followed
// by 11 characters of text data.

constexpr auto kCharacters = 11;

class Marking {
 private:
  /** The character set */
  uint8_t character_set_;

  /** The characters */
  std::array<char, kCharacters> characters_;

 public:
  Marking();
  ~Marking() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetCharacterSet() const;
  void SetCharacterSet(uint8_t value);

  std::array<char, kCharacters> GetCharacters();
  [[nodiscard]] const std::array<char, kCharacters>& GetCharacters() const;
  void SetCharacters(const char* value);
  void SetByStringCharacters(const char* value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const Marking& rhs) const;
};
}  // namespace dis
