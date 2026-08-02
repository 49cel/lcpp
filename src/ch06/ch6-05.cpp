#include <iostream>

int main()
{
    int x{ 1 };
    int y{ 2 };

    int z = (x, y);

    std::cout << (++x, ++y) << '\n'; // increment x and y, evaluates to the right operand
    std::cout << z << '\n'; // here z assumes the value of y (the right operand, and x is discarded even after evaluation)
    return 0;
}