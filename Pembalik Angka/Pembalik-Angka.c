#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int batas = 0;

    printf ("Masukkan batas input angka: ");
    scanf ("%d", &batas);

    char **array = malloc (batas * sizeof (char*));

    puts ("Masukkan daftar angka:");
    for (int i = 0; i < batas; i++)
    {
        array [i] = malloc (100 * sizeof (char));
        scanf ("%s", array [i]);
    }

    puts ("Daftar angka yang dibalik:");
    for (int i = 0; i < batas; i++)
    {
        int elemen = strlen (array [i]) - 1;
        for (int j = elemen; j >= 0; j--)
            printf ("%c", array [i][j]);
        puts ("");
    }

    for (int i = 0; i < batas; i++)
        free (array [i]);
    free (array);

    return 0;
}