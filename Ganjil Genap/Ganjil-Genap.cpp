#include <iostream>

int main ()
{
    int batas = 0;

    std::cin >> batas;

    for (int i = 1; i <= batas; i += 2)
        std::cout << i << " ";

    std::cout << "\n";

    for (int i = 2; i <= batas; i += 2)
        std::cout << i << " ";

    return 0;
}