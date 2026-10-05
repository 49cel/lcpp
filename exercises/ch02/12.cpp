// 12. write a function and call it before its definition apears in the file, using a forward declaration

#include <iostream>

void addition(int x, int y);

int main() {

	addition(5, 5);

	addition(6, 7);

	addition(0, 0);

	return 0;
}

void addition(int x, int y) {

	std::cout << "The sum is: " << x + y << std::endl;

}
