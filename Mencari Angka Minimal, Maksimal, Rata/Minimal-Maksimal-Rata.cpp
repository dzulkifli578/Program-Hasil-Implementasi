#include <iostream>
#include <iomanip>

void urut_angka (int angka [], unsigned short *batas);
void rata_rata (int angka [], int *ukuran, unsigned short *batas);

int main ()
{
    /*
        inisialisasi variabel:
        - batas  = untuk membatasi perulangan yang berhubungan dengan array
        - angka  = array untuk menampung angka yang ditentukan
        - ukuran = ukuran array itu sendiri
    */
    unsigned short batas = 5;
    int angka [5];
    int ukuran = sizeof (angka) / sizeof (int), tambah = 0;

    // memasukkan angka ke dalam array untuk diproses
    for (unsigned short i = 0; i < batas; i++)
    {
        std::cin >> angka [i];
    }

    // memanggil fungsi urut_angka untuk menentukan nilai minimal dan nilai maksimal
    urut_angka (angka, &batas);

    // memanggil fungsi rata_rata untuk menghitung rata-rata 
    rata_rata (angka, &ukuran, &batas);
    
    return 0;
}

void urut_angka (int angka [], unsigned short *batas)
{
    // mengurutkan angka-angka di dalam elemen array menggunakan algoritma bubble sort
    for (unsigned short i = 0; i < *batas - 1; i++)
    {
        for (unsigned short j = 0; j < *batas - i - 1; j++)
        {
            if (angka [j] > angka [j + 1])
            {
                int sementara = 0;
                sementara = angka [j];
                angka [j] = angka [j + 1];
                angka [j + 1] = sementara;
            }
        }
    }

    // menampilkan nilai minimal dengan mengambil elemen array dengan index pertama
    std::cout << "Nilai minimal: " << angka [0] << "\n";
    // menampilkan nilai maksimal dengan mengambil elemen array dengan index terakhir
    std::cout << "Nilai maksimal: " << angka [4] << "\n";
}

void rata_rata (int angka [], int *ukuran, unsigned short *batas)
{
    // inisialisasi variabel tambah untuk menampung elemen array untuk diproses
    int tambah = 0;
    for (unsigned short i = 0; i < *batas; i++)
    {
        tambah += angka [i];
    }

    /*
        menghitung nilai rata-rata dari variabel tambah

        rumus rata-rata:
        - (total semua nilai / jumlah nilai yang dimasukkan)
    */
    tambah /= *ukuran;
    std::cout << "Nilai rata-rata: " << std::fixed << std::setprecision (2) << tambah << "\n";
}
