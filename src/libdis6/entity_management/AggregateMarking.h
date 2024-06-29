#pragma once

#include <array>
#include <cstddef>

#include "dis6/utils/DataStream.h"

namespace dis {
// Section 5.2.37. Specifies the character set used inthe first byte, followed
// by up to 31 characters of text data.

constexpr auto kAggregateCharacters = 31;

class AggregateMarking {
 private:
  /** The character set */
  uint8_t character_set_;

  /** The characters */
  std::array<char, kAggregateCharacters> characters_;

 public:
  AggregateMarking();
  ~AggregateMarking() = default;

  void Marshal(DataStream& data_stream) const;
  void Unmarshal(DataStream& data_stream);

  [[nodiscard]] uint8_t GetCharacterSet() const;
  void SetCharacterSet(uint8_t value);

  std::array<char, kAggregateCharacters> GetCharacters();
  [[nodiscard]] const std::array<char, kAggregateCharacters>& GetCharacters()
      const;
  void SetCharacters(const char* value);

  [[nodiscard]] std::size_t GetMarshalledSize() const;

  bool operator==(const AggregateMarking& rhs) const;
};
}  // namespace dis
