#include <iostream>
#include <typeinfo>     // for typeid()
#include <type_traits>  // for std::common_type_t

int main()
{
    // int + double -> int gets converted to double, result is double
    int i{ 2 };
    double d{ 3.5 };
    std::cout << "int:    " << typeid(i).name() << '\n';
    std::cout << "double: " << typeid(d).name() << '\n';
    std::cout << "i + d:  " << typeid(i + d).name() << " = " << i + d << "\n\n";

    // short + short -> neither is on the priority list, both get promoted to int
    short a{ 4 };
    short b{ 5 };
    std::cout << "a + b:  " << typeid(a + b).name() << " = " << a + b << "\n\n";

    // signed/unsigned mixing, the dangerous part
    // 5u - 10 : the int (10) gets converted to unsigned to match 5u
    // -5 can't exist as unsigned, so it wraps around to a huge number
    std::cout << "5u - 10:   " << typeid(5u - 10).name() << " = " << (5u - 10) << '\n';

    // -3 < 5u : -3 gets converted to a large unsigned value before comparing
    // so this evaluates to false, not true
    std::cout << std::boolalpha;
    std::cout << "-3 < 5u:   " << (-3 < 5u) << '\n';
    std::cout << "-3 < 5:    " << (-3 < 5) << "\n\n"; // compare: both signed, behaves as expected

    // std::common_type_t lets you ask what the common type would be, without
    // needing an actual expression to trigger the conversion
    using commonType1 = std::common_type_t<int, double>;
    using commonType2 = std::common_type_t<unsigned int, long>;
    std::cout << "common_type<int, double>:          " << typeid(commonType1).name() << '\n';
    std::cout << "common_type<unsigned int, long>:    " << typeid(commonType2).name() << '\n';

    return 0;
}