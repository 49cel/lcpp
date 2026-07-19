#include <iostream>
void excalibur(int x, int y) // parameters x and y being defined, which will be passed from the caller
{
    std::cout << "You used excalibur " << x << " times, with a multiplier of " << y << ", dealing a total of " << x*y*10 << " damage" << std::endl;
}
int main()
{
    int freq{}, multiplier{};
    std::cout << "Enter the number of times you wish to use Excalibur: ";
    std::cin >> freq;
    std::cout << "Enter the multiplier: ";
    std::cin >> multiplier;
    excalibur(freq, multiplier); // arguments sent as variables freq and multiplier, literals can also be passed
    return 0;
}