#include <stdio.h>

void baris (int *a, int *b, int *u1, int *u2, int *u3);
void suku_ke_n (int *a, int *b);
void beda (int *u1, int *u2, int *u3, int *b);
void suku_tengah (int *a);
void deret ();

int main ()
{
    int a = 0, b = 0, u1 = 0, u2 = 0, u3 = 0;

    unsigned short pilihan = 0;

    do
    {
        printf ("========== Baris dan Deret Aritmetika ==========\n");
        printf ("1. Baris\n");
        printf ("2. Deret\n");
        printf ("3. Keluar\n");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        fflush (stdin);

        switch (pilihan)
        {
            case 1:
                baris (&a, &b, &u1, &u2, &u3);
                break;
            case 2:
                deret ();
                break;
            case 3:
                printf ("Terima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf ("Input error\n");
                break;
        }
    } while (pilihan != 3);

    return 0;
}

void baris (int *a, int *b, int *u1, int *u2, int *u3)
{
    unsigned short pilihan = 0;

    do
    {
        printf ("==============================\n");
        printf ("a  = %d\n", *a);
        printf ("b  = %d\n", *b);
        printf ("U1 = %d\n", *u1);
        printf ("U2 = %d\n", *u2);
        printf ("U3 = %d\n", *u3);
        printf ("==============================\n");
        printf ("1. Suku ke-n\n");
        printf ("2. Beda (selisih)\n");
        printf ("3. Suku tengah\n");
        printf ("4. Kembali\n");
        printf ("5. Keluar\n");
        printf ("==============================\n");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        fflush (stdin);

        switch (pilihan)
        {
        case 1: suku_ke_n (a, b);
                break;
        case 2: beda (u1, u2, u3, b);
                break;
        case 3: suku_tengah (a);
                break;
        case 4: main ();
                break;
        case 5: printf ("Terima kasih telah menggunakan program ini!\n");
                break;
        default: printf ("Input error\n");
                 break;
        }
    } while (pilihan != 5);
}

void suku_ke_n (int *a, int *b)
{
    // a + (n - 1) x b
    int n = 0;

    printf ("Masukkan suku pertama: ");
    scanf ("%d", a);
    printf ("Masukkan suku yang dicari: ");
    scanf ("%d", &n);
    printf ("Masukkan beda (selisih): ");
    scanf ("%d", b);

    printf ("Suku ke %d = %d\n", n, *a + (n - 1) * *b);
}

void beda (int *u1, int *u2, int *u3, int *b)
{
    unsigned short pilihan = 0;

    do
    {
        printf ("===== Mencari Beda (Selisih) =====\n");
        printf ("1. Beda (selisih) statis\n");
        printf ("2. Beda (selisih) bertahap\n");
        printf ("3. Kembali\n");
        printf ("4. Keluar\n");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        fflush (stdin);

        switch (pilihan)
        {
            case 1:
                // b = U2 - U1
                printf ("Masukkan nilai suku pertama: ");
                scanf ("%d", u1);
                printf ("Masukkan nilai suku kedua: ");
                scanf ("%d", u2);
                printf ("Beda (selisih) = %d\n", *u2 - *u1);
                break;
            case 2:
                // b = (U3 - U2) - (U2 - U1)
                printf ("Masukkan nilai suku pertama: ");
                scanf ("%d", u1);
                printf ("Masukkan nilai suku kedua: ");
                scanf ("%d", u2);
                printf ("Masukkan nilai suku ketiga: ");
                scanf ("%d", u3);
                printf ("Nilai suku pertama                                : %d\n", *u1);
                printf ("Nilai suku kedua                                  : %d\n", *u2);
                printf ("Nilai suku ketiga                                 : %d\n", *u3);
                printf ("Beda (selisih) suku pertama & suku kedua          : %d\n", *u2 - *u1);
                printf ("Beda (selisih) suku kedua & suku ketiga           : %d\n", *u3 - *u2);
                *b = (*u3 - *u2) - (*u2 - *u1);
                printf("Hasil                                             : %d\n", *b);
                break;
            case 3:
                main ();
                break;
            case 4:
                printf ("Terima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf ("Input error\n");
                break;
        }
    } while (pilihan != 4);
}

void suku_tengah (int *a)
{
    unsigned short pilihan = 0;

    do
    {
        printf ("===== Mencari Suku Tengah =====\n");
        printf ("1. Nilai suku tengah\n");
        printf ("2. Nilai urutan suku tengah\n");
        printf ("3. Kembali\n");
        printf ("4. Keluar\n");
        printf ("Pilih salah satu: ");
        scanf ("%hu", &pilihan);

        fflush (stdin);

        int un = 0, n = 0;

        switch (pilihan)
        {
            case 1:
                // suku tengah = (suku pertama - suku terakhir) / 2
                printf ("Masukkan nilai suku pertama: ");
                scanf ("%d", a);
                printf ("Masukkan nilai suku terakhir: ");
                scanf ("%d", &un);
                printf ("Nilai suku tengah: %d\n", (*a + un) / 2);
                break;
            case 2:
                // urutan suku tengah = (banyaknya suku + 1) / 2
                printf ("Masukkan banyaknya suku: ");
                scanf ("%d", &n);
                printf ("Nilai urutan suku tengah: %d\n", (n + 1) / 2);
                break;
            case 3:
                main ();
                break;
            case 4:
                printf ("Terima kasih telah menggunakan program ini!\n");
                break;
            default:
                printf ("Input error\n");
                break;
        }
    } while (pilihan != 4);
}

void deret()
{
    // n / 2 x (2 x a + (n - 1) x b)
    int n = 0, a = 0, b = 0;

    printf ("Masukkan banyak suku: ");
    scanf ("%d", &n);
    printf ("Masukkan nilai suku pertama: ");
    scanf ("%d", &a);
    printf ("Masukkan beda (selisih): ");
    scanf ("%d", &b);

    printf ("Jumlah suku pertama = %d\n", n / 2 * (2 * a + (n - 1) * b));
}
