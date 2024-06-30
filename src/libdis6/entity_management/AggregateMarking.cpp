#include "libdis6/entity_management/AggregateMarking.h"

namespace dis {
AggregateMarking::AggregateMarking() : character_set_(0) {
  // Initialize fixed length array
  for (char& character : characters_) {
    character = 0;
  }
}

uint8_t AggregateMarking::GetCharacterSet() const { return character_set_; }

void AggregateMarking::SetCharacterSet(uint8_t value) {
  character_set_ = value;
}

std::array<char, kAggregateCharacters> AggregateMarking::GetCharacters() {
  return characters_;
}

const std::array<char, kAggregateCharacters>& AggregateMarking::GetCharacters()
    const {
  return characters_;
}

void AggregateMarking::SetCharacters(const char* value) {
  for (auto i = 0; i < characters_.size(); i++) {
    characters_[i] = value[i];
  }
}

void AggregateMarking::Marshal(DataStream& data_stream) const {
  data_stream << character_set_;

  for (char character : characters_) {
    data_stream << character;
  }
}

void AggregateMarking::Unmarshal(DataStream& data_stream) {
  data_stream >> character_set_;

  for (char& character : characters_) {
    data_stream >> character;
  }
}

bool AggregateMarking::operator==(const AggregateMarking& rhs) const {
  bool ivars_equal = true;

  if (!(character_set_ == rhs.character_set_)) {
    ivars_equal = false;
  }

  for (auto i = 0; i < characters_.size(); ++i) {
    if (!(characters_[i] == rhs.characters_[i])) {
      ivars_equal = false;
    }
  }

  return ivars_equal;
}

std::size_t AggregateMarking::GetMarshalledSize() const {
  std::size_t marshal_size = sizeof(character_set_) + characters_.size();

  return marshal_size;
}

}  // namespace dis
