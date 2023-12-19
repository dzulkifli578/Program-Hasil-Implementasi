#include <stdio.h>

int main ()
{
    int batas = 0;
    scanf ("%d", &batas);

    for (int i = 0; i < batas; i++)
    {
        int angka = 0, prima = 0;
        scanf ("%d", &angka);

        if (angka == 1)
        {
            puts ("Bukan bilangan prima");
            continue;
        }

        for (int j = 2; j * j <= angka; j++)
        {
            if (angka % j == 0)
            {
                prima++;
                break;
            }
        }

        prima == 0 ?
            puts ("Bilangan prima") :
            puts ("Bukan bilangan prima");
    }

    return 0;
}