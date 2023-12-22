#include <iostream>

int main ()
{
    int batas = 0;

    std::cout << "Masukkan batas input angka: ";
    std::cin >> batas;

    std::string *array = nullptr;
    array = new std::string [batas];

    std::cout << "Masukkan daftar angka:\n";
    for (int i = 0; i < batas; i++)
        std::cin >> array [i];
    
    std::cout << "Daftar angka yang dibalik:\n";
    for (int i = 0; i < batas; i++)
    {
        for (int j = array [i].length () - 1; j >= 0; j--)
            std::cout << array [i][j];
        std::cout << "\n";
    }

    delete [] array;
    return 0;
}