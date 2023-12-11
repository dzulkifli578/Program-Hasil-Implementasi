#include <stdio.h>

void faktorial ();
void permutasi ();
void kombinasi ();

int main ()
{
    unsigned short pilihan = 0;

    do
    {
        puts ("========== KOMBINATORIKA ==========");
        puts ("1. Faktorial");
        puts ("2. Permutasi");
        puts ("3. Kombinasi");
        puts ("4. Keluar");
        puts ("===================================");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        fflush (stdin);

        switch (pilihan)
        {
        case 1: faktorial ();
                break;
        case 2: permutasi ();
                break;
        case 3: kombinasi();
                break;
        case 4: puts ("Terima kasih telah menggunakan program ini!");
                break;
        default: puts ("Input error");
                break;
        }
    } while (pilihan != 4);

    return 0;
}

void faktorial ()
{
    int angka = 0, hasil = 1;

    printf ("Masukkan bilangan faktorial: ");
    scanf ("%i", &angka);

    for (int i = angka; i >= 1; i--)
    {
        hasil *= i;
    }

    printf ("%i! = %i\n", angka, hasil);
}

void permutasi ()
{
    int n = 0, p = 1, k = 0;

    printf ("Masukkan bilangan keseluruhan: ");
    scanf ("%i", &n);
    printf ("Masukkan bilangan asli (tidak termasuk duplikat): ");
    scanf ("%i", &k);

    for (int i = n; i > n - k; i--)
    {
        p *= i;
    }

    printf ("Hasil: %i\n", p);
}

void kombinasi ()
{
    int n = 0, r = 0, n_faktorial = 1, r_faktorial = 1, nr_faktorial = 1;

    printf ("Masukkan bilangan keseluruhan: ");
    scanf ("%i", &n);
    printf ("Masukkan bilangan pilihan: ");
    scanf ("%i", &r);

    for (int i = n; i > 0; i--)
    {
        n_faktorial *= i;
    }
    for (int i = n - r; i > 0; i--)
    {
        nr_faktorial *= i;
    }
    for (int i = r; i > 0; i--)
    {
        r_faktorial *= i;
    }

    printf ("Hasil: %i\n", n_faktorial / (r_faktorial * nr_faktorial));
}