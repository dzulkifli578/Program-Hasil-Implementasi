import java.util.Scanner;

public class TabelAritmetika
{
    Scanner scanner = new Scanner (System.in);

    void tabel_penjumlahan ()
    {
        float batas = 0, bilangan = 0;

        System.out.print ("Masukkan bilangan: ");
        bilangan = scanner.nextFloat ();

        System.out.print ("Masukkan batas hitung: ");
        batas = scanner.nextFloat ();

        for (int i = 1; i <= batas; i++)
        {
            System.out.printf ("%.2f + %d = %.2f\n", bilangan, i, bilangan + i);
        }
    }

    void tabel_pengurangan ()
    {
        float batas = 0, bilangan = 0;

        System.out.print ("Masukkan bilangan: ");
        bilangan = scanner.nextFloat ();

        System.out.print ("Masukkan batas hitung: ");
        batas = scanner.nextFloat ();

        for (int i = 1; i <= batas; i++) {
            System.out.printf ("%.2f - %d = %.2f\n", bilangan, i, bilangan - i);
        }
    }

    void tabel_perkalian() {
        float batas = 0, bilangan = 0;

        System.out.print ("Masukkan bilangan: ");
        bilangan = scanner.nextFloat ();

        System.out.print ("Masukkan batas hitung: ");
        batas = scanner.nextFloat ();

        for (int i = 1; i <= batas; i++)
        {
            System.out.printf ("%.2f x %d = %.2f\n", bilangan, i, bilangan * i);
        }
    }

    void tabel_pembagian ()
    {
        float batas = 0, bilangan = 0;

        System.out.print ("Masukkan bilangan: ");
        bilangan = scanner.nextFloat ();

        System.out.print ("Masukkan batas hitung: ");
        batas = scanner.nextFloat ();

        for (int i = 1; i <= batas; i++)
        {
            System.out.printf ("%.2f : %d = %.2f\n", bilangan, i, bilangan / i);
        }
    }

    public static void main (String [] args)
    {
        TabelAritmetika ta = new TabelAritmetika ();    

        byte pilihan = 0;

        do {
            System.out.println("========== Pembuat Tabel Aritmetika ==========");
            System.out.println("1. Penjumlahan");
            System.out.println("2. Pengurangan");
            System.out.println("3. Perkalian");
            System.out.println("4. Pembagian");
            System.out.println("5. Keluar");
            System.out.print("Pilih salah satu: ");
            pilihan = ta.scanner.nextByte ();

            switch (pilihan) {
                case 1:
                    ta.tabel_penjumlahan ();
                    break;
                case 2:
                    ta.tabel_pengurangan ();
                    break;
                case 3:
                    ta.tabel_perkalian ();
                    break;
                case 4:
                    ta.tabel_pembagian ();
                    break;
                case 5:
                    System.out.println ("Terima kasih telah menggunakan program ini");
                    break;
                default:
                    System.out.println ("Input error");
                    break;
            }
        } while (pilihan > 5 || pilihan < 0);
    }
}