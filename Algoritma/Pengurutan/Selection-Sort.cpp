#include <iostream>

void manual (int *ukuran);
void otomatis (int *ukuran);
void urut_dan_tampilkan (int *ukuran, int array []);

int main ()
{
    int pilihan = 0, ukuran = 0;

    do
    {
        std::cout << "========== SELECTION SORT ==========\n";
        std::cout << "1. Isi array  secara manual\n";
        std::cout << "2. Isi array secara otomatis (acak)\n";
        std::cout << "3. Keluar\n";
        std::cout << "Pilih salah satu: ";
        std::cin >> pilihan;
        std::cin.clear ();
        fflush (stdin);
        
        switch (pilihan)
        {
            case 1: manual (&ukuran);
                    break;
            case 2: otomatis (&ukuran);
                    break;
            case 3: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
        }
    } while (pilihan != 3);
        
    return 0;
}

void manual (int *ukuran)
{
    std::cout << "Masukkan batas ukuran array: ";
    std::cin >> *ukuran;

    int *array = nullptr;
    array = new int [*ukuran];

    std::cout << "Masukkan nilai tiap elemen array: ";
    for (int i = 0; i < *ukuran; i++)
    {
        std::cin >> array [i];
    }

    urut_dan_tampilkan (ukuran, array);
}

void otomatis (int *ukuran)
{
    int batas = 0;
    srand (time (0));

    std::cout << "Masukkan batas ukuran array: ";
    std::cin >> *ukuran;
    std::cout << "Masukkan batas angka acak: ";
    std::cin >> batas;

    int *array = nullptr;
    array = new int [*ukuran];

    for (int i = 0; i < *ukuran; i++)
    {
       array [i] = rand () % batas + 1;
    }

    std::cout << "Elemen array: ";
    for (int i = 0; i < *ukuran; i++)
    {
       std::cout << array [i] << " ";
    }
    std::cout << "\n";

    urut_dan_tampilkan (ukuran, array);
}

void urut_dan_tampilkan (int *ukuran, int array [])
{
    for (int i = 0; i < *ukuran - 1; i++)
    {
        int minimal = i;
        for (int j = i + 1; j < *ukuran; j++)
        {
            if (array [minimal] > array [j])
            {
                minimal = j;
            }
        }
        int sementara = array [i];
        array [i] = array [minimal];
        array [minimal] = sementara;
    }

    std::cout << "Hasil pengurutan elemen array: ";
    for (int i = 0; i < *ukuran; i++)
    {
        std::cout << array [i] << " ";
    }
    std::cout << "\n";

    delete [] array;
}