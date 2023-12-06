#include <stdio.h>

int main()
{
    float suhu = 0;
    char satuan;

    do
    {
        puts ("========== Konversi Suhu ==========");
        puts ("C = Celsius");
        puts ("F = Fahrenheit");
        puts ("K = Keluar");
        printf ("Satuan mana yang ingin dikonversi?: ");
        scanf ("%s", &satuan);

        if (satuan == 'C' || satuan == 'c')
        {
            printf ("Masukkan suhu dalam satuan Fahrenheit: ");
            scanf ("%f", &suhu);

            printf ("Suhu: %.2f derajat Celsius\n", (suhu - 32) * 5 / 9);
        }
        else if (satuan == 'F' || satuan == 'f')
        {
            printf ("Masukkan suhu dalam satuan Celsius: ");
            scanf ("%f", &suhu);

            printf ("Suhu: %.2f derajat Fahrenheit\n", (suhu * 9 / 5) + 32);
        }
        else if (satuan == 'K' || satuan == 'k')
        {
            puts ("Terima kasih telah menggunakan program ini!");
            break;
        }
        else
        {
            puts ("Masukkan antara C|F|K");
            continue;
        }
    } while (1);

    return 0;
}