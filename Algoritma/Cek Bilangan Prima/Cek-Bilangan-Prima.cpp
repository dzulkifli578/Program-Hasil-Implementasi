#include <iostream>

int main ()
{
    int batas = 0;
    std::cin >> batas;

    for (int i = 0; i < batas; i++)
    {
        int angka = 0, prima = 0;
        std::cin >> angka;

        if (angka == 1)
        {
            std::cout << "Bukan bilangan prima\n";
            continue;
        }

        for (int j = 2; j * j <= angka; j++)
        {
            if (angka % j == 0)
                prima++;
                break;
        }

        prima == 0 ?
            std::cout << "Bilangan prima\n" :
            std::cout << "Bukan bilangan prima\n";
    }
    
    return 0;
}