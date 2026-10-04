// 6. write a program with comments explaining what each line does for your own reference (will be referring to the previous program)

#include <iostream>

int main() {

	// this is a program to print the sum of two numbers

	int x{}; // declaring a variable to hold the first number

	std::cout << "Enter the first number: ";

	std::cin >> x; // taking input for the first number

	int y{}; // declaring a variable to hold the second number

	std::cout << "Enter the second number: ";

	std::cin >> y; // taking input for the second number

	std::cout << "The sum of both numbers is: " << x+y << std::endl; // printing the sum of both the numbers (x and y) using std::cout, an other alternative would be to declare a third variable and store the value x+y in it

	return 0; // explicitly returning 0 to ensure that the program has been executed successfully
}
