import java.util.Scanner;

public class DesimalkeOktal
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        System.out.print ("Desimal       : ");
        int desimal = scan.nextInt ();

        StringBuilder oktal = new StringBuilder ();
        while (desimal > 0)
        {
            int sisa = desimal % 8;
            oktal.insert (0, sisa);
            desimal /= 8;
        }

        System.out.print ("Oktal         : " + oktal);
    }
}