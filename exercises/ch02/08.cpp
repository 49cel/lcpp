// 8. write a void function that prints a message, call it three times with different arguments 

#include <iostream>

void print(int n) {

	std::cout << "The number entered is: " << n << std::endl;

}

int main(){

	print(67);
	print(61);
	print(43);

	return 0;
}
