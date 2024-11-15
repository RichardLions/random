#pragma once

#include <random>

namespace Random
{
    using RandomGenerator = std::mt19937;
    RandomGenerator& GetRandomGenerator();

    /// Returns true/false
    bool RandomBool();

    /// Returns a value between and including min~max
    int32_t RandomInRange(int32_t min, int32_t max);

    /// Returns a value between and including min~max
    float_t RandomInRange(float_t min, float_t max);

    template<class RandomAccessIterator>
    void Shuffle(RandomAccessIterator first, RandomAccessIterator last)
    {
        std::shuffle(first, last, GetRandomGenerator());
    }
}
