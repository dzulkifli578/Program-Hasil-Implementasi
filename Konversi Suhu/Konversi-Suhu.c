#include <stdio.h>

int main()
{
    float suhu = 0;
    char satuan;

    do
    {
        printf ("========== Konversi Suhu ==========\n");
        printf ("C = Celsius\n");
        printf ("F = Fahrenheit\n");
        printf ("Satuan mana yang ingin dikonversi?: ");
        scanf (" %c", &satuan);

        if (satuan == 'C' || satuan == 'c')
        {
            printf ("Masukkan suhu dalam satuan Fahrenheit: ");
            scanf ("%f", &suhu);

            printf ("Suhu: %.2f derajat Celsius", (1.8 * suhu) + 32);
            break;
        }

        if (satuan == 'F' || satuan == 'f')
        {
            printf ("Masukkan suhu dalam satuan Celsius: ");
            scanf ("%f", &suhu);

            printf ("Suhu: %.2f derajat Fahrenheit", (suhu - 32) / 1.8);
            break;
        }
        
        else
        {
            printf("Masukkan antara C atau F\n");
            break;
        }

    } while (satuan != 'F' && satuan != 'f' && satuan != 'C' && satuan != 'c');

    return 0;
}
