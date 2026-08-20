#include <iostream>

int main()
{
    constexpr double gravity{ 9.8 };

    if constexpr (gravity == 9.8) // now using constexpr if
        std::cout << "Gravity is normal.\n";
    else
        std::cout << "We are not on Earth.\n";

    return 0;
}

/*
this is the same as:

int main()
{
constexpr double gravity{ 9.8 };

std::cout << "Gravity is normal.\n";

return 0;
}

as you can see, the entire if-else block has been replaced by the true statement
which is `std::cout << "Gravity is normal.\n";`
this makes the program more optimised

*/