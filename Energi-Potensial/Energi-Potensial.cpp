#include <iostream>

const float gravitasi = 10;
float hasil_massa ();
float hasil_ketinggian ();
float hasil_energi_potensial ();

int main ()
{
    unsigned short pilihan = 0;
    float massa = 0, ketinggian = 0, energi_potensial = 0;

    std::cout << "========== Penghitung Energi Potensial ==========\n";

    do
    {
        std::cout << "1. Mencari energi potensial\n";
        std::cout << "2. Mencari massa\n";
        std::cout << "3. Mencari ketinggian\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                energi_potensial = hasil_energi_potensial ();
                std::cout << "Energi potensial: " << energi_potensial << " Joule";
                break;
            case 2:
                massa = hasil_massa ();
                std::cout << "Massa: " << massa << " kg";
                break;
            case 3:
                ketinggian = hasil_ketinggian ();
                std::cout << "Ketinggian: " << ketinggian << " m";
                break;
            case 4:
                std::cout << "Terima kasih telah menggunakan program ini";
                break;
            default:
                std::cout << "Input error\n";
                break;
        }
    } while (pilihan < 1 || pilihan > 4);
    
    return 0;
}

float hasil_energi_potensial ()
{
    float massa = 0, ketinggian = 0;

    std::cout << "Masukkan massa (satuan kg): ";
    std::cin >> massa;

    std::cout << "Masukkan ketinggian (satuan m): ";
    std::cin >> ketinggian;

    return massa * gravitasi * ketinggian;
}

float hasil_massa ()
{
    float energi_potensial = 0, ketinggian = 0;

    std::cout << "Masukkan energi potensial (satuan Joule): ";
    std::cin >> energi_potensial;

    std::cout << "Masukkan ketinggian (satuan m): ";
    std::cin >> ketinggian;

    return energi_potensial / (gravitasi * ketinggian);
}

float hasil_ketinggian ()
{
    float energi_potensial = 0, massa = 0;

    std::cout << "Masukkan energi potensial (satuan Joule): ";
    std::cin >> energi_potensial;

    std::cout << "Masukkan massa (satuan kg): ";
    std::cin >> massa;

    return energi_potensial / (massa * gravitasi);
}