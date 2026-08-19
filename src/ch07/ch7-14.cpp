#include <iostream>

namespace V1 // declare a normal namespace named V1
{
    void doSomething()
    {
        std::cout << "V1\n";
    }
}

inline namespace V2 // declare an inline namespace named V2
{
    void doSomething()
    {
        std::cout << "V2\n";
    }
}

int main()
{
    V1::doSomething(); // calls the V1 version of doSomething()
    V2::doSomething(); // calls the V2 version of doSomething()

    doSomething(); // calls the inline version of doSomething() (which is V2)

    return 0;
}