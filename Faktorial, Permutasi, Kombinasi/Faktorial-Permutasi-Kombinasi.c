#include <stdio.h>

void faktorial ();
void permutasi ();
void kombinasi ();

int main ()
{
    unsigned short pilihan = 0;

    do
    {
        printf ("========== Faktorial, Permutasi, Kombinasi ==========\n");
        printf ("1. Faktorial\n");
        printf ("2. Permutasi\n");
        printf ("3. Kombinasi\n");
        printf ("4. Keluar\n");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        fflush (stdin);

        switch (pilihan)
        {
        case 1: faktorial();
                break;
        case 2: permutasi();
                break;
        case 3: kombinasi();
                break;
        case 4: printf ("Terima kasih telah menggunakan program ini!\n");
                break;
        default: printf("Input error\n");
                break;
        }
    } while (pilihan != 4);

    return 0;
}

void faktorial ()
{
    int angka = 0, hasil = 1;

    printf ("Masukkan bilangan faktorial: ");
    scanf ("%d", &angka);

    for (int i = angka; i >= 1; i--)
    {
        hasil *= i;
    }

    printf ("%d\n", hasil);
}

void permutasi ()
{
    int n = 0, p = 1, k = 0;

    printf ("Masukkan bilangan keseluruhan: ");
    scanf ("%d", &n);
    printf ("Masukkan bilangan asli (tidak termasuk duplikat): ");
    scanf ("%d", &k);

    // n! / (n - k)!
    for (int i = n; i > n - k; i--)
    {
        p *= i;
    }

    printf ("%d\n", p);
}

void kombinasi ()
{
    int n = 0, r = 0, n_faktorial = 1, r_faktorial = 1, nr_faktorial = 1;

    printf ("Masukkan bilangan keseluruhan: ");
    scanf ("%d", &n);
    printf ("Masukkan bilangan pilihan: ");
    scanf ("%d", &r);

    // n!
    for (int i = n; i > 0; i--)
    {
        n_faktorial *= i;
    }
    // (n-r)!
    for (int i = n - r; i > 0; i--)
    {
        nr_faktorial *= i;
    }
    // r!
    for (int i = r; i > 0; i--)
    {
        r_faktorial *= i;
    }

    printf ("%d\n", n_faktorial / (r_faktorial * nr_faktorial));
}
