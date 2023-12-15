#include <stdio.h>
#include <stdlib.h>

void manual (int *ukuran);
void otomatis (int *ukuran);
void urut_dan_tampilkan (int *ukuran, int array []);

int main()
{
    int pilihan = 0, ukuran = 0;

    do
    {
        puts ("========== INSERTION SORT ==========");
        puts ("1. Isi array secara manual");
        puts ("2. Isi array secara otomatis (acak)");
        puts ("3. Keluar");
        printf ("Pilih salah satu: ");
        scanf ("%d", &pilihan);
        fflush (stdin);
        
        switch (pilihan)
        {
            case 1: manual (&ukuran);
                    break;
            case 2: otomatis (&ukuran);
                    break;
            case 3: puts ("Terima kasih telah menggunakan program ini!");
                    break;
            default: puts ("Input error");
        }
    } while (pilihan != 3);

    return 0;
}

void manual (int *ukuran)
{
    printf ("Masukkan batas ukuran array: ");
    scanf ("%d", ukuran);

    int *array = NULL;
    array = malloc (*ukuran * sizeof (int));

    puts ("Masukkan nilai tiap elemen array:");
    for (int i = 0; i < *ukuran; i++)
    {
        scanf ("%d", &array [i]);
    }

    urut_dan_tampilkan (ukuran, array);
}

void otomatis (int *ukuran)
{
    int batas = 0;
    srand (time (0));

    printf ("Masukkan batas ukuran array: ");
    scanf ("%d", ukuran);
    printf ("Masukkan batas angka acak: ");
    scanf ("%d", &batas);

    int *array = NULL;
    array = malloc (*ukuran * sizeof (int));

    for (int i = 0; i < *ukuran; i++)
    {
        array[i] = rand () % batas + 1;
    }

    puts ("Elemen array:");
    for (int i = 0; i < *ukuran; i++)
    {
        printf("%d ", array [i]);
    }
    puts ("");

    urut_dan_tampilkan (ukuran, array);
}

void urut_dan_tampilkan (int *ukuran, int array [])
{
    for (int i = 1; i < *ukuran; i++)
    {
        int sementara = array [i];
        int j = i - 1;
        while (j >= 0 && array [j] > sementara)
        {
            array [j + 1] = array [j];
            j--;
        }
        array [j + 1] = sementara;
    }

    puts ("Hasil pengurutan elemen array:");
    for (int i = 0; i < *ukuran; i++)
    {
        printf ("%d ", array [i]);
    }
    puts ("");

    free (array);
}