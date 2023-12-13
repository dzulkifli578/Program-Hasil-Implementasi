import java.util.Scanner;

public class CariArray
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int batas = 0, cari = 0;

        do {
            System.out.print("Masukkan batas ukuran array: ");

            while (!scan.hasNextInt ())
            {
                System.out.println ("Ukuran array harus berupa angka!");
                System.out.print ("Masukkan batas ukuran array: ");
                scan.next ();
            }

            batas = scan.nextInt();

            if (batas <= 0)
            {
                System.out.println("Ukuran array harus lebih dari 0!");
            }
        } while (batas <= 0);

        int [] array = new int [batas];

        System.out.print ("Masukkan nilai tiap elemen array: ");
        for (int i = 0; i < batas; i++)
        {
            array [i] = scan.nextInt ();
        }

        System.out.print ("Masukkan elemen yang dicari: ");
        cari = scan.nextInt ();
        scan.close ();

        boolean konfirmasi = false;
        for (int i = 0; i < batas; i++)
        {
            if (cari == array [i])
            {
                System.out.println ("Elemen " + cari + " berada di index " + i);
                konfirmasi = true;
            }
        }

        if (!konfirmasi)
        {
            System.out.println ("Elemen " + cari + " tidak ada pada array");
        }
    }
}
