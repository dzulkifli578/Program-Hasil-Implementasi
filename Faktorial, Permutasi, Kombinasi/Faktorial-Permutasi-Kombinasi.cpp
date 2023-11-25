#include <iostream>

void faktorial ();
void permutasi ();
void kombinasi ();

int main ()
{
    unsigned short pilihan = 0;

    do
    {
        std::cout << "========== Faktorial, Permutasi, Kombinasi ==========\n";
        std::cout << "1. Faktorial\n";
        std::cout << "2. Permutasi\n";
        std::cout << "3. Kombinasi\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        switch (pilihan)
        {
            case 1: faktorial ();
                    break;
            case 2: permutasi ();
                    break;
            case 3: kombinasi ();
                    break;
            case 4: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
                     break;
        }
    } while (pilihan != 4);
    
    return 0;
}

void faktorial ()
{
    int angka = 0, hasil = 1;

    std::cout << "Masukkan bilangan faktorial: ";
    std::cin >> angka;

    for (int i = angka; i > 0; i--)
    {
        hasil *= i;
    }

    std::cout << hasil << "\n";
}
void permutasi ()
{
    int n = 0, p = 1, k = 0;

    std::cout << "Masukkan bilangan keseluruhan: ";
    std::cin >> n;
    std::cout << "Masukkan bilangan asli (tidak termasuk duplikat): ";
    std::cin >> k;

    // n! / (n - k)!
    for (int i = n; i > n - k; i--)
    {
        p *= i;
    }

    std::cout << p << "\n";
}
void kombinasi ()
{
    int n = 0, r = 0, n_faktorial = 1, r_faktorial = 1, nr_faktorial = 1;

    std::cout << "Masukkan bilangan keseluruhan: ";
    std::cin >> n;
    std::cout << "Masukkan bilangan pilihan: ";
    std::cin >> r;

    // n!
    for (int i = n; i > 0; i--)
    {
        n_faktorial *= i;
    }
    // (n-r)!
    for (int i = n - r; i > 0; i--)
    {
        nr_faktorial *= i;
    }
    // r!
    for (int i = r; i > 0; i--)
    {
        r_faktorial *= i;
    }

    std::cout << n_faktorial / (r_faktorial * nr_faktorial) << "\n";
}