import java.util.Scanner;

public class TransposeMatriks
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        System.out.print ("Masukkan baris matriks: ");
        int baris = scan.nextInt ();
        System.out.print("Masukkan kolom matriks: ");
        int kolom = scan.nextInt ();

        int [][] matriks = new int [baris][kolom];

        System.out.println ("Masukkan elemen matriks:");
        for (int i = 0; i < baris; i++)
            for (int j = 0; j < kolom; j++)
                matriks [i][j] = scan.nextInt ();

        scan.close ();
        
        System.out.println ("Transpose matriks:");
        for (int j = 0; j < kolom; j++)
        {
            for (int i = 0; i < baris; i++)
                System.out.print (matriks [i][j] + " ");
            System.out.println ();
        }
    }
}