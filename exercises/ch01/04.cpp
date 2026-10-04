// 4. write a program using at least three different operators in one expression and then print the result

#include <iostream>

int main() {

	std::cout << "Your program will go through a sequence of operations (i.e +, -, *, / -> in this order), input the numbers used for each - " << "\n";

	int operation1{};

	std::cout << "Enter the first number: ";

	std::cin >> operation1;

	int operation2{};

	std::cout << "Enter the second number: ";

	std::cin >> operation2;

	int operation3{};

	std::cout << "Enter the third number: ";

	std::cin >> operation3;

	int operation4{};

	std::cout << "Enter the fourth number: ";

	std::cin >> operation4;

	int operation5{};

	std::cout << "Enter the fifth number: ";

	std::cin >> operation5;

	double result{};

	result = operation1+operation2-operation3*operation4/operation5;

	std::cout << "The result of " << operation1 << " + " << operation2 << " - " << operation3 << " * " << operation4 << " / " << operation5 << " is: " << result << std::endl;

	return 0;

	
}
