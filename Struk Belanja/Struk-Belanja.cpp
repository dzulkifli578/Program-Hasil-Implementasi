#include <iostream>
#include <ctime>

struct Pembeli
{
    std::string nama = "";
    double tunai = 0;
};
struct Produk
{
    std::string nama = "";
    int unit = 0;
    double harga = 0;
};

void input (int *pesanan, Pembeli *pembeli, Produk DaftarProduk []);
void struk (int *pesanan, Pembeli *pembeli, Produk DaftarProduk []);

int main ()
{
    int pesanan = 0;
    Pembeli pembeli;

    std::cout << "----------------------------------------\n";
    std::cout << "Masukkan nama pembeli     : ";
    std::getline (std::cin, pembeli.nama);
    std::cout << "Masukkan jumlah pesanan   : ";
    std::cin >> pesanan;
    std::cin.ignore ();

    Produk DaftarProduk [pesanan];

    input (&pesanan, &pembeli, DaftarProduk);
    struk (&pesanan, &pembeli, DaftarProduk);

    return 0;
}

void input (int *pesanan, Pembeli *pembeli, Produk DaftarProduk [])
{
    std::cout << "----------------------------------------\n";
    for (int i = 0; i < *pesanan; i++)
    {
        std::cout << "Masukkan nama produk      : ";
        std::getline (std::cin, DaftarProduk [i].nama);
        std::cout << "Masukkan harga produk     : Rp";
        std::cin >> DaftarProduk [i].harga;
        std::cout << "Masukkan unit produk      : ";
        std::cin >> DaftarProduk [i].unit;
        std::cin.ignore ();
        std::cout << "----------------------------------------\n";
    }
    std::cout << "Masukkan tunai pembeli    : Rp";
    std::cin >> pembeli -> tunai;
}

void struk (int *pesanan, Pembeli *pembeli, Produk DaftarProduk [])
{
    double TotalKeseluruhan = 0;
    std::time_t t = std::time (0);
    std::tm *sekarang = std::localtime (&t);

    std::cout << "----------------------------------------\n";
    std::cout << "           Jeweler's Pagoda\n";
    std::cout << "        Central Starskiff Haven\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Waktu                     : ";
    std::cout << (sekarang-> tm_year + 1900) << '-'
              << (sekarang -> tm_mon + 1) << '-'
              << sekarang -> tm_mday << ' '
              << sekarang -> tm_hour << ':'
              << sekarang -> tm_min << ':'
              << sekarang -> tm_sec << "\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Pembeli                   : " << pembeli -> nama << "\n";
    
    for (int i = 0; i < *pesanan; i++)
    {
        std::cout << "Nama produk               : " << DaftarProduk [i].nama << "\n";
        std::cout << "Harga produk              : " << DaftarProduk [i].harga << "\n";
        std::cout << "Unit produk yang dibeli   : " << DaftarProduk [i].unit << "\n";
        std::cout << "----------------------------------------\n";
    }
    for (int i = 0; i < *pesanan; i++)
    {
        double total = DaftarProduk [i].harga * DaftarProduk [i].unit;
        TotalKeseluruhan += total;

    }
    std::cout << "Total                     : Rp" << TotalKeseluruhan << "\n";
    std::cout << "Tunai                     : Rp" << pembeli -> tunai << "\n";
    std::cout << "Kembali                   : Rp" << pembeli -> tunai - TotalKeseluruhan << "\n";
    std::cout << "----------------------------------------\n";
    std::cout << "              Customer Care\n";
    std::cout << "           SMS 0826-0420-2310\n";
    std::cout << "----------------------------------------\n";
}