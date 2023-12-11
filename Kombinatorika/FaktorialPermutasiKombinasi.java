import java.util.Scanner;

public class FaktorialPermutasiKombinasi
{
    static Scanner scan = new Scanner (System.in);
    public static void main (String [] args)
    {
        byte pilihan = 0;

        do
        {
            System.out.println ("========== KOMBINATORIKA ==========");
            System.out.println ("1. Faktorial");
            System.out.println ("2. Permutasi");
            System.out.println ("3. Kombinasi");
            System.out.println ("4. Keluar");
            System.out.println ("===================================");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextByte ();

            switch (pilihan)
            {
                case 1: faktorial ();
                        break;
                case 2: permutasi ();
                        break;
                case 3: kombinasi ();
                        break;
                case 4: System.out.println ("Terima kasih telah menggunakan program ini!");
                        break;
                default: System.out.println ("Input error");
                        break;
            }
        } while (pilihan != 4);
        
        scan.close ();
    }

    static void faktorial ()
    {
        int angka = 0, hasil = 1;

        System.out.print ("Masukkan bilangan faktorial: ");
        angka = scan.nextInt ();

        for (int i = angka; i > 0; i--)
        {
            hasil *= i;
        }

        System.out.println (angka + "! = " + hasil);
    }
    static void permutasi ()
    {
        int n = 0, p = 1, k = 0;

        System.out.print ("Masukkan bilangan keseluruhan: ");
        n = scan.nextInt ();
        System.out.print ("Masukkan bilangan asli (tidak duplikat): ");
        k = scan.nextInt ();

        for (int i = n; i > n - k; i--)
        {
            p *= i;
        }

        System.out.println ("Hasil: " + p);
    }
    static void kombinasi ()
    {
        int n = 0, r = 0, n_faktorial = 1, r_faktorial = 1, nr_faktorial = 1;
    
        System.out.print ("Masukkan bilangan keseluruhan: ");
        n = scan.nextInt ();
        System.out.print ("Masukkan bilangan pilihan: ");
        r = scan.nextInt ();

        for (int i = n; i > 0; i--)
        {
            n_faktorial *= i;
        }
        for (int i = n - r; i > 0; i--)
        {
            nr_faktorial *= i;
        }
        for (int i = r; i > 0; i--)
        {
            r_faktorial *= i;
        }

        System.out.println ("Hasil: " + n_faktorial / (r_faktorial * nr_faktorial));
    }
}