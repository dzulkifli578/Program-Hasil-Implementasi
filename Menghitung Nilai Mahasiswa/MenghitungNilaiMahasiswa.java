import java.util.Scanner;

public class MenghitungNilaiMahasiswa
{
    static Scanner scan = new Scanner (System.in);

    public static void main (String [] args)
    {
        System.out.print ("Masukkan jumlah mata kuliah: ");
        int matkul = scan.nextInt ();

        int [] array = new int [matkul];

        input_nilai (matkul, array);
        status (matkul, array);
        
        scan.close ();
    }

    static void input_nilai (int matkul, int [] array)
    {
        for (int i = 0; i < matkul; i++)
        {
            System.out.println ("==============================");
            System.out.print ("Masukkan nilai kehadiran  : ");
            int kehadiran = scan.nextInt ();
            System.out.print ("Masukkan nilai attitude   : ");
            int attitude = scan.nextInt ();
            System.out.print ("Masukkan nilai UTS        : ");
            int uts = scan.nextInt ();
            System.out.print ("Masukkan nilai UAS        : ");
            int uas = scan.nextInt ();
            System.out.println ("==============================");

            int nilai = (int) (0.2 * kehadiran + 0.2 * attitude + 0.2 * uts + 0.2 * uas);
            array [i] = nilai;

            System.out.println ("==============================");
            System.out.println ("Nilai kehadiran           : " + kehadiran);
            System.out.println ("Nilai attitude            : " + attitude);
            System.out.println ("Nilai UTS                 : " + uts);
            System.out.println ("Nilai UAS                 : " + uas);
            System.out.println ("==============================");

            System.out.print ("Total Nilai               : " + array [i]);
            if (nilai >= 80)
                System.out.println (" (A)");
            else if (nilai >= 70)
                System.out.println (" (B)");
            else if (nilai >= 60)
                System.out.println (" (C)");
            else if (nilai >= 50)
                System.out.println (" (D)");
            else if (nilai >= 0)
                System.out.println (" (E)");
        }
    }

    static void status (int matkul, int [] array)
    {
        int salah = 0;

        for (int i = 0; i < matkul; i++)
            if (array [i] < 70)
                salah++;

        if (salah == 0)
            System.out.println ("Status                    : Lulus");
        else
            System.out.println ("Status                    : Tidak Lulus");
    }
}