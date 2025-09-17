#pragma once

#include <cstdint>

#include "libsersi/utils/Endian.hpp"

namespace dis {
/// the interface class for handling read operations.
class IBufferProcessor {
 public:
  virtual ~IBufferProcessor() = default;
  virtual void Process(const char* buf, uint32_t size, Endian e) = 0;
};
}  // namespace dis
