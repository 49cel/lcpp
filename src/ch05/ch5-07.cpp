#include <iostream>
#include <string> // string header needs to be there to perform string operations

int main()
{
    std::cout << "Enter your favourite show: ";
    std::string show{}; // std::string variable (class type) called show
    std::getline(std::cin >> std::ws, show); // taking input for show
    std::cout << "Describe it in one word: ";
    std::string review{}; //std::string variable called review
    std::getline(std::cin >> std::ws, review); // taking input for review
    std::cout << "Your show of choice is: " << show << std::endl;
    std::cout << "Your review about it is: " << review << std::endl; // printing the input stored
    return 0;
}
