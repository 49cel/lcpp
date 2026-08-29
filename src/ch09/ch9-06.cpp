#include <cassert> // for assert()
#include <cmath> // for std::sqrt
#include <iostream>

// static_assert(gravity == 9.8, "invalid value of gravitational constant) <- this is what static_assert would look like, and is preferred over runtime assert

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity)
{
    assert(gravity > 0.0); // The object won't reach the ground unless there is positive gravity.

    if (initialHeight <= 0.0)
    {
        // The object is already on the ground. Or buried.
        return 0.0;
    }

    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main()
{
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, -9.8) << " second(s)\n";

    return 0;
}