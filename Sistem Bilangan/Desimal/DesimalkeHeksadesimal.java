import java.util.Scanner;

public class DesimalkeHeksadesimal
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        System.out.print ("Desimal       : ");
        int desimal = scan.nextInt ();

        StringBuilder heksadesimal = new StringBuilder ();
        while (desimal > 0)
        {
            int sisa = desimal % 16;
            switch (sisa)
            {
                case 10: heksadesimal.insert (0, 'A');
                         break;
                case 11: heksadesimal.insert (0, 'B');
                         break;
                case 12: heksadesimal.insert (0, 'C');
                         break;
                case 13: heksadesimal.insert (0, 'D');
                         break;
                case 14: heksadesimal.insert (0, 'E');
                         break;
                case 15: heksadesimal.insert (0, 'F');
                         break;
                default: heksadesimal.insert (0, sisa);
                         break;
            }
            desimal /= 16;
        }

        System.out.print ("Heksadesimal  : " + heksadesimal);
    }
}