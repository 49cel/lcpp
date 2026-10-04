// 5. write a program that takes two numbers from the user and prints their sum

#include <iostream>

int main() {

	int x{};

	std::cout << "Enter the first number: ";

	std::cin >> x;

	int y{};

	std::cout << "Enter the second number: ";

	std::cin >> y;

	std::cout << "The sum of both numbers is: " << x+y << std::endl;

	return 0;
}
