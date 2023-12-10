#include <stdio.h>
#include <stdlib.h>

void data (int *ukuran, int array []);
void urut_array (int *ukuran, int array []);
void mean (int *ukuran, int array []);
void median (int *ukuran, int array []);
void mode (int *ukuran, int array []);
void range (int *ukuran, int array []);

int main ()
{
    int *ukuran = NULL;
    ukuran = malloc (sizeof (int));

    puts ("====================== INPUT DATA =====================");
    printf ("Masukkan batas banyaknya data : ");
    scanf ("%i", ukuran);

    int *array = NULL;
    array = malloc (*ukuran * sizeof (int));

    printf ("Masukkan nilai tiap data      : ");
    for (int i = 0; i < *ukuran; i++)
    {
        scanf ("%i", &array [i]);
    }

    data (ukuran, array);
    mean (ukuran, array);
    median (ukuran, array);
    mode (ukuran, array);
    range (ukuran, array);

    free (array);
    free (ukuran);
}

void data (int *ukuran, int array [])
{
    puts ("================== IDENTIFIKASI DATA ==================");
    printf ("Data yang dimasukkan          : ");
    for (int i = 0; i < *ukuran; i++)
    {
        printf ("%i ", array [i]);
    }
    puts ("");

    urut_array (ukuran, array);
    printf ("Data yang terurut             : ");
    for (int i = 0; i < *ukuran; i++)
    {
        printf ("%i ", array [i]);
    }
    puts ("");

    printf ("Min                           : %i\n", array [0]);
    printf ("Max                           : %i\n", array [*ukuran - 1]);
    puts ("================ STATISTIKA DESKRIPTIF ================");
}

void urut_array (int *ukuran, int array [])
{
    for (int i = 0; i < *ukuran - 1; i++)
    {
        for (int j = 0; j < *ukuran - i - 1; j++)
        {
            if (array [j] > array [j + 1])
            {
                int sementara = array [j];
                array [j] = array [j + 1];
                array [j + 1] = sementara;
            }
        }
    }
}

void mean (int *ukuran, int array [])
{
    float jumlah = 0;

    for (int i = 0; i < *ukuran; i++)
    {
        jumlah += array [i];
    }

    printf ("Mean                          = %.2f\n", jumlah / *ukuran);
}

void median (int *ukuran, int array [])
{
    *ukuran % 2 == 1 ?
    printf ("Median                        = %i\n", array [(*ukuran - 1) / 2]) :
    printf ("Median                        = %.2f\n", (array [(*ukuran / 2) - 1] + array [*ukuran / 2]) / 2.0);
}

void mode (int *ukuran, int array [])
{
    int *frekuensi = NULL;
    frekuensi = calloc (*ukuran, sizeof (int));

    for (int i = 0; i < *ukuran; i++)
    {
        for (int j = 0; j < *ukuran; j++)
        {
            if (array [j] == array [i])
            {
                frekuensi [i]++;
            }
        }
    }

    int max_frekuensi = 0;
    for (int i = 0; i < *ukuran; i++)
    {
        if (frekuensi [i] > frekuensi [max_frekuensi])
        {
            max_frekuensi = i;
        }
    }

    frekuensi [max_frekuensi] > 1 ?
        printf ("Mode                          = %i\n", array [max_frekuensi]) :
        printf ("Mode                          = -\n");

    free (frekuensi);
}

void range (int *ukuran, int array [])
{
    printf ("Range                         = %i", array [*ukuran - 1] - array [0]);
}