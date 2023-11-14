#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int arr [], int *size);
void mean (int arr [], int *size);
void median (int arr [], int *size);
void mode (int arr [], int *size);
void range (int arr [], int *size);

int main ()
{
    // inisialisasi array dan ukuran array
    int *arr = NULL, size = 0;

    // input ukuran array dari user
    scanf ("%i", &size);
    arr = (int *) malloc (size * sizeof (int));

    // input setiap elemen array
    for (int i = 0; i < size; i++)
    {
        scanf ("%i", &arr [i]);
    }

    // memanggil fungsi-fungsi yang diperlukan
    bubble_sort (arr, &size);
    printf ("Mean      : "); mean (arr, &size);
    printf ("Median    : "); median (arr, &size);
    printf ("Mode      : "); mode (arr, &size);
    printf ("Range     : "); range (arr, &size);

    // menghapus array setelah dipakai untuk membebaskan memori heap
    free (arr);
    // mengembalikan nilai 0, artinya program sukses berjalan
    return 0;
}

void bubble_sort (int arr [], int *size)
{
    // mengurutkan elemen array dengan algoritma bubble sort
    for (int i = 0; i < *size - 1; i++)
    {
        for (int j = 0; j < *size - i - 1; j++)
        {
            if (arr [j] > arr [j + 1])
            {
                int x = arr [j];
                arr [j] = arr [j + 1];
                arr [j + 1] = x;
            }
        }
    }
}
void mean (int arr [], int *size)
{
    // mean = total semua nilai / jumlah nilai yang dimasukkan
    double mean = 0;
    for (int i = 0; i < *size; i++)
    {
        mean += arr [i];
    }
    
    mean /= *size;
    printf ("%.2lf\n", mean);
}
void median (int arr [], int *size)
{
    // median = nilai tengah
    if (*size % 2 == 1)
    {
        printf ("%i\n", arr [*size / 2 - 1]);
    }
    else
    {
        double median = (arr [(*size / 2 - 1)] + arr [(*size / 2)]) / 2.0;
        printf ("%.2lf\n", median);
    }
}
void mode (int arr [], int *size)
{
    // mode = frekuensi nilai yang sering muncul
    int mode = 0, angka = 0, max = 0, hitung;

    for (int i = 0; i < *size; i++)
    {
        angka = arr [i];
        hitung = 0;
        for (int j = 0; j < *size; j++)
        {
            if (angka == arr [j])
            {
                hitung++;
            }
            if (hitung > max)
            {
                max = hitung;
                if (max == 1)
                {
                    mode = arr [0];
                }
                else
                {
                    mode = angka;
                }
            }
        }

    }

    printf ("%i\n", angka);
    
}
void range (int arr [], int *size)
{
    // range = nilai terbesar - nilai terkecil
    printf ("%i\n", arr [*size - 1] - arr [0]);
}

