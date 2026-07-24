#include <iostream>
void doIt(int x) // parameter is created as a local variable x
{
    int y{ 4 }; // local variable y initialized with value 4
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
    x = 3; // parameter value x changed to 3 within local scope
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main()
{
    int x{ 1 }; // variable x defined within main and initialized
    int y{ 2 }; // variable y defined within main and initialized
    std::cout << "main: x = " << x << " y = " << y << '\n'; // prints the values initialized in main
    doIt(x); // prints the values in the scope of doIt
    std::cout << "main: x = " << x << " y = " << y << '\n'; // prints the values initialized in main again and not the function doIt as that is out of scope after function exited
    return 0;
}