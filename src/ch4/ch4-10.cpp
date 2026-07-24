#include <iostream>

// i know looping through this is way easier, but this is to practice if statements so dont mind

void isPrime(int x)
{
    // range is only 0-9
    if (x == 2) {
        std::cout << "prime";
    }
    else if (x == 3) {
        std::cout << "prime";
    }
    else if (x == 5) {
        std::cout << "prime";
    }
    else if (x == 7) {
        std::cout << "prime";
    }
    else {
        std::cout << "not prime";
    }
}

int main() {
    int x{};
    std::cout << "Enter a number 0-9: ";
    std::cin >> x;
    isPrime(x);

    return 0;
}