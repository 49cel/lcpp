#include <iostream>

int main() {
    char x{};
    std::cout << "Enter a character: ";
    std::cin.get(x); // takes user input for a character including whitespaces
    std::cout << "The ASCII Value of " << x << " is " << static_cast<int>(x) << std::endl; // using static_cast to convert the char input to integer value
    return 0;
}