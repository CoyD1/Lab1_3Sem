#include <iostream>

int main()
{
    std::cout << "Hello, World! Version";

#ifdef VERSION_PROJECT
    std::cout << VERSION_PROJECT;
#else
    std::cout << "X";
#endif

    return 0;
}