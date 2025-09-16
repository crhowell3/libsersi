#pragma once

#include <cstdint>

namespace dis {
/// the order of bytes that are on the left
enum Endian : uint8_t {
  kLittle = 1,
  kBig = 0,
};

}  // namespace dis
