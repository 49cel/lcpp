// 3. declare a variable, print it, change its value and then print it again

#include <iostream>

int main() {

	int x{67}; // initial value 67
	
	std::cout << "Initial value of x: " << x << "\n";
	
	int incr{};

	std::cout << "Enter value to add to x: ";

	std::cin >> incr;

	x += incr; // adding incr to x;
	
	std::cout << "Updated value of x: " << x << std::endl;
}
