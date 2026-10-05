// 7. write a function that takes two ints and returns their product 

#include <iostream>

int multiply(int a, int b) {
	return a*b;
}

int main() {
	
	int x, y;

	std::cout << "Enter first number: ";
	
	std::cin >> x;

	std::cout << "Enter second number: ";

	std::cin >> y;

	int result;
	
	result = multiply(x, y);

	std::cout << "The result is: " << result << std::endl;

	return 0;
}
