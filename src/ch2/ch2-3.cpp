#include <iostream>
void johnRod() // function header with a return type of void, meaning the function returns nothing
{
    std::cout << "How does he keep soloing all of fiction?"; // function only being used for its behaviour
    // no return statement provided, you can use just 'return' but it makes the code redundant as the function returns to main either way
}
int main()
{
    johnRod(); // the function itself being called, used only for the behaviour it provides inside the body (in this case, printing the text)
    return 0;
}