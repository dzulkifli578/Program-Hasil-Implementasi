#include <iostream>
#include <iomanip>
using namespace std;

void bubble_sort (int arr [], int *size);
void mean (int arr [], int *size);
void median (int arr [], int *size);
void mode (int arr [], int *size);
void range (int arr [], int *size);

int main ()
{
    // inisialisasi array dan ukuran array
    int *arr = nullptr, size = 0;

    // input ukuran array dari user
    cin >> size;
    arr = new int [size];

    // input setiap elemen array
    for (int i = 0; i < size; i++)
    {
        cin >> arr [i];
    }

    // memanggil fungsi-fungsi yang diperlukan
    bubble_sort (arr, &size);
    cout << "Mean      : "; mean (arr, &size);
    cout << "Median    : "; median (arr, &size);
    cout << "Mode      : "; mode (arr, &size);
    cout << "Range     : "; range (arr, &size);

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
    cout << fixed << setprecision (2) << mean << "\n";
}
void median (int arr [], int *size)
{
    // median = nilai tengah
    if (*size % 2 == 1)
    {
        cout << arr [*size / 2 - 1] << "\n";
    }
    else
    {
        double median = (arr [(*size / 2 - 1)] + arr [(*size / 2)]) / 2.0;
        cout << fixed << setprecision (2) << median << "\n";
    }
}
void mode (int arr [], int *size)
{
    // mode = frekuensi nilai yang sering muncul, apabila ada yang sama
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

    cout << angka << "\n";
    
}
void range (int arr [], int *size)
{
    // range = nilai terbesar - nilai terkecil
    cout << arr [*size - 1] - arr [0] << "\n";
}

