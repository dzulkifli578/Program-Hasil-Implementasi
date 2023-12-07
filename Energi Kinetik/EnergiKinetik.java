import java.util.Scanner;

public class EnergiKinetik
{
    static Scanner scan = new Scanner (System.in);

    public static void main (String [] args)
    {
        byte pilihan = 0;
        float massa = 0, kecepatan = 0, energi_kinetik = 0;

        do
        {
            System.out.println("========== Penghitung Energi Kinetik ==========");
            System.out.println ("1. Mencari energi kinetik");
            System.out.println ("2. Mencari massa");
            System.out.println ("3. Mencari kecepatan");
            System.out.println ("4. Keluar");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextByte ();

            switch (pilihan)
            {
                case 1:
                    energi_kinetik = hasil_energi_kinetik ();
                    System.out.println ("Energi kinetik: " + energi_kinetik + " Joule");
                    break;
                case 2:
                    massa = hasil_massa ();
                    System.out.println ("Massa: " + massa + " kg");
                    break;
                case 3:
                    kecepatan = hasil_kecepatan ();
                    System.out.println ("Kecepatan: " + kecepatan + " m/s");
                    break;
                case 4:
                    System.out.println ("Terima kasih telah menggunakan program ini!");
                    break;
                default:
                    System.out.println ("Input error");
                    break;
            }
        } while (pilihan != 4);
                
        scan.close ();
    }

    static float hasil_energi_kinetik ()
    {
        float massa = 0, kecepatan = 0;

        System.out.print ("Masukkan massa (satuan kg): ");
        massa = scan.nextFloat ();

        System.out.print ("Masukkan kecepatan (satuan m/s): ");
        kecepatan = scan.nextFloat ();

        return 0.5f * massa * (kecepatan * kecepatan);
    }

    static float hasil_massa ()
    {
        float energi_kinetik = 0, kecepatan = 0;

        System.out.print ("Masukkan energi kinetik (satuan Joule): ");
        energi_kinetik = scan.nextFloat ();

        System.out.print ("Masukkan kecepatan (satuan m/s): ");
        kecepatan = scan.nextFloat ();

        return (2 * energi_kinetik) / (kecepatan * kecepatan);
    }

    static float hasil_kecepatan ()
    {
        float energi_kinetik = 0, massa = 0;

        System.out.print ("Masukkan energi kinetik (satuan Joule): ");
        energi_kinetik = scan.nextFloat ();

        System.out.print ("Masukkan massa (satuan kg): ");
        massa = scan.nextFloat ();

        return (float) Math.sqrt ((2 * energi_kinetik) / massa);
    }
}