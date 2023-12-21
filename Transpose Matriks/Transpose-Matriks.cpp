#include <iostream>

int main ()
{
    int baris = 0, kolom = 0;

    std::cout << "Masukkan baris matriks: ";
    std::cin >> baris;
    std::cout << "Masukkan kolom matriks: ";
    std::cin >> kolom;

    int matriks [baris][kolom];

    std::cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < baris; i++)
        for (int j = 0; j < kolom; j++)
            std::cin >> matriks [i][j];

    std::cout << "Tranpose matriks:\n";
    for (int j = 0; j < baris; j++)
    {
        for (int i = 0; i < kolom; i++)
            std::cout << matriks [i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}