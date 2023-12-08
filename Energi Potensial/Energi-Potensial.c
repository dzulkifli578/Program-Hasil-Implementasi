#include <stdio.h>

const float gravitasi = 10;

float hasil_massa ();
float hasil_ketinggian ();
float hasil_energi_potensial ();

int main()
{
    unsigned short pilihan = 0;
    float massa = 0, ketinggian = 0, energi_potensial = 0;

    do
    {
        puts ("========== Penghitung Energi Potensial ==========");
        puts ("1. Mencari energi potensial");
        puts ("2. Mencari massa");
        puts ("3. Mencari ketinggian");
        puts ("4. Keluar");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        switch (pilihan)
        {
            case 1:
                energi_potensial = hasil_energi_potensial ();
                printf ("Energi potensial: %f Joule\n", energi_potensial);
                break;
            case 2:
                massa = hasil_massa ();
                printf ("Massa: %f kg\n", massa);
                break;
            case 3:
                ketinggian = hasil_ketinggian ();
                printf ("Ketinggian: %f m\n", ketinggian);
                break;
            case 4:
                puts ("Terima kasih telah menggunakan program ini!");
                break;
            default:
                puts ("Input error");
        }
    } while (pilihan != 4);

    return 0;
}

float hasil_energi_potensial ()
{
    float massa = 0, ketinggian = 0;

    printf ("Masukkan massa (satuan kg): ");
    scanf ("%f", &massa);

    printf ("Masukkan ketinggian (satuan m): ");
    scanf ("%f", &ketinggian);

    return massa * gravitasi * ketinggian;
}

float hasil_massa ()
{
    float energi_potensial = 0, ketinggian = 0;

    printf ("Masukkan energi potensial (satuan Joule): ");
    scanf ("%f", &energi_potensial);

    printf ("Masukkan ketinggian (satuan m): ");
    scanf ("%f", &ketinggian);

    return energi_potensial / (gravitasi * ketinggian);
}

float hasil_ketinggian ()
{
    float energi_potensial = 0, massa = 0;

    printf ("Masukkan energi potensial (satuan Joule): ");
    scanf ("%f", &energi_potensial);

    printf ("Masukkan massa (satuan kg): ");
    scanf ("%f", &massa);

    return energi_potensial / (massa * gravitasi);
}