#include <iostream>

int main ()
{
    int batas = 0;

    std::cout << "Masukkan batas perulangan bilangan prima: ";
    std::cin >> batas;

    std::cout << "Bilangan prima dari 2 hingga " << batas << ":\n";

    for (int i = 2; i <= batas; i++)
    {
        bool prima = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prima = false;
                break;
            }
        }
        if (prima)
            std::cout << i << " ";
    }
    std::cout << "\n";

    return 0;
}