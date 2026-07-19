#include <iostream>
int artoriaPendragon(); // forward declaration of artoriaPendragon() using a function declaration, you can even mention the parameters here if any
int main()
{
    int ex{artoriaPendragon()}; // this works now because we forward declared it already, no compile error
    std::cout << "You have used Artoria's blade " << ex << " times to deal " << ex*10 << " damage" << std::endl;
    return 0;
}
int artoriaPendragon() // function defined after main() but no compile error as the compiler has already been informed of the function's existence using the function declaration
{
    std::cout << "Enter the number of times you want to use Excalibur: ";
    int excalibur{};
    std::cin >> excalibur;
    return excalibur;
}