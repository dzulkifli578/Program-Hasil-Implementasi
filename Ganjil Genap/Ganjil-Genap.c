#include <stdio.h>

int main ()
{
    int batas = 0;

    scanf ("%d", &batas);

    for (int i = 1; i <= batas; i += 2)
        printf ("%d ", i);

    puts ("");

    for (int i = 2; i <= batas; i += 2)
        printf ("%d ", i);

    return 0;
}