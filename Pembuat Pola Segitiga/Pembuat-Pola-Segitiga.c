#include <stdio.h>

void segitiga_siku_siku_pola1 ();
void segitiga_siku_siku_pola1_terbalik ();
void segitiga_siku_siku_pola2 ();
void segitiga_siku_siku_pola2_terbalik ();
void segitiga_sama_kaki ();

int main()
{
    unsigned short pilihan;

    printf ("========== Pembuat Pola Segitiga ==========\n");
    printf ("1. Segitiga siku-siku pola 1\n");
    printf ("2. Segitiga siku-siku pola 1 (terbalik)\n");
    printf ("3. Segitiga siku-siku pola 2\n");
    printf ("4. Segitiga siku-siku pola 2 (terbalik)\n");
    printf ("5. Segitiga sama kaki\n");
    printf ("Pilih salah satu: ");
    scanf ("%hu", &pilihan);

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
            printf ("Input error\n");
            break;
    }

    return 0;
}

void segitiga_siku_siku_pola1 ()
{
    unsigned short tinggi = 0;

    printf ("Masukkan tinggi segitiga: ");
    scanf ("%hu", &tinggi);

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= i; j++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}

void segitiga_siku_siku_pola1_terbalik ()
{
    unsigned short tinggi = 0;

    printf ("Masukkan tinggi segitiga: ");
    scanf ("%hu", &tinggi);

    for (unsigned short i = 0; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            printf ("*");
        }
        printf ("\n");

        if (i == tinggi - 1)
        {
            break;
        }
    }
}

void segitiga_siku_siku_pola2 ()
{
    unsigned short tinggi = 0;

    printf ("Masukkan tinggi segitiga: ");
    scanf ("%hu", &tinggi);

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            printf (" ");
        }
        for (unsigned short k = 1; k <= i; k++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}

void segitiga_siku_siku_pola2_terbalik ()
{
    unsigned short tinggi = 0;

    printf ("Masukkan tinggi segitiga: ");
    scanf ("%hu", &tinggi);

    for (unsigned short i = 0; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= i; j++)
        {
            printf (" ");
        }
        for (unsigned short k = 1; k <= tinggi - i; k++)
        {
            printf ("*");
        }
        printf ("\n");

        if (i == tinggi - 1)
        {
            break;
        }
    }
}

void segitiga_sama_kaki ()
{
    unsigned short tinggi = 0;

    printf ("Masukkan tinggi segitiga: ");
    scanf ("%hu", &tinggi);

    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            printf (" ");
        }
        for (unsigned short k = 1; k <= 2 * i - 1; k++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}
