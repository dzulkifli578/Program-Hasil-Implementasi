import java.util.Scanner;
import java.text.SimpleDateFormat;
import java.util.Date;

class Pembeli
{
    String nama = "";
    double tunai = 0;
}
class Produk
{
    String nama ="";
    int unit = 0;
    double harga = 0;
}

public class StrukBelanja
{
    static Scanner scan = new Scanner (System.in);

    public static void main (String [] args)
    {
        int [] pesanan = new int [1];
        Pembeli pembeli = new Pembeli ();
        Produk [] DaftarProduk;

        System.out.println ("----------------------------------------");
        System.out.print ("Masukkan nama pembeli     : ");
        pembeli.nama = scan.nextLine ();
        System.out.print ("Masukkan jumlah pesanan   : ");
        pesanan [0] = scan.nextInt ();
        scan.nextLine ();

        DaftarProduk = new Produk [pesanan [0]];

        input (pesanan, pembeli, DaftarProduk);
        struk (pesanan, pembeli, DaftarProduk);
    }

    public static void input (int [] pesanan, Pembeli pembeli, Produk [] DaftarProduk)
    {
        System.out.println ("----------------------------------------");
        for (int i = 0; i < pesanan [0]; i++)
        {
            DaftarProduk [i] = new Produk ();
            System.out.print ("Masukkan nama produk      : ");
            DaftarProduk [i].nama = scan.nextLine ();
            System.out.print ("Masukkan harga produk     : Rp");
            DaftarProduk[i].harga = scan.nextDouble ();
            System.out.print ("Masukkan unit produk      : ");
            DaftarProduk [i].unit = scan.nextInt ();
            scan.nextLine ();
            System.out.println ("----------------------------------------");
        }
        System.out.print ("Masukkan tunai pembeli    : Rp");
        pembeli.tunai = scan.nextDouble ();
        scan.close ();
    }

    public static void struk (int [] pesanan, Pembeli pembeli, Produk [] DaftarProduk)
    {
        double totalKeseluruhan = 0;
        Date now = new Date ();
        SimpleDateFormat waktu = new SimpleDateFormat ("yyyy-MM-dd HH:mm:ss");

        System.out.println ("----------------------------------------");
        System.out.println ("           Jeweler's Pagoda"             );
        System.out.println ("        Central Starskiff Haven"         );
        System.out.println ("----------------------------------------");
        System.out.println ("Waktu                     : " + waktu.format (now));
        System.out.println ("----------------------------------------");
        System.out.println ("Pembeli                   : " + pembeli.nama);

        for (int i = 0; i < pesanan [0]; i++)
        {
            System.out.println ("Nama produk               : " + DaftarProduk [i].nama);
            System.out.println ("Harga produk              : Rp" + DaftarProduk [i].harga);
            System.out.println ("Unit produk yang dibeli   : " + DaftarProduk [i].unit);
            System.out.println ("----------------------------------------");
        }

        for (int i = 0; i < pesanan [0]; i++)
        {
            double total = DaftarProduk [i].harga * DaftarProduk [i].unit;
            totalKeseluruhan += total;
        }

        System.out.println ("Total                     : Rp" + totalKeseluruhan);
        System.out.println ("Tunai                     : Rp" + pembeli.tunai);
        System.out.println ("Kembali                   : Rp" + (pembeli.tunai - totalKeseluruhan));
        System.out.println ("----------------------------------------");
        System.out.println ("              Customer Care"             );
        System.out.println ("           SMS 0826-0420-2310"           );
        System.out.println ("----------------------------------------");
    }
}