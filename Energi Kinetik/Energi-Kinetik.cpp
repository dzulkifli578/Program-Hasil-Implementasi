#include <iostream>
#include <cmath>

float hasil_energi_kinetik ();
float hasil_massa ();
float hasil_kecepatan ();

int main ()
{
    unsigned short pilihan = 0;

    float massa = 0, kecepatan = 0, energi_kinetik = 0;

    std::cout << "========== Penghitung Energi Kinetik ==========\n";

    do
    {
        std::cout << "1. Mencari energi kinetik\n";
        std::cout << "2. Mencari massa\n";
        std::cout << "3. Mencari kecepatan\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                energi_kinetik = hasil_energi_kinetik ();
                std::cout << "Energi kinetik: " << energi_kinetik << " Joule";
                break;
            case 2:
                massa = hasil_massa ();
                std::cout << "Massa: " << massa << " kg";
                break;
            case 3:
                kecepatan = hasil_kecepatan ();
                std::cout << "Kecepatan: " << kecepatan << " m/s";
                break;
            case 4:
                std::cout << "Terima kasih telah menggunakan program ini";
                break;
            default:
                std::cout << "Input error\n";
                break;
        }
    } while (pilihan < 1 || pilihan > 4);
}

float hasil_energi_kinetik ()
{
    float massa = 0, kecepatan = 0;

    std::cout << "Masukkan massa (satuan kg): ";
    std::cin >> massa;

    std::cout << "Masukkan kecepatan (satuan m/s): ";
    std::cin >> kecepatan;

    return 0.5 * massa * pow (kecepatan, 2);
}

float hasil_massa ()
{
    float energi_kinetik = 0, kecepatan = 0;

    std::cout << "Masukkan energi kinetik (satuan Joule): ";
    std::cin >> energi_kinetik;

    std::cout << "Masukkan kecepatan (satuan m/s): ";
    std::cin >> kecepatan;

    return (2 * energi_kinetik) / pow (kecepatan, 2);
}

float hasil_kecepatan ()
{
    float energi_kinetik = 0, massa = 0;

    std::cout << "Masukkan energi kinetik (satuan Joule): ";
    std::cin >> energi_kinetik;

    std::cout << "Masukkan massa (satuan kg): ";
    std::cin >> massa;

    return sqrt((2 * energi_kinetik) / massa);
}