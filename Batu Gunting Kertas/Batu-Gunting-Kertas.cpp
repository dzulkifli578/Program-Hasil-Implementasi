#include <iostream>

char pilihan_pemain ();
char pilihan_komputer ();
void tampilkan_pilihan (char pilihan);
void pemenang (char pemain, char komputer);

int main ()
{
    char pemain, komputer;

    pemain = pilihan_pemain ();

    std::cout << "Pilihanmu: ";
    tampilkan_pilihan (pemain);

    komputer = pilihan_komputer ();
    std::cout << "Pilihan komputer: ";
    tampilkan_pilihan (komputer);

    pemenang (pemain, komputer);

    return 0;
}

char pilihan_pemain ()
{
    char pemain;

    do
    {
        std::cout << "===================\n";
        std::cout << "Batu_Gunting-Kertas\n";
        std::cout << "===================\n";
        std::cout << "'b' untuk batu\n";
        std::cout << "'g' untuk gunting\n";
        std::cout << "'k' untuk kertas\n";
        std::cout << "Silahkan pilih: ";
        std::cin >> pemain;
    } while (pemain != 'b' && pemain != 'g' && pemain != 'k');

    return pemain;
}

char pilihan_komputer ()
{
    srand (time (NULL));
    unsigned short angka = rand () % 3 + 1;

    switch (angka)
    {
        case 1: return 'b';
                break;
        case 2: return 'g';
                break;
        case 3: return 'k';
                break;
    }
}

void tampilkan_pilihan (char pilihan)
{
    switch (pilihan)
    {
        case 'b':
            std::cout << "Batu\n";
            break;
        case 'g':
            std::cout << "Gunting\n";
            break;
        case 'k':
            std::cout << "Kertas\n";
            break;
    }
}

void pemenang (char pemain, char komputer)
{
    switch (pemain)
    {
        case 'b':
            if (komputer == 'b')
            {
                std::cout << "Seri!";
            }

            else if (komputer == 'g')
            {
                std::cout << "Kamu menang!";
            }

            else if (komputer == 'k')
            {
                std::cout << "Kamu kalah!";
            }
            break;

        case 'g':
            if (komputer == 'b')
            {
                std::cout << "Kamu kalah!";
            }

            else if (komputer == 'g')
            {
                std::cout << "Seri!";
            }

            else if (komputer == 'k')
            {
                std::cout << "Kamu menang!";
            }
            break;

        case 'k':
            if (komputer == 'b')
            {
                std::cout << "Kamu menang!";
            }

            else if (komputer == 'g')
            {
                std::cout << "Kamu kalah!";
            }

            else if (komputer == 'k')
            {
                std::cout << "Seri!";
            }
            break;
    }
}