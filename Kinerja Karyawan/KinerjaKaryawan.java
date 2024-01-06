import java.util.Scanner;

public class KinerjaKaryawan
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        int karyawan = 0, waktu = 1, tugas = 0, bonus = 0;
        int [] gaji = new int [100];

        karyawan = scan.nextInt ();

        for (int i = 0; i < karyawan; i++)
        {
            waktu = scan.nextInt ();
            tugas = scan.nextInt ();
            if (waktu >= 40 && tugas >= 20) bonus = 500_000;
            gaji [i] = bonus + (50_000 * waktu);
        }
        
        scan.close ();

        for (int i = 0; i < karyawan; i++)
            System.out.println (gaji [i]);
    }
}