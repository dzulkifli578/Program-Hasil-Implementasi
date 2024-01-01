#include <stdio.h>

int main ()
{
    int desimal = 0;
    char heksadesimal [32];
    int index = 0;

    printf ("Desimal       : ");
    scanf ("%d", &desimal);

    while (desimal > 0)
    {
        int sisa = desimal % 16;
        switch (sisa)
        {
            case 10: heksadesimal [index++] = 'A';
                     break;
            case 11: heksadesimal [index++] = 'B';
                     break;
            case 12: heksadesimal [index++] = 'C';
                     break;
            case 13: heksadesimal [index++] = 'D';
                     break;
            case 14: heksadesimal [index++] = 'E';
                     break;
            case 15: heksadesimal [index++] = 'F';
                     break;
            default: heksadesimal [index++] = sisa + 48;
                     break;
        }
        desimal /= 16;
    }

    printf ("Heksadesimal  : ");
    for (int i = index - 1; i >= 0; i--)
        printf ("%c", heksadesimal [i]);

    return 0;
}
