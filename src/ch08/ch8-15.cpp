#include "random.h" // defines Random::mt, Random::get(), and Random::generate()
#include <cstddef> // for std::size_t
#include <iostream>

int main()
{
    // We can call Random::get() to generate random integral values
    // If the two arguments have the same type, the returned value will have that same type.
    std::cout << Random::get(1, 6) << '\n';   // returns int between 1 and 6
    std::cout << Random::get(1u, 6u) << '\n'; // returns unsigned int between 1 and 6

    // In cases where we have two arguments with different types
    // and/or if we want the return type to be different than the argument types
    // We must specify the return type using a template type argument (between the angled brackets)
    // See https://www.learncpp.com/cpp-tutorial/function-template-instantiation/
    std::cout << Random::get<std::size_t>(1, 6u) << '\n'; // returns std::size_t between 1 and 6

    // If we have our own distribution, we can access Random::mt directly

    // Let's create a reusable random number generator that generates uniform numbers between 1 and 6
    std::uniform_int_distribution die6{ 1, 6 }; // for C++14, use std::uniform_int_distribution<> die6{ 1, 6 };
    for (int count{ 1 }; count <= 10; ++count)
    {
        std::cout << die6(Random::mt) << '\t'; // generate a roll of the die here
    }

    std::cout << '\n';

    return 0;
}