#include <stdio.h>

void tabel_penjumlahan ();
void tabel_pengurangan ();
void tabel_perkalian ();
void tabel_pembagian ();

int main()
{
    unsigned short pilihan = 0;

    do
    {
        printf ("========== Pembuat Tabel Aritmetika ==========\n");
        printf ("1. Penjumlahan\n");
        printf ("2. Pengurangan\n");
        printf ("3. Perkalian\n");
        printf ("4. Pembagian\n");
        printf ("5. Keluar\n");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

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
                printf ("Terima kasih telah menggunakan program ini\n");
                break;
            default:
                printf ("Input error\n");
                break;
        }
    } while (pilihan > 5 || pilihan < 0);

    return 0;
}

void tabel_penjumlahan ()
{
    float batas = 0, bilangan = 0;

    printf ("Masukkan bilangan: ");
    scanf ("%f", &bilangan);
    printf ("Masukkan batas hitung: ");
    scanf ("%f", &batas);

    for (int i = 1; i <= batas; i++)
    {
        printf ("%.2f + %d = %.2f\n", bilangan, i, bilangan + i);
    }
}

void tabel_pengurangan ()
{
    float batas = 0, bilangan = 0;

    printf ("Masukkan bilangan: ");
    scanf ("%f", &bilangan);
    printf ("Masukkan batas hitung: ");
    scanf ("%f", &batas);

    for (int i = 1; i <= batas; i++)
    {
        printf ("%.2f - %d = %.2f\n", bilangan, i, bilangan - i);
    }
}

void tabel_perkalian ()
{
    float batas = 0, bilangan = 0;

    printf ("Masukkan bilangan: ");
    scanf ("%f", &bilangan);
    printf ("Masukkan batas hitung: ");
    scanf ("%f", &batas);

    for (int i = 1; i <= batas; i++)
    {
        printf ("%.2f x %d = %.2f\n", bilangan, i, bilangan * i);
    }
}

void tabel_pembagian ()
{
    float batas = 0, bilangan = 0;

    printf ("Masukkan bilangan: ");
    scanf ("%f", &bilangan);
    printf ("Masukkan batas hitung: ");
    scanf ("%f", &batas);

    for (int i = 1; i <= batas; i++)
    {
        printf ("%.2f : %d = %.2f\n", bilangan, i, bilangan / i);
    }
}
