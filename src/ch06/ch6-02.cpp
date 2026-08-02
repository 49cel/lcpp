#include <iostream>

int main()
{
    constexpr int apples { 12 };
    std::cout << "You have " << apples << " apples. Enter how many people to divide them between: ";
    int x {};
    std::cin >> x; // try dividing with 0 and 0.0 to see the result, undefined behaviour, NaN or Inf

    std::cout << "Each person gets " << apples / x << " whole apples.\n"; // apples and x are int, so this is integer division

    return 0;
}