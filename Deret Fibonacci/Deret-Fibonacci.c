#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ukuran = NULL;
    ukuran = malloc (sizeof(int));

    printf ("Masukkan batas deret Fibonacci: ");
    scanf ("%i", ukuran);

    unsigned long long *array = NULL;
    array = malloc ((*ukuran) * sizeof (unsigned long long));
    array [0] = 0;
    array [1] = 1;

    for (int i = 2; i < *ukuran; i++)
    {
        array [i] = array [i - 2] + array [i - 1];
    }

    printf ("Deret Fibonacci: %i\n", *ukuran);

    for (int i = 0; i < *ukuran; i++)
    {
        printf ("%llu ", array [i]);
    }

    free (ukuran);
    free (array);

    return 0;
}