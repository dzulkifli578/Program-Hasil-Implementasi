#include <stdio.h>
#include <stdlib.h>

void input_nilai (int *matkul, int array []);
void status (int *matkul, int array []);

int main ()
{
    int matkul = 0;

    printf("Masukkan jumlah mata kuliah: ");
    scanf("%d", &matkul);

    int *array = NULL;
    array = calloc(matkul, sizeof (int));

    input_nilai (&matkul, array);
    status (&matkul, array);

    free (array);
    return 0;
}

void input_nilai(int *matkul, int array [])
{
    int kehadiran = 0, attitude = 0, uts = 0, uas = 0, nilai = 0;

    for (int i = 0; i < *matkul; i++)
    {
        puts ("==============================");
        printf ("Masukkan nilai kehadiran  : ");
        scanf ("%d", &kehadiran);
        printf ("Masukkan nilai attitude   : ");
        scanf ("%d", &attitude);
        printf ("Masukkan nilai UTS        : ");
        scanf ("%d", &uts);
        printf ("Masukkan nilai UAS        : ");
        scanf ("%d", &uas);
        puts ("==============================");

        nilai = (0.2 * kehadiran) + (0.2 * attitude) + (0.2 * uts) + (0.2 * uas);
        array [i] = nilai;

        puts ("==============================");
        printf ("Nilai kehadiran           : %d\n", kehadiran);
        printf ("Nilai attitude            : %d\n", attitude);
        printf ("Nilai UTS                 : %d\n", uts);
        printf ("Nilai UAS                 : %d\n", uas);
        puts ("==============================");

        printf ("Total Nilai               : %d", array [i]);
        if (nilai >= 80)
            puts (" (A)");
        else if (nilai >= 70)
            puts (" (B)");
        else if (nilai >= 60)
            puts (" (C)");
        else if (nilai >= 50)
            puts (" (D)");
        else if (nilai >= 0)
            puts (" (E)");
    }
}

void status (int *matkul, int array [])
{
    int salah = 0;

    for (int i = 0; i < *matkul; i++)
        if (array [i] < 70)
            salah++;

    salah == 0 ?
        puts ("Status                    : Lulus") :
        puts ("Status                    : Tidak Lulus");
        puts ("==============================");
}