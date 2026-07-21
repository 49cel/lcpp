#include <iostream>
int artoriaPendragon() // function header with return type int, returns int value
{
    std::cout << "Enter the number of times you want to use Excalibur: ";
    int excalibur{};
    std::cin >> excalibur;
    return excalibur; // returns the input taken to the caller
}
int main()
{
    int ex{artoriaPendragon()}; // initialises the variable 'ex' with the input returned by artoriaPendragon()
    std::cout << "You have used Artoria's blade " << ex << " times to deal " << ex*10 << " damage" << std::endl;
    return 0;
}