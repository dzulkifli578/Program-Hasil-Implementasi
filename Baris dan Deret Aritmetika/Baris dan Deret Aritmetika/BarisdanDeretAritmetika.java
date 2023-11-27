import java.util.Scanner;

public class BarisdanDeretAritmetika
{
    static Scanner scan = new Scanner (System.in);
    public static void main (String [] args)
    {
        int a = 0, b = 0, u1 = 0, u2 = 0, u3 = 0;
        byte pilihan = 0;

        do
        {
            System.out.println ("========== Baris dan Deret Aritmetika ==========");
            System.out.println ("1. Baris");
            System.out.println ("2. Deret");
            System.out.println ("3. Keluar");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextByte ();

            switch (pilihan)
            {
                case 1: baris (a, b, u1, u2, u3);    
                        break;
                case 2: deret ();
                        break;
                case 3: System.out.println ("Terima kasih telah menggunakan program ini!");
                        break;
                default: System.out.println ("Input error");
                         break;
            }
        } while (pilihan != 3);
    }
    public static void baris (int a, int b, int u1, int u2, int u3)
    {
        byte pilihan = 0;

        do
        {
            System.out.println ("==============================");
            System.out.println ("1. Suku ke-n");
            System.out.println ("2. Beda (selisih)");
            System.out.println ("3. Suku tengah");
            System.out.println ("4. Kembali");
            System.out.println ("5. Keluar");
            System.out.println ("==============================");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextByte ();

            switch (pilihan)
            {
                case 1: suku_ke_n (a, b);
                        break;
                case 2: beda (u1, u2, u3, b);
                        break;
                case 3: suku_tengah (a);
                        break;
                case 4: break;
                case 5: System.out.println ("Terima kasih telah menggunakan program ini!");
                        break;
                default: System.out.println ("Input error");
                         break;
            }
        } while (pilihan != 5);
    }
    public static void suku_ke_n (int a, int b)
    {
        // a + (n - 1) x b
        int n = 0;

        System.out.print ("Masukkan suku pertama: ");
        a = scan.nextInt ();
        System.out.print ("Masukkan suku yang dicari: ");
        n = scan.nextInt ();
        System.out.print ("Masukkan beda (selisih): ");
        b = scan.nextInt ();

        System.out.println("Suku ke " + n + " = " + a + (n - 1) * b);
    }
    public static void beda (int u1, int u2, int u3, int b)
    {
        byte pilihan = 0;

        do
        {
            System.out.println ("===== Mencari Beda (Selisih) =====");
            System.out.println ("1. Beda (selisih) statis");
            System.out.println ("2. Beda (selisih) bertahap");
            System.out.println ("3. Kembali");
            System.out.println ("4. Keluar");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextByte ();

            switch (pilihan)
            {
                case 1:
                    // b = U2 - U1
                    System.out.print ("Masukkan nilai suku pertama: ");
                    u1 = scan.nextInt ();
                    System.out.print ("Masukkan nilai suku kedua: ");
                    u2 = scan.nextInt ();
                    System.out.println ("Beda (selisih) = " + (u2 - u1));
                    break;
                case 2:
                    // b = (U3 - U2) - (U2 - U1)
                    System.out.print ("Masukkan nilai suku pertama: "); 
                    u1 = scan.nextInt ();
                    System.out.print ("Masukkan nilai suku kedua: "); 
                    u2 = scan.nextInt ();
                    System.out.print ("Masukkan nilai suku ketiga: ");    
                    u3 = scan.nextInt ();
                    System.out.println ("Nilai suku pertama                                : " + u1);
                    System.out.println ("Nilai suku kedua                                  : " + u2);
                    System.out.println ("Nilai suku ketiga                                 : " + u3);
                    System.out.println ("Beda (selisih) suku pertama & suku kedua          : " + (u2 - u1));
                    System.out.println ("Beda (selisih) suku kedua & suku ketiga           : " + (u3 - u2));
                    System.out.println ("Hasil                                             : " + b);
                case 3: break;
                case 4:
                    System.out.println ("Terima kasih telah menggunakan program ini!");
                    break;
                default:
                    System.out.println ("Input error");
                    break;
            }
        } while (pilihan != 4);
    }
    public static void suku_tengah (int a)
    {
        byte pilihan = 0;

        do
        {
            System.out.println ("===== Mencari Suku Tengah =====");
            System.out.println ("1. Nilai suku tengah");
            System.out.println ("2. Nilai urutan suku tengah");
            System.out.println ("3. Kembali");
            System.out.println ("4. Keluar");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextByte ();

            int un = 0, n = 0;

            switch (pilihan)
            {
                case 1:
                    // suku tengah = (suku pertama - suku terakhir) / 2
                    System.out.print ("Masukkan nilai suku pertama: ");
                    a = scan.nextInt ();
                    System.out.print ("Masukkan nilai suku terakhir: ");
                    un = scan.nextInt ();
                    System.out.println ("Nilai suku tengah: " + (a + un) / 2);
                    break;

                case 2:
                    // urutan suku tengah = (banyaknya suku + 1) / 2
                    System.out.print ("Masukkan banyaknya suku: ");
                    n = scan.nextInt ();
                    System.out.println ("Nilai urutan suku tengah: " + (n + 1) / 2);
                    break;
                case 3: break;
                case 4:
                    System.out.println ("Terima kasih telah menggunakan program ini!");
                    break;
                default:
                    System.out.println ("Input error");
                    break;
            }
        } while (pilihan != 4);
    }
    public static void deret ()
    {
        // n / 2 x (2 x a + (n - 1) x b)
        int n = 0, a = 0, b = 0;

        System.out.print ("Masukkan banyak suku: ");
        n = scan.nextInt ();
        System.out.print ("Masukkan nilai suku pertama: ");
        a = scan.nextInt ();
        System.out.print ("Masukkan beda (selisih): ");
        b = scan.nextInt ();

        System.out.println ("Jumlah suku pertama = " + n / 2 * (2 * a + (n - 1) * b));
    }
}