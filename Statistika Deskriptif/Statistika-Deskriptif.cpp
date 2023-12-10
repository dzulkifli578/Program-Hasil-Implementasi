#include <iostream>
#include <iomanip>

void data (int *ukuran, int array []);
void urut_array (int *ukuran, int array []);
void mean (int *ukuran, int array []);
void median (int *ukuran, int array []);
void mode (int *ukuran, int array []);
void range (int *ukuran, int array []);

int main ()
{
    int *ukuran = nullptr;
    ukuran = new int;

    std::cout << "====================== INPUT DATA =====================\n";
    std::cout << "Masukkan batas banyaknya data : ";
    std::cin >> *ukuran;

    int *array = nullptr;
    array = new int [*ukuran];

    std::cout << "Masukkan nilai tiap data      : ";
    for (int i = 0; i < *ukuran; i++)
    {
        std::cin >> array [i];
    }

    data (ukuran, array);
    mean (ukuran, array);
    median (ukuran, array);
    mode (ukuran, array);
    range (ukuran, array);
    
    delete [] array;
    delete ukuran;

    return 0;
}

void data (int *ukuran, int array [])
{
    std::cout << "================== IDENTIFIKASI DATA ==================\n";
    std::cout << "Data yang dimasukkan          : ";
    for (int i = 0; i < *ukuran; i++)
    {
        std::cout << array [i] << " ";
    }
    std::cout << "\n";

    urut_array (ukuran, array);
    std::cout << "Data yang terurut             : ";
    for (int i = 0; i < *ukuran; i++)
    {
        std::cout << array [i] << " ";
    }
    std::cout << "\n";

    std::cout << "Min                           : " << array [0] << "\n";
    std::cout << "Max                           : " << array [*ukuran - 1] << "\n";
    std::cout << "================ STATISTIKA DESKRIPTIF ================\n";
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

    std::cout << "Mean                          = " << std::fixed << std::setprecision (2) << jumlah / *ukuran << "\n";
}

void median (int *ukuran, int array [])
{
    *ukuran % 2 == 1 ?
        std::cout << "Median                        = " << array [(*ukuran - 1) / 2] << "\n" :
        std::cout << "Median                        = " << (array [(*ukuran / 2) - 1] + array [*ukuran / 2]) / 2.0 << "\n";
}

void mode (int *ukuran, int array [])
{
    int *frekuensi = nullptr;
    frekuensi = new int [*ukuran] {0};

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
        std::cout << "Mode                          = " << array [max_frekuensi] << "\n" :
        std::cout << "Mode                          = -" << "\n";

    delete [] frekuensi;
}

void range (int *ukuran, int array [])
{
    std::cout << "Range                         = " << array [*ukuran - 1] - array [0];
}