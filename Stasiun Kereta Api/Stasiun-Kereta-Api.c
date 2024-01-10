#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int stasiun = 0, nomor_stasiun [100], unik = 0;

    scanf ("%d", &stasiun);

    for (int i = 0; i < stasiun; i++)
    {
        bool beda = true;
        scanf ("%d", &nomor_stasiun [i]);

        for (int j = 0; j < i; j++)
            if (nomor_stasiun [i] == nomor_stasiun [j])
            {
                beda = false;
                break;
            }

        if (beda) unik++;
    }

    printf ("\n%d", unik);
    return 0;
}