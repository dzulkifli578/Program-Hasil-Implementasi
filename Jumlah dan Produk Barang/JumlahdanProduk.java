import java.util.Scanner;

public class JumlahdanProduk
{
    public static void main (String [] args)
    {
        int batas = 0, jumlah = 0, produk = 1;
        Scanner scan = new Scanner (System.in);
        batas = scan.nextInt ();

        scan.close ();

        for (int i = 1; i < batas; i++)
            if (i % 3 == 0 || i % 5 == 0)
            {
                jumlah += i;
                produk *= i;
            }

        System.out.println (jumlah);
        System.out.print (produk);
    }
}