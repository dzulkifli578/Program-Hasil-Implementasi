import java.util.Scanner;

public class RotasiMatriks
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        System.out.print ("Masukkan panjang kolom matriks: ");
        int kolom = scan.nextInt ();
        System.out.print ("Masukkan panjang baris matriks: ");
        int baris = scan.nextInt ();

        int [][] array = new int [kolom][baris];

        System.out.println ("Masukkan elemen matriks:");
        for (int i = 0; i < kolom; i++)
            for (int j = 0; j < baris; j++)
                array [i][j] = scan.nextInt ();

        scan.close ();

        System.out.println ("Rotasi matriks:");
        for (int j = 0; j < baris; j++)
        {
            for (int i = kolom - 1; i >= 0; i--)
                System.out.printf ("%d ", array [i][j]);
            System.out.println ();
        }
    }
}