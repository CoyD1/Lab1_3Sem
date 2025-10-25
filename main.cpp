#include <iostream>

int main()
{
    std::cout << "He llo, World! Version ";

#ifdef VERSION_PROJECT
    std::cout << VERSION_PROJECT;
#else
    std::cout << "X";
#endif

    return 0;
}