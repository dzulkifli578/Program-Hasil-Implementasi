#include <stdio.h>
#include <time.h>

struct Pembeli
{
    char nama [100];
    double tunai;
};
struct Produk
{
    char nama [100];
    int unit;
    double harga;
};

void input (int *pesanan, struct Pembeli *pembeli, struct Produk DaftarProduk []);
void struk (int *pesanan, struct Pembeli *pembeli, struct Produk DaftarProduk []);

int main ()
{
    int pesanan = 0;
    struct Pembeli pembeli;

    puts ("----------------------------------------");
    printf ("Masukkan nama pembeli     : ");
    fgets (pembeli.nama, sizeof (pembeli.nama), stdin);
    printf ("Masukkan jumlah pesanan   : ");
    scanf ("%d", &pesanan);
    fflush (stdin);

    struct Produk DaftarProduk [pesanan];

    input (&pesanan, &pembeli, DaftarProduk);
    struk (&pesanan, &pembeli, DaftarProduk);

    return 0;
}

void input (int *pesanan, struct Pembeli *pembeli, struct Produk DaftarProduk [])
{
    puts ("----------------------------------------");
    for (int i = 0; i < *pesanan; i++)
    {
        printf ("Masukkan nama produk      : ");
        fgets (DaftarProduk [i].nama, sizeof (DaftarProduk [i].nama), stdin);
        printf ("Masukkan harga produk     : Rp");
        scanf ("%lf", &DaftarProduk [i].harga);
        printf ("Masukkan unit produk      : ");
        scanf ("%d", &DaftarProduk [i].unit);
        fflush (stdin);
        puts ("----------------------------------------");
    }
    printf ("Masukkan tunai pembeli    : Rp");
    scanf ("%lf", &pembeli -> tunai);
}

void struk (int *pesanan, struct Pembeli *pembeli, struct Produk DaftarProduk [])
{
    double TotalKeseluruhan = 0;
    time_t t = time (0);
    struct tm *sekarang = localtime (&t);

    puts ("----------------------------------------");
    puts ("           Jeweler's Pagoda");
    puts ("        Central Starskiff Haven");
    puts ("----------------------------------------");
    printf ("Waktu                     : %d-%02d-%02d %02d:%02d:%02d\n",
           sekarang -> tm_year + 1900, sekarang -> tm_mon + 1, sekarang -> tm_mday,
           sekarang -> tm_hour, sekarang -> tm_min, sekarang -> tm_sec);
    puts ("----------------------------------------");
    printf ("Pembeli                   : %s", pembeli -> nama);

    for (int i = 0; i < *pesanan; i++)
    {
        printf ("Nama produk               : %s", DaftarProduk [i].nama);
        printf ("Harga produk              : Rp%.2lf\n", DaftarProduk [i].harga);
        printf ("Unit produk yang dibeli   : %d\n", DaftarProduk [i].unit);
    puts ("----------------------------------------");
    }

    for (int i = 0; i < *pesanan; i++)
    {
        double total = DaftarProduk [i].harga * DaftarProduk [i].unit;
        TotalKeseluruhan += total;
    }

    printf ("Total                     : Rp%.2lf\n", TotalKeseluruhan);
    printf ("Tunai                     : Rp%.2lf\n", pembeli -> tunai);
    printf ("Kembali                   : Rp%.2lf\n", pembeli -> tunai - TotalKeseluruhan);
    puts ("----------------------------------------");
    printf ("              Customer Care\n");
    printf ("           SMS 0826-0420-2310\n");
    puts ("----------------------------------------");
}