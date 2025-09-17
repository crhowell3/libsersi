#pragma once

#include <array>

#include "sersi/utils/DataStream.hpp"

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
  Marking() {
    for (char& character : characters_) {
      character = 0;
    }
  }
  ~Marking() = default;

  void Marshal(DataStream& data_stream) const {
    data_stream << character_set_;

    for (std::size_t idx = 0; idx < kCharacters; idx++) {
      data_stream << characters_[idx];
    }
  }
  void Unmarshal(DataStream& data_stream) {
    data_stream >> character_set_;

    for (std::size_t idx = 0; idx < kCharacters; idx++) {
      data_stream >> characters_[idx];
    }
  }

  [[nodiscard]] uint8_t GetCharacterSet() const { return character_set_; }
  void SetCharacterSet(uint8_t value) { character_set_ = value; }

  std::array<char, kCharacters> GetCharacters() { return characters_; }
  [[nodiscard]] const std::array<char, kCharacters>& GetCharacters() const {
    return characters_;
  }
  void SetCharacters(const char* value) {
    for (auto i = 0; i < characters_.size(); ++i) {
      characters_[i] = value[i];
    }
  }
  void SetByStringCharacters(const char* value) {
    std::strncpy(characters_.data(), value, kCharacters - 1);
    characters_[kCharacters - 1] = '\0';
  }

  [[nodiscard]] std::size_t GetMarshalledSize() const {
    return sizeof(character_set_) + characters_.size();
  }

  bool operator==(const Marking& rhs) const {
    return character_set_ == rhs.character_set_ &&
           characters_ == rhs.characters_;
  }
};
}  // namespace dis
