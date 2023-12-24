#include <stdio.h>

int main ()
{
    char digit [16];
    int digit_angka [16], hasil = 0;

    puts ("Masukkan nomor kartu:");
    for (int i = 0; i < 16; i++)
        scanf ("%c", &digit [i]);

    for (int i = 0; i < 16; i++)
    {
        digit_angka [i] = digit [i] - 48;

        if (i == 0 || i % 2 == 0)
        {
            digit_angka [i] *= 2;
            if (digit_angka [i] > 9) digit_angka [i] -= 9;
        }

        hasil += digit_angka [i];
    }

    
    hasil % 10 == 0 ?
        puts ("Nomor kartu valid") :
        puts ("Nomor kartu tidak valid");
        
    return 0;
}