#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char pilihan_pemain ();
char pilihan_komputer ();
void tampilkan_pilihan (char pilihan);
void pemenang (char pemain, char komputer);

int main ()
{
    char pemain, komputer;

    pemain = pilihan_pemain ();

    printf ("Pilihanmu: ");
    tampilkan_pilihan (pemain);

    komputer = pilihan_komputer ();
    printf ("Pilihan komputer: ");
    tampilkan_pilihan (komputer);

    pemenang (pemain, komputer);

    return 0;
}

char pilihan_pemain ()
{
    char pemain;

    do
    {
        printf ("===================\n");
        printf ("Batu_Gunting-Kertas\n");
        printf ("===================\n");
        printf ("'b' untuk batu\n");
        printf ("'g' untuk gunting\n");
        printf ("'k' untuk kertas\n");
        printf ("Silahkan pilih: ");
        scanf (" %c", &pemain);
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
        case 2: return 'g';
        case 3: return 'k';
    }
}

void tampilkan_pilihan (char pilihan)
{
    switch (pilihan)
    {
        case 'b':
            printf ("Batu\n");
            break;
        case 'g':
            printf ("Gunting\n");
            break;
        case 'k':
            printf ("Kertas\n");
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
                printf ("Seri!");
            }
            else if (komputer == 'g')
            {
                printf ("Kamu menang!");
            }
            else if (komputer == 'k')
            {
                printf ("Kamu kalah!");
            }
            break;

        case 'g':
            if (komputer == 'b')
            {
                printf ("Kamu kalah!");
            }
            else if (komputer == 'g')
            {
                printf ("Seri!");
            }
            else if (komputer == 'k')
            {
                printf ("Kamu menang!");
            }
            break;

        case 'k':
            if (komputer == 'b')
            {
                printf ("Kamu menang!");
            }
            else if (komputer == 'g')
            {
                printf ("Kamu kalah!");
            }
            else if (komputer == 'k')
            {
                printf ("Seri!");
            }
            break;
    }
}
