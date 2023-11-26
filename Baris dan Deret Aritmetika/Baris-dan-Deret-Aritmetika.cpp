#include <iostream>

void baris (int *a, int *b, int *u1, int *u2, int *u3);
void suku_ke_n (int *a, int *b);
void beda (int *u1, int *u2, int *u3, int *b);
void suku_tengah (int *a);
void deret ();

int main ()
{
    int a = 0, b = 0, u1 = 0, u2 = 0, u3 = 0;

    unsigned short pilihan = 0;

    do
    {
        std::cout << "========== Baris dan Deret Aritmetika ==========\n";
        std::cout << "1. Baris\n";
        std::cout << "2. Deret\n";
        std::cout << "3. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        switch (pilihan)
        {
            case 1: baris (&a, &b, &u1, &u2, &u3);
                    break;
            case 2: deret ();
                    break;
            case 3: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
                     break;
        }
    } while (pilihan != 3);
    
    return 0;
}
void baris (int *a, int *b, int *u1, int *u2, int *u3)
{
    unsigned short pilihan = 0;

    do
    {
        std::cout << "==============================\n";
        std::cout << "a  = " << *a << "\n";
        std::cout << "b  = " << *b << "\n";
        std::cout << "U1 = " << *u1 << "\n";
        std::cout << "U2 = " << *u2 << "\n";
        std::cout << "U3 = " << *u3 << "\n";
        std::cout << "==============================\n";
        std::cout << "1. Suku ke-n\n";
        std::cout << "2. Beda (selisih)\n";
        std::cout << "3. Suku tengah\n";
        std::cout << "4. Kembali\n";
        std::cout << "5. Keluar\n";
        std::cout << "==============================\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        switch (pilihan)
        {
            case 1: suku_ke_n (a, b);
                    break;
            case 2: beda (u1, u2, u3, b);
                    break;
            case 3: suku_tengah (a);
                    break;
            case 4: main ();
                    break;
            case 5: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
                     break;
        }
    } while (pilihan != 5);
    
}
void suku_ke_n (int *a, int *b)
{
    // a + (n - 1) x b
    int n = 0;

    std::cout << "Masukkan suku pertama: ";
    std::cin >> *a;
    std::cout << "Masukkan suku yang dicari: ";
    std::cin >> n;
    std::cout << "Masukkan beda (selisih): ";
    std::cin >> *b;

    std::cout << "Suku ke " << n << " = " << *a + (n - 1) * *b << "\n";
}
void beda (int *u1, int *u2, int *u3, int *b)
{
    unsigned short pilihan = 0;
    
    do
    {
        std::cout << "===== Mencari Beda (Selisih) =====\n";
        std::cout << "1. Beda (selisih) statis\n";
        std::cout << "2. Beda (selisih) bertahap\n";
        std::cout << "3. Kembali\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        switch (pilihan)
        {
            case 1:
                // b = U2 - U1
                std::cout << "Masukkan nilai suku pertama: ";
                std::cin >> *u1;
                std::cout << "Masukkan nilai suku kedua: ";
                std::cin >> *u2;
                std::cout << "Beda (selisih) = " << *u2 - *u1 << "\n";
                break;
            case 2:
                // b = (U3 - U2) - (U2 - U1)
                std::cout << "Masukkan nilai suku pertama: ";
                std::cin >> *u1;
                std::cout << "Masukkan nilai suku kedua: ";
                std::cin >> *u2;
                std::cout << "Masukkan nilai suku ketiga: ";
                std::cin >> *u3;
                std::cout << "Nilai suku pertama                                : " << *u1 << "\n";
                std::cout << "Nilai suku kedua                                  : " << *u2 << "\n";
                std::cout << "Nilai suku ketiga                                 : " << *u3 << "\n";
                std::cout << "Beda (selisih) suku pertama & suku kedua          : " << *u2 - *u1 << "\n";
                std::cout << "Beda (selisih) suku kedua & suku ketiga           : " << *u3 - *u2 << "\n";
                *b = (*u3 - *u2) - (*u2 - *u1);
                std::cout << "Hasil                                             : " << *b << "\n";
                break;
            case 3:
                main ();
                break;
            case 4:
                std::cout << "Terima kasih telah menggunakan program ini!\n";
                break;
            default:
                std::cout << "Input error\n";
                break;
        }
    } while (pilihan != 4);
}
void suku_tengah (int *a)
{
    unsigned short pilihan = 0;

    do
    {
        std::cout << "===== Mencari Suku Tengah =====\n";
        std::cout << "1. Nilai suku tengah\n";
        std::cout << "2. Nilai urutan suku tengah\n";
        std::cout << "3. Kembali\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        int un = 0, n = 0;

        switch (pilihan)
        {
            case 1:
                // suku tengah = (suku pertama - suku terakhir) / 2
                std::cout << "Masukkan nilai suku pertama: ";
                std::cin >> *a;
                std::cout << "Masukkan nilai suku terakhir: ";
                std::cin >> un;
                std::cout << "Nilai suku tengah: " << (*a + un) / 2 << "\n";
                break;
            case 2:
                // urutan suku tengah = (banyaknya suku + 1) / 2
                std::cout << "Masukkan banyaknya suku: ";
                std::cin >> n;
                std::cout << "Nilai urutan suku tengah: " << (n + 1) / 2 << "\n";
                break;
            case 3:
                main ();
                break;
            case 4:
                std::cout << "Terima kasih telah menggunakan program ini!\n";
                break;
            default:
                std::cout << "Input error\n";
                break;
        }
    } while (pilihan != 4);
}
void deret ()
{
    // n / 2 x (2 x a + (n - 1) x b)
    int n = 0, a = 0, b = 0;

    std::cout << "Masukkan banyak suku: ";
    std::cin >> n;
    std::cout << "Masukkan nilai suku pertama: ";
    std::cin >> a;
    std::cout << "Masukkan beda (selisih): ";
    std::cin >> b;
    
    std::cout << "Jumlah suku pertama = " << n / 2 * (2 * a + (n - 1) * b) << "\n";
}