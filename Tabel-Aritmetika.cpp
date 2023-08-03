#include <iostream>

float tabel_penjumlahan ();
float tabel_pengurangan ();
float tabel_perkalian ();
float tabel_pembagian ();

int main ()
{
	unsigned short pilihan = 0;
	
    do
    {
        std::cout << "========== Pembuat Tabel Aritmetika ==========\n";
        std::cout << "1. Penjumlahan\n";
        std::cout << "2. Pengurangan\n";
        std::cout << "3. Perkalian\n";
        std::cout << "4. Pembagian\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;
        
        switch (pilihan)
        {
            case 1:
                tabel_penjumlahan ();
                break;
            case 2:
                tabel_pengurangan ();
                break;
            case 3:
                tabel_perkalian ();
                break;
            case 4:
                tabel_pembagian ();
                break;
            case 5:
                std::cout << "Terima kasih telah menggunakan program ini";
            default:
                std::cout << "Input error\n";
                break;
        }
    } while (pilihan > 5 || pilihan < 0);
    
     
     return 0;
}

float tabel_penjumlahan ()
{
	float batas = 0, bilangan = 0;
	
	std::cout << "Masukkan bilangan: ";
    std::cin >> bilangan;
    std::cout << "Masukkan batas hitung: ";
    std::cin >> batas;

    for (int i = 1; i <= batas; i++)
    {
        std::cout << bilangan << " + " << i << " = " << bilangan + i << "\n";
    }
}

float tabel_pengurangan ()
{
	float batas = 0, bilangan = 0;
	
	std::cout << "Masukkan bilangan: ";
    std::cin >> bilangan;
    std::cout << "Masukkan batas hitung: ";
    std::cin >> batas;

    for (int i = 1; i <= batas; i++)
    {
        std::cout << bilangan << " - " << i << " = " << bilangan - i << "\n";
    }
}

float tabel_perkalian ()
{
	float batas = 0, bilangan = 0;
	
	std::cout << "Masukkan bilangan: ";
    std::cin >> bilangan;
    std::cout << "Masukkan batas hitung: ";
    std::cin >> batas;

    for (int i = 1; i <= batas; i++)
    {
        std::cout << bilangan << " x " << i << " = " << bilangan * i << "\n";
    }
}

float tabel_pembagian ()
{
	float batas = 0, bilangan = 0;
	
	std::cout << "Masukkan bilangan: ";
    std::cin >> bilangan;
    std::cout << "Masukkan batas hitung: ";
    std::cin >> batas;

    for (int i = 1; i <= batas; i++)
    {
        std::cout << bilangan << " : " << i << " = " << bilangan / i << "\n";
    }
}