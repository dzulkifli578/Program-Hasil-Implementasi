#include <iostream>

struct Mahasiswa
{
    std::string nama = "";
    int NPM = 0;
    std::string jurusan = "";
    double IPK = 0;
};

void pilihan_pertama (int *terisi, Mahasiswa MahasiswaArray []);
void pilihan_kedua (int *terisi, Mahasiswa MahasiswaArray []);
void tampilkan_daftar (int *terisi, Mahasiswa MahasiswaArray []);
void input_daftar (int *terisi, Mahasiswa MahasiswaArray []);
void cari_daftar (int *terisi, Mahasiswa MahasiswaArray []);
void hapus_daftar (int *terisi, Mahasiswa MahasiswaArray []);

int main ()
{
    int terisi = 0;
    const int jumlah_mahasiswa = 1000;
    Mahasiswa MahasiswaArray [jumlah_mahasiswa];
    
    if (terisi == 0) pilihan_pertama (&terisi, MahasiswaArray);
    if (terisi != 0) pilihan_kedua (&terisi, MahasiswaArray);

    return 0;
}

void pilihan_pertama (int *terisi, Mahasiswa MahasiswaArray [])
{
    int pilihan = 0;

    do
    {
        std::cout << "========== DAFTAR MAHASISWA ==========\n";
        std::cout << "1. Masukkan\n";
        std::cout << "2. Keluar\n";
        std::cout << "======================================\n";
        std::cout << "Masukkan salah satu pilihan: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);
                    
        switch (pilihan)
        {
            case 1: input_daftar (terisi, MahasiswaArray);
                    break;
            case 2: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
        }
    } while (*terisi == 0 && pilihan != 2);
}

void pilihan_kedua (int *terisi, Mahasiswa MahasiswaArray [])
{
    int pilihan = 0;

    do
    {    
        std::cout << "========== DAFTAR MAHASISWA ==========\n";
        std::cout << "1. Tampilkan\n";
        std::cout << "2. Masukkan\n";
        std::cout << "3. Carikan\n";
        std::cout << "4. Hapuskan\n";
        std::cout << "5. Keluar\n";
        std::cout << "======================================\n";
        std::cout << "Masukkan salah satu pilihan: ";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);
                        
        switch (pilihan)
        {
            case 1: tampilkan_daftar (terisi, MahasiswaArray);
                    break;
            case 2: input_daftar (terisi, MahasiswaArray);
                    break;
            case 3: cari_daftar (terisi, MahasiswaArray);
                    break;
            case 4: hapus_daftar (terisi, MahasiswaArray);
                    break;
            case 5: std::cout << "Terima kasih telah menggunakan program ini!\n";
                    break;
            default: std::cout << "Input error\n";
                    break;
        }
    } while (*terisi != 0 && pilihan >= 1 && pilihan < 5);
    main ();
}

void tampilkan_daftar (int *terisi, Mahasiswa MahasiswaArray [])
{
    std::cout << "========== INFORMASI MAHASISWA ==========\n";

    if (*terisi == 0)
    {
        std::cout << "Tidak ada daftar mahasiswa yang dimasukkan\n";
    }
    else
    {
        for (int i = 0; i < *terisi; i++)
        {
            std::cout << "-----------------------------------------\n";
            std::cout << "Nama      : " << MahasiswaArray [i].nama << "\n";
            std::cout << "NPM       : " << MahasiswaArray [i].NPM << "\n";
            std::cout << "Jurusan   : " << MahasiswaArray [i].jurusan << "\n";
            std::cout << "IPK       : " << MahasiswaArray [i].IPK << "\n";
            std::cout << "-----------------------------------------\n";
        }
    }
}

void input_daftar (int *terisi, Mahasiswa MahasiswaArray [])
{
    int input = 0;

    std::cout << "Masukkan jumlah mahasiswa yang dimasukkan: ";
    std::cin >> input;
    std::cin.ignore ();

    for (int i = *terisi; i < *terisi + input; i++)
    {
        std::cout << "-----------------------------------------\n";
        std::cout << "Masukkan nama mahasiswa   : ";
        std::getline (std::cin, MahasiswaArray [i].nama);

        std::cout << "Masukkan NPM              : ";
        std::cin >> MahasiswaArray [i].NPM;
        std::cin.ignore ();

        std::cout << "Masukkan nama jurusan     : ";
        std::getline (std::cin, MahasiswaArray [i].jurusan);

        std::cout << "Masukkan nilai IPK        : ";
        std::cin >> MahasiswaArray [i].IPK;
        std::cin.ignore ();
        std::cout << "-----------------------------------------\n";
    }

    *terisi += input;
}

void cari_daftar (int *terisi, Mahasiswa MahasiswaArray [])
{
    int input = 0;

    if (*terisi == 0)
        std::cout << "Tidak ada daftar mahasiswa yang dimasukkan\n";
    else
    {
        std::cout << "Masukkan NPM mahasiswa    : ";
        std::cin >> input;

        for (int i = 0; i < *terisi; i++)
        {
            if (input == MahasiswaArray [i].NPM)
            {
                std::cout << "-----------------------------------------\n";
                std::cout << "Nama      : " << MahasiswaArray [i].nama << "\n";
                std::cout << "NPM       : " << MahasiswaArray [i].NPM << "\n";
                std::cout << "Jurusan   : " << MahasiswaArray [i].jurusan << "\n";
                std::cout << "IPK       : " << MahasiswaArray [i].IPK << "\n";
                std::cout << "-----------------------------------------\n";
                break;
            }
            else std::cout << "NPM mahasiswa tidak ditemukan\n";
        }
    }
}

void hapus_daftar (int *terisi, Mahasiswa MahasiswaArray [])
{
    int input = 0;

    std::cout << "Masukkan NPM mahasiswa    : ";
    std::cin >> input;

    int indeks = -1;
    for (int i = 0; i < *terisi; i++)
    {
        if (input == MahasiswaArray [i].NPM)
        {
            indeks = i;
            break;
        }
    }

    if (indeks != -1)
    {
        for (int i = indeks; i < *terisi - 1; i++)
            MahasiswaArray[i] = MahasiswaArray[i + 1];
        (*terisi)--;
        std::cout << "Mahasiswa dengan NPM " << input << " telah dihapus.\n";
    }
    else std::cout << "Mahasiswa dengan NPM " << input << " tidak ditemukan.\n";
}