#include <iostream>

int add(int a, int b); // using the function from a different file add.cpp

int main()
{
    std::cout << add(6, 7) << std::endl; // no compile error
    return 0;
}