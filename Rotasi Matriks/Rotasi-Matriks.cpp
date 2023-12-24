#include <iostream>

int main ()
{
    int kolom = 0, baris = 0;

    std::cout << "Masukkan panjang kolom matriks: ";
    std::cin >> kolom;
    std::cout << "Masukkan panjang baris matriks: ";
    std::cin >> baris;

    int array [kolom][baris];

    std::cout << "Masukkan elemen matriks:\n";
    for (int i = 0; i < kolom; i++)
        for (int j = 0; j < baris; j++)
            std::cin >> array [i][j];
    
    std::cout << "Rotasi matriks:\n";
    for (int j = 0; j < baris; j++)
    {
        for (int i = kolom - 1; i >= 0; i--)
            std::cout << array [i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}