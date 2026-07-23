#include <iostream>

int main()
{
    // assume 4 byte integers
    int x {2147483647}; // the maximum value of a 4-byte signed integer
    std::cout << x << '\n';

    x = x + 1; // integer overflow, undefined behavior
    std::cout << x << '\n';

    return 0;
}
