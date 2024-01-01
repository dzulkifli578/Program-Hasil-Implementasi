#include <stdio.h>

int main ()
{
    int desimal = 0;
    char biner [32];
    int index = 0;

    printf ("Desimal   : ");
    scanf ("%d", &desimal);

    while (desimal > 0)
    {
        int sisa = desimal % 2;
        biner [index++] = sisa + 48;
        desimal /= 2;
    }

    printf ("Biner     : ");
    for (int i = index - 1; i >= 0; i--)
        printf ("%c", biner [i]);
    
    return 0;
}