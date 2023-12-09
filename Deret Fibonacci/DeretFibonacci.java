import java.util.Scanner;

public class DeretFibonacci
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int ukuran = 0;

        System.out.print ("Masukkan batas deret Fibonacci: ");
        ukuran = scan.nextInt ();

        int [] array = new int [ukuran];
        array [0] = 0;
        array [1] = 1;

        for (int i = 2; i < ukuran; i++)
        {
            array [i] = array [i - 2] + array [i - 1];
        }

        System.out.println ("Deret Fibonacci: " + ukuran);

        for (int i = 0; i < ukuran; i++)
        {
            System.out.print (array [i] + " ");
        }
    }
}