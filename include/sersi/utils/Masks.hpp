#pragma once

#include <cstdint>

namespace dis {
/// the mask that will leave only the typemetric
/// from an integer representing the Articulation Parameter's parameter type.
/// this mask is based on the IEEE Std 1278.1-1995
const uint32_t kArticulationParameterTypeMetricMask = 0x001F;
}  // namespace dis
