#include <stdio.h>

void persegi ();
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
        puts ("========== Pembuat Pola Bangun Datar ========== ");
        puts ("1. Persegi");
        puts ("2. Persegi panjang");
        puts ("3. Segitiga");
        puts ("4. Jajar genjang");
        puts ("5. Trapesium");
        puts ("6. Keluar");
        printf ("1. Pilih salah satu: ");
        scanf ("%hu", &pilihan);

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
            case 6: puts ("Terima kasih telah menggunakan program ini!");
                    break;
            default: puts ("Input error");
                    break;
        }
    } while (pilihan != 6);
    
    return 0;
}

void persegi ()
{
    unsigned short sisi = 0;

    printf ("Masukkan panjang sisi: ");
    scanf ("%hu", &sisi);

    for (unsigned short i = 1; i <= sisi; i++)
    {
        for (unsigned short j = 1; j <= sisi; j++)
        {
            printf ("*");
        }
        puts ("");
    }
}

void persegi_panjang ()
{
    unsigned short panjang = 0, lebar = 0;

    printf ("Masukkan sisi panjang: ");
    scanf ("%hu", &panjang);

    printf ("Masukkan sisi lebar: ");
    scanf ("%hu", &lebar);

    for (unsigned short i = 1; i <= lebar; i++)
    {
        for (unsigned short j = 1; j <= panjang; j++)
        {
            printf ("*");
        }
        puts ("");
    }
}

void segitiga ()
{
    unsigned short pilihan = 0;
    do
    {
        puts ("========== Pembuat Pola Segitiga ==========\n");
        puts ("1. Segitiga siku-siku pola 1");
        puts ("2. Segitiga siku-siku pola 1 (terbalik)\n");
        puts ("3. Segitiga siku-siku pola 2");
        puts ("4. Segitiga siku-siku pola 2 (terbalik)");
        puts ("5. Segitiga sama kaki");
        puts ("6. Kembali");
        puts ("7. Keluar");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);
    } while (pilihan != 7);
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
        puts ("");

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
        puts ("");
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
        puts ("");

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
        puts ("");
    }
}

void jajar_genjang ()
{
    unsigned short alas = 0, tinggi = 0;

    printf ("Masukkan panjang alas: ");
    scanf ("%hu", &alas);

    printf ("Masukkan tinggi: ");
    scanf ("%hu", &tinggi);
    
    for (unsigned short i = 1; i <= tinggi; i++)
    {
        for (unsigned short j = 1; j <= tinggi - i; j++)
        {
            printf (" ");
        }
        for (unsigned short k = 1; k <= alas; k++)
        {
            printf ("*");
        }
        puts ("");
    }
}

void trapesium ()
{
    unsigned short tinggi = 0;

    printf ("Masukkan tinggi: ");
    scanf ("%hu", &tinggi);

    for (unsigned short i = 0; i < tinggi; i++)
    {
        // segitiga 1
        for (unsigned short j = 0; j < tinggi - i; j++)
        {
            printf (" ");
        }
        for (unsigned short k = 0; k < i; k++)
        {
            printf ("*");
        }

        // isi bagian tengah (biar gk jadi segitiga sama kaki)
        for (unsigned short j = 0; j < tinggi * 2; j++)
        {
            printf ("*");
        }

        // segitiga 2
        for (unsigned short k = 0; k < i; k++)
        {
            printf ("*");
        }
        puts ("");
    }
}