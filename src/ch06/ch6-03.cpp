#include <cassert> // for assert
#include <cstdint> // for std::int64_t
#include <iostream>

// note: exp must be non-negative
// note: does not perform range/overflow checking, use with caution
constexpr std::int64_t powint(std::int64_t base, int exp)
{
    assert(exp >= 0 && "powint: exp parameter has negative value");

    // Handle 0 case
    if (base == 0)
        return (exp == 0) ? 1 : 0;

    std::int64_t result{ 1 };
    while (exp > 0)
    {
        if (exp & 1)  // if exp is odd
            result *= base;
        exp /= 2;
        base *= base;
    }

    return result;
}

int main()
{
    std::cout << powint(7, 12) << '\n'; // 7 to the 12th power

    return 0;
}

// don't worry if you don't understand how this function works, we will learn about asserts in ch 9