#include <stdio.h>

int main ()
{
    int karyawan = 0, waktu = 1, tugas = 0, bonus = 0, gaji[100];

    scanf("%i", &karyawan);

    for (int i = 0; i < karyawan; i++)
    {
        scanf("%d %d", &waktu, &tugas);
        if (waktu >= 40 && tugas >= 20) bonus = 500000;
        gaji [i] = bonus + (50000 * waktu);
    }

    for (int i = 0; i < karyawan; i++)
        printf ("%d\n", gaji [i]);

    return 0;
}