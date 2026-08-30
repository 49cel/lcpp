#include <iostream>
#include <string>
#include <string_view>

int add(int x, int y)
{
    return x + y;
}

std::string_view getGreeting()
{
    return "hi there";
}

int main()
{
    // basic deduction from literals
    auto d{ 5.0 };      // double
    auto i{ 1 + 2 };    // int
    auto x{ i };        // int, deduced from another already-deduced variable

    // deduction from a function call
    auto sum{ add(5, 6) }; // int

    // literal suffixes still control the deduced type
    auto f{ 1.23f };    // float
    auto u{ 5u };       // unsigned int

    // const/constexpr combined with auto
    const auto c1{ 5 };       // const int
    constexpr auto c2{ 5 };   // constexpr int

    // const gets dropped unless you reapply it
    const int original{ 10 };
    auto copy1{ original };        // int, const dropped
    const auto copy2{ original };  // const int, reapplied manually

    // string literal deduction gotcha
    auto rawString{ "hello" };        // const char*, NOT std::string
    using namespace std::literals;
    auto realString{ "hello"s };      // std::string, because of the s suffix
    auto stringView{ "hello"sv };     // std::string_view, because of the sv suffix

    // avoiding an unwanted conversion
    auto viewNoCopy{ getGreeting() };          // std::string_view, no conversion
    std::string forcedCopy{ getGreeting() };   // converts string_view -> string, possibly unwanted

    std::cout << d << ' ' << i << ' ' << x << ' ' << sum << '\n';
    std::cout << f << ' ' << u << '\n';
    std::cout << rawString << ' ' << realString << ' ' << stringView << '\n';
    std::cout << viewNoCopy << ' ' << forcedCopy << '\n';

    return 0;
}