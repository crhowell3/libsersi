#include "dis6/entity_information/Marking.h"

#include <cstring>

namespace dis {
Marking::Marking() : character_set_(0) {
  // Initialize fixed length array
  for (char& character : characters_) {
    character = 0;
  }
}

uint8_t Marking::GetCharacterSet() const { return character_set_; }

void Marking::SetCharacterSet(uint8_t value) { character_set_ = value; }

std::array<char, kCharacters> Marking::GetCharacters() { return characters_; }

const std::array<char, kCharacters>& Marking::GetCharacters() const {
  return characters_;
}

void Marking::SetCharacters(const char* value) {
  for (auto i = 0; i < characters_.size(); ++i) {
    characters_[i] = value[i];
  }
}

// An alternate method to set the value if this could be a string. This is not
// strictly comnpliant with the DIS standard.
void Marking::SetByStringCharacters(const char* value) {
  std::strncpy(characters_.data(), value, kCharacters - 1);
  characters_[kCharacters - 1] = '\0';
}

void Marking::Marshal(DataStream& data_stream) const {
  data_stream << character_set_;

  for (std::size_t idx = 0; idx < kCharacters; idx++) {
    data_stream << characters_[idx];
  }
}

void Marking::Unmarshal(DataStream& data_stream) {
  data_stream >> character_set_;

  for (std::size_t idx = 0; idx < kCharacters; idx++) {
    data_stream >> characters_[idx];
  }
}

bool Marking::operator==(const Marking& rhs) const {
  bool ivars_equal = true;

  if (!(character_set_ == rhs.character_set_)) {
    ivars_equal = false;
  }

  for (uint8_t idx = 0; idx < kCharacters; idx++) {
    if (!(characters_[idx] == rhs.characters_[idx])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t Marking::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(character_set_) + characters_.size();

  return marshal_size;
}

}  // namespace dis
