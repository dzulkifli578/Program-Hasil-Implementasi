
#include <stdio.h>

int main ()
{
    int baris = 0, kolom = 0;

    printf ("Masukkan baris matriks: ");
    scanf ("%d", &baris);
    printf ("Masukkan kolom matriks: ");
    scanf ("%d", &kolom);

    int matriks [baris][kolom];

    printf ("Masukkan elemen matriks:\n");
    for (int i = 0; i < baris; i++)
        for (int j = 0; j < kolom; j++)
            scanf ("%d", &matriks [i][j]);

    printf ("Transpose matriks:\n");
    for (int j = 0; j < kolom; j++)
    {
        for (int i = 0; i < baris; i++)
            printf ("%d ", matriks [i][j]);
        puts ("");
    }

    return 0;
}