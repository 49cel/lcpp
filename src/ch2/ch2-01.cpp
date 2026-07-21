#include <iostream>
void doAias() // this is the function header, tells the compiler that doPrint exists
{
    std::cout << "Rho Aias\n"; // the function body which tells the compiler, print "Rho Aias" whenever doPrint() is called
}
void emiyaShirou()
{
    std::cout << "I am the bone of my sword ";
    doAias(); // the function emiyaShirou() is calling another function, doAias() inside of itself
}
int main()
{
    doAias(); // here the main() function is calling the doPrint() function
    doAias();
    doAias(); // you can call a function multiple times
    emiyaShirou();
    return 0;
}
