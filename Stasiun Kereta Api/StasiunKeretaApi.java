import java.util.Scanner;

public class StasiunKeretaApi
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int [] nomor_stasiun = new int [100];
        int unik = 0;
        
        int stasiun = scan.nextInt ();

        for (int i = 0; i < stasiun; i++)
        {
            boolean beda = true;
            nomor_stasiun [i] = scan.nextInt ();

            for (int j = 0; j < i; j++)
            {
                if (nomor_stasiun [i] == nomor_stasiun [j])
                    beda = false;
                    break;
            }

            if (beda) unik++;
        }

        scan.close ();
        System.out.print ("\n" + unik);
    }
}