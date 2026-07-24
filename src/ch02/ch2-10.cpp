#include <iostream>

#define EMIYA
#define ARTORIA

int main()
{
#ifdef EMIYA
    std::cout << "Shirou\n"; // will be compiled since ARCHER is defined
#endif

#ifdef KIREI
    std::cout << Kotomine\n"; // will be excluded since KIREI is not defined
#endif

#ifdef ARTORIA
    std::cout << "Pendragon\n"; // will be compiled because ARTORIA is defined
    return 0;
#endif
}
