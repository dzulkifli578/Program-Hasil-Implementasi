#include <iostream>

void input_nilai (int *matkul, int array []);
void status (int *matkul, int array []);

int main ()
{
    int matkul = 0;

    std::cout << "Masukkan jumlah mata kuliah: ";
    std::cin >> matkul;

    int *array = nullptr;
    array = new int [matkul];

    input_nilai (&matkul, array);
    status (&matkul, array);
    
    delete [] array;
    return 0;
}

void input_nilai (int *matkul, int array [])
{
    int kehadiran = 0, attitude = 0, uts = 0, uas = 0, nilai = 0;

    for (int i = 0; i < *matkul; i++)
    {
        std::cout << "==============================\n";
        std::cout << "Masukkan nilai kehadiran  : ";
        std::cin >> kehadiran;
        std::cout << "Masukkan nilai attitude   : ";
        std::cin >> attitude;
        std::cout << "Masukkan nilai UTS        : ";
        std::cin >> uts;
        std::cout << "Masukkan nilai UAS        : ";
        std::cin >> uas;
        std::cout << "==============================\n";

        nilai = (0.2 * kehadiran) + (0.2 * attitude) + (0.2 * uts) + (0.2 * uas);
        array [i] = nilai;

        std::cout << "==============================\n";
        std::cout << "Nilai kehadiran           : " << kehadiran << "\n";
        std::cout << "Nilai attitude            : " << attitude << "\n";
        std::cout << "Nilai UTS                 : " << uts << "\n";
        std::cout << "Nilai UAS                 : " << uas << "\n";
        std::cout << "==============================\n";

        std::cout << "Total Nilai               : " << array [i];
        if (nilai >= 80)
            std::cout << " (A)\n";
        else if (nilai >= 70)
            std::cout << " (B)\n";
        else if (nilai >= 60)
            std::cout << " (C)\n";
        else if (nilai >= 50)
            std::cout << " (D)\n";
        else if (nilai >= 0)
            std::cout << " (E)\n";
    }
}

void status (int *matkul, int array [])
{
    int salah = 0;

    for (int i = 0; i < *matkul; i++)
        if (array [i] < 70)
            salah++;

    salah == 0 ?
        std::cout << "Status                    : Lulus\n" :
        std::cout << "Status                    : Tidak Lulus\n";
        std::cout << "==============================\n";
}