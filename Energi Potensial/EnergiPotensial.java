import java.util.Scanner;

public class EnergiPotensial
{
    Scanner scan = new Scanner (System.in);
    static final float gravitasi = 10;

    public static void main (String [] args)
    {
        byte pilihan = 0;
        float massa = 0, ketinggian = 0, energi_potensial = 0;

        do
        {
            System.out.println ("========== Penghitung Energi Potensial ==========");
            System.out.println ("1. Mencari energi potensial");
            System.out.println ("2. Mencari massa");
            System.out.println ("3. Mencari ketinggian");
            System.out.println ("4. Keluar");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextByte ();

            switch (pilihan)
            {
                case 1:
                    energi_potensial = hasil_energi_potensial ();
                    System.out.println ("Energi potensial: " + energi_potensial + " Joule");
                    break;
                case 2:
                    massa = hasil_massa ();
                    System.out.println ("Massa: " + massa + " kg");
                    break;
                case 3:
                    ketinggian = hasil_ketinggian ();
                    System.out.println ("Ketinggian: " + ketinggian + " m");
                    break;
                case 4:
                    System.out.println ("Terima kasih telah menggunakan program ini!");
                    break;
                default:
                    System.out.println ("Input error");
            }
        } while (pilihan != 4);

        scan.close ();
    }

    float hasil_energi_potensial ()
    {
        float massa = 0, ketinggian = 0;

        System.out.print ("Masukkan massa (satuan kg): ");
        massa = scan.nextFloat ();

        System.out.print ("Masukkan ketinggian (satuan m): ");
        ketinggian = scan.nextFloat ();

        return massa * gravitasi * ketinggian;
    }

    float hasil_massa ()
    {
        float energi_potensial = 0, ketinggian = 0;

        System.out.print ("Masukkan energi potensial (satuan Joule): ");
        energi_potensial = scan.nextFloat ();

        System.out.print ("Masukkan ketinggian (satuan m): ");
        ketinggian = scan.nextFloat ();

        return energi_potensial / (gravitasi * ketinggian);
    }

    float hasil_ketinggian ()
    {
        float energi_potensial = 0, massa = 0;

        System.out.print ("Masukkan energi potensial (satuan Joule): ");
        energi_potensial = scan.nextFloat ();

        System.out.print ("Masukkan massa (satuan kg): ");
        massa = scan.nextFloat ();

        return energi_potensial / (massa * gravitasi);
    }
}