#include <stdio.h>

int main ()
{
    int batas = 0, jumlah = 0, produk = 1;

    scanf ("%d", &batas);

    for (int i = 1; i < batas; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            jumlah += i;
            produk *= i;
        }
    }

    printf ("%d\n%d", jumlah, produk);

    return 0;
}