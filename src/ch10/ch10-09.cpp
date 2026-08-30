#include <iostream>
#include <type_traits> // for std::common_type_t

// return type deduction: compiler figures out the return type from the return statement
auto add(int x, int y)
{
    return x + y; // deduced as int
}

// return type deduction on a genuinely awkward-to-write-by-hand return type
auto mixedAdd(unsigned short x, char y)
{
    return x + y; // whatever type unsigned short + char actually promotes to, without you working it out
}

// this would NOT compile if uncommented, return statements disagree on type (int vs double)
/*
auto badFcn(bool b)
{
    if (b)
        return 5;
    else
        return 6.7;
}
*/

// fixed version, forcing both branches to agree
auto fixedFcn(bool b)
{
    if (b)
        return 5.0; // now double
    else
        return 6.7; // double
}

// trailing return syntax, NOT deduction, just an explicit type written after the parameter list
auto multiply(int x, int y) -> int
{
    return x * y;
}

// trailing return syntax used to keep a complex return type from burying the function name
auto compare(int a, double b) -> std::common_type_t<int, double>
{
    return (a > b) ? a : b;
}

int main()
{
    std::cout << add(2, 3) << '\n';
    std::cout << mixedAdd(5, 'a') << '\n';
    std::cout << fixedFcn(true) << '\n';
    std::cout << multiply(4, 5) << '\n';
    std::cout << compare(3, 7.5) << '\n';

    return 0;
}