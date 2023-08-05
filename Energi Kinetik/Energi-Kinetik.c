#include <stdio.h>
#include <math.h>

float hasil_energi_kinetik ();
float hasil_massa ();
float hasil_kecepatan ();

int main ()
{
    unsigned short pilihan = 0;

    float massa = 0, kecepatan = 0, energi_kinetik = 0;

    printf ("========== Penghitung Energi Kinetik ==========\n");

    do
    {
        printf ("1. Mencari energi kinetik\n");
        printf ("2. Mencari massa\n");
        printf ("3. Mencari kecepatan\n");
        printf ("4. Keluar\n");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        switch (pilihan)
        {
            case 1:
                energi_kinetik = hasil_energi_kinetik ();
                printf ("Energi kinetik: %f Joule\n", energi_kinetik);
                break;
            case 2:
                massa = hasil_massa ();
                printf ("Massa: %f kg\n", massa);
                break;
            case 3:
                kecepatan = hasil_kecepatan ();
                printf ("Kecepatan: %f m/s\n", kecepatan);
                break;
            case 4:
                printf ("Terima kasih telah menggunakan program ini\n");
                break;
            default:
                printf ("Input error\n");
                break;
        }
    } while (pilihan < 1 || pilihan > 4);

    return 0;
}

float hasil_energi_kinetik ()
{
    float massa = 0, kecepatan = 0;

    printf ("Masukkan massa (satuan kg): ");
    scanf ("%f", &massa);

    printf ("Masukkan kecepatan (satuan m/s): ");
    scanf ("%f", &kecepatan);

    return 0.5 * massa * pow (kecepatan, 2);
}

float hasil_massa ()
{
    float energi_kinetik = 0, kecepatan = 0;

    printf ("Masukkan energi kinetik (satuan Joule): ");
    scanf ("%f", &energi_kinetik);

    printf ("Masukkan kecepatan (satuan m/s): ");
    scanf ("%f", &kecepatan);

    return (2 * energi_kinetik) / pow (kecepatan, 2);
}

float hasil_kecepatan ()
{
    float energi_kinetik = 0, massa = 0;

    printf ("Masukkan energi kinetik (satuan Joule): ");
    scanf ("%f", &energi_kinetik);

    printf ("Masukkan massa (satuan kg): ");
    scanf ("%f", &massa);

    return sqrt ((2 * energi_kinetik) / massa);
}
