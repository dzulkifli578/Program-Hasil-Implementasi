#include <stdio.h>

int main ()
{
    int desimal = 0;
    char oktal [32];
    int index = 0;

    printf ("Desimal       : ");
    scanf ("%d", &desimal);

    while (desimal > 0)
    {
        int sisa = desimal % 8;
        oktal[index++] = sisa + 48;
        desimal /= 8;
    }

    printf ("Oktal         : ");
    for (int i = index - 1; i >= 0; i--)
        printf("%c", oktal [i]);

    return 0;
}
