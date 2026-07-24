#include <iostream>

int main()
{
    unsigned short x{65535}; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of our range
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is out of our range
    std::cout << "x is now: " << x << '\n';

    x = -1; // now it wraps from the back (max value) since negative values cant be assumed
    std::cout << "x is now: " << x << '\n';

    return 0;
}
