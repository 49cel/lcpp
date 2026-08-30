#include <iostream>
#include <string>

// platform-independence style alias (simplified, no #ifdef here, just illustrating the idea)
using Age = int; // "Age" reads clearer than a bare int in a function signature

// shortening a complex type
using ScoreList = std::pair<std::string, int>; // pretend this represents a name + score pair

// documenting meaning
using Grade = char; // makes it obvious what a returned char actually represents

Grade computeGrade(int score)
{
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    return 'C';
}

void printAge(Age age) // reads more clearly than printAge(int age)
{
    std::cout << "Age: " << age << '\n';
}

int main()
{
    // aliases are NOT distinct types, this compiles fine even though it's meaningless
    using Miles = long;
    using Speed = long;

    Miles distance{ 5 };
    Speed mhz{ 3200 };

    distance = mhz; // syntactically fine, semantically nonsense, compiler can't catch this
    std::cout << "distance is now: " << distance << " (actually holds an mhz value, oops)\n";

    printAge(20);

    Grade g{ computeGrade(85) };
    std::cout << "Grade: " << g << '\n';

    // fixed-width int printing as a character, since int8_t is usually just signed char underneath
    std::int8_t x{ 97 };
    std::cout << "int8_t(97) prints as: " << x << '\n'; // prints 'a', not 97

    return 0;
}