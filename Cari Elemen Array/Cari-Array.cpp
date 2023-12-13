#include <iostream>

int main ()
{
    int batas = 0, cari = 0;

    do
    {
        std::cout << "Masukkan batas ukuran array: ";
        std::cin >> batas;
        std::cin.clear ();
        fflush (stdin);

        if (batas <= 0)
        {
            std::cout << "Ukuran array harus lebih dari 0 & bukan huruf!\n";
        }
    } while (batas <= 0);
    
    int *array = nullptr;
    array = new int [batas];

    std::cout << "Masukkan nilai tiap elemen array: ";
    for (int i = 0; i < batas; i++)
    {
        std::cin >> array [i];
    }

    std::cout << "Masukkan elemen yang dicari: ";
    std::cin >> cari;

    bool konfirmasi = false;
    for (int i = 0; i < batas; i++)
    {
        if (cari == array [i])
        {
            std::cout << "Elemen " << cari << " berada di index " << i << "\n";
            konfirmasi = true;
        }
    }
    if (!konfirmasi)
    {
        std::cout << "Elemen " << cari << " tidak ada pada array\n";
    }

    delete [] array;
    return 0;
}