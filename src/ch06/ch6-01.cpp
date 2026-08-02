#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";

    int x{};
    std::cin >> x;
    return x;
}

void printCalculation(int x, int y, int z)
{
    std::cout << x + (y * z);
}

int main()
{
    printCalculation(getValue(), getValue(), getValue()); // this line is ambiguous

    /* if you run this program and enter the inputs `1`, `2`, and `3`, you might
     * assume that this program would calculate `1 + (2 * 3)` and print `7`. but
     * that is making the assumption that the arguments to `printCalculation()`
     * will evaluate in left-to-right order
     * (so parameter `x` gets value `1`, `y` gets value `2`, and `z` gets value `3`).
     * if instead, the arguments evaluate in right-to-left order
     * (so parameter `z` gets value `1`, `y` gets value `2`, and `x` gets value `3`),
     * then the program will print `5` instead.
     * the clang compiler evaluates arguments in left to right order
     * the gcc compiler evaluates them in right to left order */

    // to fix this, you can do the following

    int a{ getValue() }; // will execute first
    int b{ getValue() }; // will execute second
    int c{ getValue() }; // will execute third

    printCalculation(a, b, c); // this line is now unambiguous

    return 0;
}