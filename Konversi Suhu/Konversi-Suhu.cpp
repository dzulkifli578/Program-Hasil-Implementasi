#include <iostream>
#include <iomanip>

int main ()
{
    float suhu = 0;
    char satuan;

    do
    {
        std::cout << "========== Konversi Suhu ==========\n";
        std::cout << "C = Celsius\n";
        std::cout << "F = Fahrenheit\n";
        std::cout << "Satuan mana yang ingin dikonversi?: ";
        std::cin >> satuan;

        if (satuan == 'C' || satuan == 'c')
        {
            std::cout << "Masukkan suhu dalam satuan Fahrenheit: ";
            std::cin >> suhu;

            std::cout << "Suhu: " << std::fixed << std::setprecision (2) << (1.8 * suhu) + 32 << " derajat Celsius";
            break;
        }

        if (satuan == 'F' || satuan == 'f')
        {
            std::cout << "Masukkan suhu dalam satuan Celsius: ";
            std::cin >> suhu;

            std::cout << "Suhu: " << std::fixed << std::setprecision (2) <<  (suhu - 32) / 1.8 << " derajat Fahrenheit";
            break;
        }

        else
        {
            std::cout << "Masukkan antara C atau F\n";
            break;
        }
    } while (suhu != 'F' || suhu != 'f' || suhu != 'C' || suhu != 'c');
    
    return 0;
}