#pragma once

namespace Random
{
    /// Returns true/false
    inline bool RandomBool();

    /// Returns a value between and including min~max
    inline int32_t RandomInRange(int32_t min, int32_t max);

    /// Returns a value between and including min~max
    inline float_t RandomInRange(float_t min, float_t max);
}
