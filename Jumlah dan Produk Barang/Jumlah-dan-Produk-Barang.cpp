#include <iostream>

int main ()
{
    int batas = 0, jumlah = 0, produk = 1;

    std::cin >> batas;

    for (int i = 1; i < batas; i++)
        if (i % 3 == 0 || i % 5 == 0)
        {
            jumlah += i;
            produk *= i;
        }

    std::cout << jumlah << "\n" << produk;

    return 0;
}