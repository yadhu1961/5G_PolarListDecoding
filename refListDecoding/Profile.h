#include<chrono>
#include<cstdint>
#include<vector>

using namespace std::chrono;

// 8 Bit unsigned integer
typedef uint8_t UNS8;

typedef uint16_t UNS16;

typedef uint32_t UNS32;

//GCC built-in macros to help with branching.
#define likely(x)      __builtin_expect(!!(x), 1)
#define unlikely(x)    __builtin_expect(!!(x), 0)

//GCC primitive to make memory aligned.
//typedef uint8_t UNS8    __attribute__((aligned (32)));

//typedef uint16_t UNS16  __attribute__((aligned (32)));

//typedef uint32_t UNS32  __attribute__((aligned (32)));


using UNS8VECTOR = std::vector<UNS8>;

using UNS32VECTOR = std::vector<UNS32>;

uint8_t startTime();

uint32_t getElapsedTime(uint8_t);

