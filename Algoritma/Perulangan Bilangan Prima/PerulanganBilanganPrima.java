import java.util.Scanner;

public class PerulanganBilanganPrima
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        System.out.print ("Masukkan batas perulangan bilangan prima: ");
        int batas = scan.nextInt ();

        System.out.printf ("Bilangan prima dari 2 hingga %d:%n", batas);

        for (int i = 2; i <= batas; i++)
        {
            boolean prima = true;

            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    prima = false;
                    break;
                }
            }
            if (prima)
                System.out.print (i + " ");
        }
        System.out.println ();
    }
}