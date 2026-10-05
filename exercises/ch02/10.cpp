// 10. write a function with no parameters that returns a fixed value, and one with parameters which computes something

#include <iostream>

int returnprn() {

	return 43;
}

void nextprn(int n) {

	int current_prn = n;

	std::cout << "The current PRN is: " << current_prn << std::endl;

	int next_prn = n + 1;

	std::cout << "The next PRN is: " << next_prn << std::endl;
}

int main() {

	nextprn(returnprn());

	return 0;
}
