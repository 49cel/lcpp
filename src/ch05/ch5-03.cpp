#include <iostream>
#include <bitset>

int main()
{
    int x { 12 };
    std::cout << x << '\n'; // decimal (by default)
    std::cout << std::hex << x << '\n'; // hexadecimal
    std::cout << x << '\n'; // now hexadecimal
    std::cout << std::oct << x << '\n'; // octal
    std::cout << std::dec << x << '\n'; // return to decimal
    std::cout << x << '\n'; // decimal
    std::cout << std::bitset<4>{ 0b1010 } << '\n'; // create a temporary std::bitset and print it
    return 0;
}