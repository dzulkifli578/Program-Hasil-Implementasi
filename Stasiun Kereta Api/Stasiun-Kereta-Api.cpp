#include <iostream>

int main ()
{
    int stasiun = 0, nomor_stasiun [100], unik = 0;

    std::cin >> stasiun;

    for (int i = 0; i < stasiun; i++)
    {
        bool beda = true;
        std::cin >> nomor_stasiun [i];

        for (int j = 0; j < i; j++)
            if (nomor_stasiun [i] == nomor_stasiun [j])
            {
                beda = false;
                break;
            }

        if (beda) unik++;
    }

    std::cout << "\n" << unik;
    return 0;
}