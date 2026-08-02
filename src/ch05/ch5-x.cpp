#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num) {
    std::cout << "Enter name of person #" << num << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name) {
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;

    return age;
}

void printOlder(std::string_view name1, int age1, std::string_view name2, int age2) {
    if (age1 > age2) {
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 << " (age " << age2 << ")" << std::endl;
    }
    else if (age1 < age2) {
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 << " hu(age " << age1 << ")" << std::endl;
    }
    else {
        std::cout << name1 << " and " << name2 << " have the same age (" << age1 << ")." << std::endl;
    }
}

int main() {
    std::string name1 = getName(1);
    int age1 = getAge(name1);
    std::string name2 = getName(2);
    int age2 = getAge(name2);
    printOlder(name1, age1, name2, age2);

    return 0;
}