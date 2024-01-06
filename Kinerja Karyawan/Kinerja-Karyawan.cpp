#include <iostream>

int main ()
{  
    int karyawan = 0, waktu = 1, tugas = 0, bonus = 0, gaji [100];

    std::cin >> karyawan;

    for (int i = 0; i < karyawan; i++)
    {
        std::cin >> waktu >> tugas;
        if (waktu >= 40 && tugas >= 20) bonus = 500'000;
        gaji [i] = bonus + (50'000 * waktu);
    }

    for (int i = 0; i < karyawan; i++)
        std::cout << gaji [i] << "\n";

    return 0;
}