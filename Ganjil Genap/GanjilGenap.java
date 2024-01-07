import java.util.Scanner;

public class GanjilGenap
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int batas = scan.nextShort ();
        scan.close ();

        for (int i = 1; i <= batas; i += 2)
        {
            System.out.print (i + " ");
        }

        System.out.println ();

        for (int i = 2; i <= batas; i += 2)
        {
            System.out.print (i + " ");
        }
    }
}