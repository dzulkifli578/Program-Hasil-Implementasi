#include <iostream>

void segitiga_siku_siku_pola1 ();
void segitiga_siku_siku_pola1_terbalik ();
void segitiga_siku_siku_pola2 ();
void segitiga_siku_siku_pola2_terbalik ();
void segitiga_sama_kaki ();

int main ()
{
    unsigned short pilihan;

    std::cout << "========== Pembuat Pola Segitiga ==========\n";
    std::cout << "1. Segitiga siku-siku pola 1\n";
    std::cout << "2. Segitiga siku-siku pola 1 (terbalik)\n";
    std::cout << "3. Segitiga siku-siku pola 2\n";
    std::cout << "4. Segitiga siku-siku pola 2 (terbalik)\n";
    std::cout << "5. Segitiga sama kaki\n";
    std::cout << "Pilih salah satu: ";
    std::cin >> pilihan;

    switch (pilihan)
    {
        case 1:
            segitiga_siku_siku_pola1 ();
            break;
        case 2:
            segitiga_siku_siku_pola1_terbalik ();
            break;
        case 3:
            segitiga_siku_siku_pola2 ();
            break;
        case 4:
            segitiga_siku_siku_pola2_terbalik ();
            break;
        case 5:
            segitiga_sama_kaki ();
            break;
        default:
            std::cout << "Input error\n";
            break;
    }

    return 0;
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