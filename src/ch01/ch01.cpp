#include <iostream>

//reads an integer from the user and prints double and triple its value
int main() {
    //prints "Enter an integer: "
    std::cout << "Enter an integer: ";

    //value-initialized to 0 in case cin fails to read input
    int num{ };

    //takes an integer as an input and store in the variable 'num'
    std::cin >> num;

    //prints the double of the taken input
    std::cout << "Double " << num << " is: " << num * 2 << '\n';
    //prints the triple of the taken input
    std::cout << "Triple " << num << " is: " << num * 3 << '\n';

    return 0;
}