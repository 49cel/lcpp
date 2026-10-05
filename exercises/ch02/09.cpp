// 9. write a function that calls another function you wrote inside main

#include <iostream>

void print(int n) {

	std::cout << "The result is: " << n << "\n";
}

void multiply(int a, int b) {

	int result = a * b;
	print(result);
}

int main() {

	multiply(6, 7);
	multiply(129, 112);
	multiply (0, 128);

	return 0;
}
