#include <iostream>
#include <cmath>

float energi_kinetik ();
float massa ();
float kecepatan ();

int main ()
{
    unsigned short pilihan = 0;
    float massa = 0, kecepatan = 0, energi_kinetik = 0;

    do
    {
        std::cout << "========== Penghitung Energi Kinetik ==========\n";
        std::cout << "1. Mencari energi kinetik\n";
        std::cout << "2. Mencari massa\n";
        std::cout << "3. Mencari kecepatan\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                energi_kinetik = energi_kinetik ();
                std::cout << "Energi kinetik: " << energi_kinetik << " Joule\n";
                break;
            case 2:
                massa = massa ();
                std::cout << "Massa: " << massa << " kg\n";
                break;
            case 3:
                kecepatan = kecepatan ();
                std::cout << "Kecepatan: " << kecepatan << " m/s\n";
                break;
            case 4:
                std::cout << "Terima kasih telah menggunakan program ini!\n";
                break;
            default:
                std::cout << "Input error\n";
        }
    } while (pilihan != 4);
}

float energi_kinetik ()
{
    float massa = 0, kecepatan = 0;

    std::cout << "Masukkan massa (satuan kg): ";
    std::cin >> massa;

    std::cout << "Masukkan kecepatan (satuan m/s): ";
    std::cin >> kecepatan;

    return 0.5 * massa * pow (kecepatan, 2);
}

float massa ()
{
    float energi_kinetik = 0, kecepatan = 0;

    std::cout << "Masukkan energi kinetik (satuan Joule): ";
    std::cin >> energi_kinetik;

    std::cout << "Masukkan kecepatan (satuan m/s): ";
    std::cin >> kecepatan;

    return (2 * energi_kinetik) / pow (kecepatan, 2);
}

float kecepatan ()
{
    float energi_kinetik = 0, massa = 0;

    std::cout << "Masukkan energi kinetik (satuan Joule): ";
    std::cin >> energi_kinetik;

    std::cout << "Masukkan massa (satuan kg): ";
    std::cin >> massa;

    return sqrt ((2 * energi_kinetik) / massa);
}