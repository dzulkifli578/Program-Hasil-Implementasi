import java.util.Scanner;

public class DesimalkeBiner
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        System.out.print ("Desimal   : ");
        int desimal = scan.nextInt ();

        StringBuilder biner = new StringBuilder ();
        while (desimal > 0)
        {
            int sisa = desimal % 2;
            biner.insert (0, sisa);
            desimal /= 2;
        }

        System.out.print ("Biner     : " + biner);
    }
}