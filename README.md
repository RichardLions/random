# Random

## Features

Random bool, int32_t and float_t:

```cpp
// Returns true/false
const bool randomBool{Random::RandomBool()};

// Returns 0/1
const int32_t randomInt32{Random::RandomInRange(0, 1)};

// Returns 0.0f~1.0f
const float_t randomFloat{Random::RandomInRange(0.0f, 1.0f)};
```

### TODO
- [ ] Unit Tests
- [ ] Support More Types
