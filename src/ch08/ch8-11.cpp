#include <iostream>

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        if (i % 2 == 0)
            continue; // skip the rest of this iteration, jump straight to ++i, then re-check the condition

        if (i == 9)
            break; // exit the loop entirely, execution resumes after the loop

        std::cout << i << ' '; // only odd numbers less than 9 reach here
    }

    // execution lands here whether the loop ended via break, or the condition just became false
    std::cout << "\nLoop finished\n";

    return 0;
}