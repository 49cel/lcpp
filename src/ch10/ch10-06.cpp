#include <iostream>

int main()
{
    // the original problem: int / int always does integer division,
    // converting the result to double afterward is too late, the .5 is already gone
    int x{ 10 };
    int y{ 4 };
    std::cout << "int / int, converted after:      " << (double)(x / y) << '\n'; // 2 -> 2.0, wrong

    // c-style cast, works but avoid it, hard to spot, unclear which conversion it's really doing
    std::cout << "c-style cast:                     " << (double)x / y << '\n'; // 2.5

    // function-style cast, same idea as c-style, still avoid it
    std::cout << "function-style cast:              " << double(x) / y << '\n'; // 2.5

    // static_cast, the one you should actually use
    std::cout << "static_cast:                      " << static_cast<double>(x) / y << '\n'; // 2.5

    // narrowing conversion warning/error, and how static_cast silences it on purpose
    int i{ 48 };
    char ch1 = i;                          // compiles, but with a narrowing warning
    // char ch2{ i };                       // uncomment: this is a compile ERROR with list-init
    char ch3{ static_cast<char>(i) };      // fine, you've explicitly said you meant it
    std::cout << "narrowing via static_cast:        " << ch3 << '\n';

    // another narrowing example, double truncated into an int
    int total{ 100 };
    // total = total / 2.5;                 // typically warns: possible loss of data
    total = static_cast<int>(total / 2.5); // explicit, no warning
    std::cout << "int from double via static_cast:  " << total << '\n';

    // static_cast vs int{x}: int{x} still enforces no-narrowing since it's list-init underneath
    int n{ 10 };
    std::cout << "double{x} (list-init, no narrowing allowed): " << double{ n } / y << '\n'; // fine here since int->double isn't narrowing on most systems
    std::cout << "static_cast<double>(x) (always allowed):     " << static_cast<double>(n) / y << '\n';

    // int{x}-style temporaries only work with single-word type names
    unsigned char c{ 'a' };
    // std::cout << unsigned int{ c } << '\n'; // uncomment: compile error, multi-word type name not allowed here
    std::cout << "unsigned int via static_cast:     " << static_cast<unsigned int>(c) << '\n'; // works fine

    return 0;
}