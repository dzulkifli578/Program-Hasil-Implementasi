#include <iostream>
#include <iomanip>

void persegi ();
void persegi_panjang ();
void segitiga ();
void segitiga_siku_siku_pola1 ();
void segitiga_siku_siku_pola1_terbalik ();
void segitiga_siku_siku_pola2 ();
void segitiga_siku_siku_pola2_terbalik ();
void segitiga_sama_kaki ();
void jajar_genjang ();
void trapesium ();

int main ()
{
    unsigned short pilihan = 0;

    do
    {
        std::cout << "========== Pembuat Pola Bangun Datar ==========\n";
        std::cout << "1. Persegi\n";
        std::cout << "2. Persegi panjang\n";
        std::cout << "3. Segitiga\n";
        std::cout << "4. Jajar genjang\n";
        std::cout << "5. Trapesium\n";
        std::cout << "6. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        switch (pilihan)
        {
            case 1: persegi ();
                    break;
            case 2: persegi_panjang ();
                    break;
            case 3: segitiga ();
                    break;
            case 4: jajar_genjang ();
                    break;
            case 5: trapesium ();
                    break;
            case 6: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
                    break;
        }
    } while (pilihan != 6);
    
    return 0;
}

void persegi ()
{
    unsigned short sisi = 0;

    std::cout << "Masukkan panjang sisi: ";
    std::cin >> sisi;

    for (unsigned short i = 1; i <= sisi; i++)
    {
        for (unsigned short j = 1; j <= sisi; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void persegi_panjang ()
{
    unsigned short panjang = 0, lebar = 0;

    std::cout << "Masukkan sisi panjang: ";
    std::cin >> panjang;

    std::cout << "Masukkan sisi lebar: ";
    std::cin >> lebar;
    
    for (unsigned short i = 1; i <= lebar; i++)
    {
        for (unsigned short j = 1; j <= panjang; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void segitiga ()
{
    unsigned short pilihan = 0;

    do
    {
        std::cout << "========== Pembuat Pola Segitiga ==========\n";
        std::cout << "1. Segitiga siku-siku pola 1\n";
        std::cout << "2. Segitiga siku-siku pola 1 (terbalik)\n";
        std::cout << "3. Segitiga siku-siku pola 2\n";
        std::cout << "4. Segitiga siku-siku pola 2 (terbalik)\n";
        std::cout << "5. Segitiga sama kaki\n";
        std::cout << "6. Kembali\n";
        std::cout << "7. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        switch (pilihan)
        {
            case 1: segitiga_siku_siku_pola1 ();
                    break;
            case 2: segitiga_siku_siku_pola1_terbalik ();
                    break;
            case 3: segitiga_siku_siku_pola2 ();
                    break;
            case 4: segitiga_siku_siku_pola2_terbalik ();
                    break;
            case 5: segitiga_sama_kaki ();
                    break;
            case 6: main ();
                    break;
            case 7: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
                    break;
        }
    } while (pilihan != 7);
    
}

void segitiga_siku_siku_pola1 ()
{
    unsigned short tinggi = 0;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void segitiga_siku_siku_pola1_terbalik ()
{
    unsigned short tinggi = 0;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (unsigned short i = 0; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
        
        if (i == tinggi - 1)
        {
            break;
        }
    }
}

void segitiga_siku_siku_pola2 ()
{
    unsigned short tinggi = 0;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            std::cout << " ";
        }
        for (unsigned short k = 1; k <= i; k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void segitiga_siku_siku_pola2_terbalik ()
{
    unsigned short tinggi = 0;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (unsigned short i = 0; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= i; j++)
        {
            std::cout << " ";
        }
        for (unsigned short k = 1; k <= tinggi - i; k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";

        if (i == tinggi - 1)
        {
            break;
        }
    }
}

void segitiga_sama_kaki ()
{
    unsigned short tinggi = 0;

    std::cout << "Masukkan tinggi segitiga: ";
    std::cin >> tinggi;

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            std::cout << " ";
        }
        for (unsigned short k = 1; k <= 2 * i - 1; k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void jajar_genjang ()
{
    unsigned short alas = 0, tinggi = 0;

    std::cout << "Masukkan panjang alas: ";
    std::cin >> alas;

    std::cout << "Masukkan tinggi: ";
    std::cin >> tinggi;
    
    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            std::cout << " ";
        }
        for (unsigned short k = 1; k <= alas; k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

void trapesium ()
{
    unsigned short tinggi = 0;

    std::cout << "Masukkan tinggi: ";
    std::cin >> tinggi;

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        // segitiga 1
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            std::cout << " ";
        }
        for (unsigned short k = 1; k <= i; k++)
        {
            std::cout << "*";
        }

        // isi bagian tengah (biar gk jadi segitiga sama kaki)
        for (unsigned short j = 1; j <= tinggi * 2; j++)
        {
            std::cout << "*";
        }

        // segitiga 2
        for (unsigned short k = 1; k <= i; k++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}