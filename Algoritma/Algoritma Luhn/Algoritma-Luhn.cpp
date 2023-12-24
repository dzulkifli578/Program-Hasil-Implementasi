#include <iostream>

int main ()
{
    std::string digit = "";
    int digit_angka [17], hasil = 0;

    std::cout << "Masukkan nomor kartu:\n";
    std::cin >> digit;

    for (int i = 0; i < 16; i++)
    {
        digit_angka [i] = digit [i] - 48;

        if (i == 0 || i % 2 == 0)
        {
            digit_angka [i] *= 2;
            if (digit_angka [i] > 9) digit_angka [i] -= 9;
        }

        hasil += digit_angka [i];
    }


    hasil % 10 == 0 ?
        std::cout << "Nomor kartu valid\n" :
        std::cout << "Nomor kartu tidak valid\n";

    return 0;
}