import java.util.Scanner;

public class BilanganPrima
{
    public static void main(String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int batas = scan.nextInt ();

        for (int i = 0; i < batas; i++)
        {
            int angka = scan.nextInt ();
            int prima = 0;

            if (angka == 1)
            {
                System.out.println ("Bukan bilangan prima");
                continue;
            }

            for (int j = 2; j * j <= angka; j++)
            {
                if (angka % j == 0)
                {
                    prima++;
                    break;
                }
            }

            System.out.println (prima == 0 ? "Bilangan prima" : "Bukan bilangan prima");
        }
    }
}
