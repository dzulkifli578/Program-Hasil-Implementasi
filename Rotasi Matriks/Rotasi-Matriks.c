#include <stdio.h>

int main ()
{
    int kolom = 0, baris = 0;

    printf ("Masukkan panjang kolom matriks: ");
    scanf ("%d", &kolom);
    printf ("Masukkan panjang baris matriks: ");
    scanf ("%d", &baris);

    int array [kolom][baris];

    puts ("Masukkan elemen matriks:");
    for (int i = 0; i < kolom; i++)
        for (int j = 0; j < baris; j++)
            scanf ("%d", &array [i][j]);

    puts ("Rotasi matriks:");
    for (int j = 0; j < baris; j++)
    {
        for (int i = kolom - 1; i >= 0; i--)
            printf ("%d ", array [i][j]);
        puts ("");
    }

    return 0;
}