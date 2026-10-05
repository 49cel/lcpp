// 11. split a program that reads input, does a calculation and prints output, into three seperate functions

#include <iostream>

int take_input() {

	int x;

	std::cout << "Enter the value of x: ";

	std::cin >> x;

	return x;
}

int squared(int n) {

	return n * n;
}

void print(int n) {

	std::cout << "The number to its second power is: " << n << std::endl;

}

void find_sq() {

	int x = take_input();

	int sq_x = squared(x);

	print(sq_x);
}

int main() {

	find_sq();

	return 0;
}
