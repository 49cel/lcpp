#include <iostream>

int main() {
    int x{5}; // int x with initialzation 5
    const int y{x}; // same value for y but constant
    std::cout << x << std::endl << y << std::endl;
    x = 67; // const x being changed here, not possible
    std::cout << x << std::endl << y << std::endl;
    return 0;
}