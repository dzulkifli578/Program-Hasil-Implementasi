#include <iostream>

int main ()
{
    int *ukuran = NULL;
    ukuran = new int;

    std::cout << "Masukkan batas deret Fibonacci: ";
    std::cin >> *ukuran;

    unsigned long long *array = NULL;
    array = new unsigned long long [*ukuran] {0, 1};
    
    for (int i = 2; i < *ukuran; i++)
    {
        array [i] = array [i - 2] + array [i - 1];
    }

    std::cout << "Deret Fibonacci: " << *ukuran << "\n";

    for (int i = 0; i < *ukuran; i++)
    {
        std::cout << array [i] << " ";
    }

    delete [] ukuran, array;

    return 0;
}