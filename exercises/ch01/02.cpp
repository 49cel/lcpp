// 2. write a program that asks for the user's name and age, then prints a sentence using both

#include <iostream>
#include <string>

int main() {
	
	std::string name;
	int age;

	std::cout << "Enter your name: ";

	std::getline(std::cin, name);

	std::cout << "Enter your age: ";

	std::cin >> age;
	
	std::cout << "Your name is " << name << " and your age is " << age << std::endl;

	return 0;
	
}
