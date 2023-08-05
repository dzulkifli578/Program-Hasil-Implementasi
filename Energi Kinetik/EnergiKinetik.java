import java.util.Scanner;

public class EnergiKinetik
{
    Scanner scanner = new Scanner (System.in);

    float hasil_energi_kinetik ()
    {
        float massa = 0, kecepatan = 0;

        System.out.print ("Masukkan massa (satuan kg): ");
        massa = scanner.nextFloat();

        System.out.print ("Masukkan kecepatan (satuan m/s): ");
        kecepatan = scanner.nextFloat();

        return 0.5f * massa * (kecepatan * kecepatan);
    }

    float hasil_massa () {
        float energi_kinetik = 0, kecepatan = 0;

        System.out.print ("Masukkan energi kinetik (satuan Joule): ");
        energi_kinetik = scanner.nextFloat ();

        System.out.print ("Masukkan kecepatan (satuan m/s): ");
        kecepatan = scanner.nextFloat ();

        return (2 * energi_kinetik) / (kecepatan * kecepatan);
    }

    float hasil_kecepatan ()
    {
        float energi_kinetik = 0, massa = 0;

        System.out.print ("Masukkan energi kinetik (satuan Joule): ");
        energi_kinetik = scanner.nextFloat ();

        System.out.print ("Masukkan massa (satuan kg): ");
        massa = scanner.nextFloat ();

        return (float) Math.sqrt ((2 * energi_kinetik) / massa);
    }

    public static void main (String [] args) {
        EnergiKinetik ek = new EnergiKinetik ();

        byte pilihan = 0;
        float massa = 0, kecepatan = 0, energi_kinetik = 0;

        System.out.println("========== Penghitung Energi Kinetik ==========");

        do
        {
            System.out.println ("1. Mencari energi kinetik");
            System.out.println ("2. Mencari massa");
            System.out.println ("3. Mencari kecepatan");
            System.out.println ("4. Keluar");
            System.out.print ("Pilih salah satu: ");
            pilihan = ek.scanner.nextByte ();

            switch (pilihan) {
                case 1:
                    energi_kinetik = ek.hasil_energi_kinetik ();
                    System.out.println ("Energi kinetik: " + energi_kinetik + " Joule");
                    break;
                case 2:
                    massa = ek.hasil_massa ();
                    System.out.println ("Massa: " + massa + " kg");
                    break;
                case 3:
                    kecepatan = ek.hasil_kecepatan ();
                    System.out.println ("Kecepatan: " + kecepatan + " m/s");
                    break;
                case 4:
                    System.out.println ("Terima kasih telah menggunakan program ini");
                    break;
                default:
                    System.out.println ("Input error");
                    break;
            }
        } while (pilihan < 1 || pilihan > 4);
    }
}
