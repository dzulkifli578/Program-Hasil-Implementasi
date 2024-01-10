#include <stdio.h>

int main ()
{
    int rute = 0, kesulitan [100];
    scanf ("%d", &rute);

    for (int  i = 0; i < rute; i++)
        scanf ("%d", &kesulitan [i]);

    for (int  i = 0; i < rute - 1; i++)
        for (int  j = 0; j < rute - i - 1; j++)
            if (kesulitan [j] > kesulitan [j + 1])
            {
                int sementara = kesulitan [j];
                kesulitan [j] = kesulitan [j + 1];
                kesulitan [j + 1] = sementara;
            }

    printf ("\n%d", kesulitan [0]);
    return 0;
}