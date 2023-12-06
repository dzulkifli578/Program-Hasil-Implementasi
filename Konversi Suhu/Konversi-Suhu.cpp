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
        std::cout << "K = Keluar\n";
        std::cout << "Satuan mana yang ingin dikonversi?: ";
        std::cin >> satuan;
        
        if (satuan == 'C' || satuan == 'c')
        {
            std::cout << "Masukkan suhu dalam satuan Fahrenheit: ";
            std::cin >> suhu;

            std::cout << "Suhu: " << std::fixed << std::setprecision (2) << (suhu - 32) * 5 / 9 << " derajat Celsius\n";
        }
        else if (satuan == 'F' || satuan == 'f')
        {
            std::cout << "Masukkan suhu dalam satuan Celsius: ";
            std::cin >> suhu;

            std::cout << "Suhu: " << std::fixed << std::setprecision (2) <<  (suhu * 9 / 5) + 32 << " derajat Fahrenheit\n";
        }
        else if (satuan == 'K' || satuan == 'k')
        {
            std::cout << "Terima kasih telah menggunakan program ini!";
            break;
        }
        else
        {
            std::cout << "Masukkan antara C|F|K\n";
            continue;
        }
    } while (1);
    
    return 0;
}