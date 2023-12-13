#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    int batas = 0, cari = 0;

    do
    {
        printf ("Masukkan batas ukuran array: ");
        scanf ("%i", &batas);
        fflush (stdin);

        if (batas <= 0)
        {
            puts ("Ukuran array harus lebih dari 0 & bukan huruf!");
        }
    } while (batas <= 0);
    
    int *array = NULL;
    array = malloc (batas * sizeof (int));

    printf ("Masukkan nilai tiap elemen array: ");
    for (int i = 0; i < batas; i++)
    {
        scanf ("%i", &array [i]);
    }

    printf ("Masukkan elemen yang dicari: ");
    scanf ("%i", &cari);

    bool konfirmasi = false;
    for (int i = 0; i < batas; i++)
    {
        if (cari == array [i])
        {
            printf ("Elemen %i berada di index %i\n", cari, i);
            konfirmasi = true;
        }
    }
    if (!konfirmasi)
    {
        printf ("Elemen %i tidak ada pada array\n", cari);
    }

    free (array);
    return 0;
}