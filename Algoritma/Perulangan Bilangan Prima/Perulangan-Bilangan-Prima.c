#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int batas = 0;

    printf ("Masukkan batas perulangan bilangan prima: ");
    scanf ("%d", &batas);

    printf ("Bilangan prima dari 2 hingga %d:\n", batas);

    for (int i = 2; i <= batas; i++)
    {
        bool prima = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prima = false;
                break;
            }
        }
        if (prima)
            printf ("%d ", i);
    }
    printf ("\n");

    return 0;
}