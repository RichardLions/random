#pragma once

#include "random.h"

namespace Random
{
    RandomGenerator& GetRandomGenerator()
    {
        static std::random_device device{};
        static RandomGenerator generator{device()}; // Seed
        return generator;
    }

    bool RandomBool()
    {
        static constexpr double_t probability{0.5};
        static std::bernoulli_distribution distribution{probability};
        return distribution(GetRandomGenerator());
    }

    bool RandomBool(const float_t probability)
    {
        std::bernoulli_distribution distribution{probability};
        return distribution(GetRandomGenerator());
    }

    int32_t RandomInRange(const int32_t min, const int32_t max)
    {
        std::uniform_int_distribution<int32_t> distribution(min, max);
        return distribution(GetRandomGenerator());
    }

    float_t RandomInRange(const float_t min, const float_t max)
    {
        std::uniform_real_distribution<float_t> distribution(min, max);
        return distribution(GetRandomGenerator());
    }
}
