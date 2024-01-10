import java.util.Scanner;

public class PengirimanPaketLogistik
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int [] kesulitan = new int [100];
        int rute = scan.nextInt ();

        for (int i = 0; i < rute; i++)
            kesulitan [i] = scan.nextInt ();
        scan.close ();

        for (int i = 0; i < rute - 1; i++)
            for (int j = 0; j < rute - i - 1; j++)
                if (kesulitan [j] > kesulitan [j + 1])
                {
                    int sementara = kesulitan [j];
                    kesulitan [j] = kesulitan [j + 1];
                    kesulitan [j + 1] = sementara;
                }

        System.out.print ("\n" + kesulitan [0]);
    }
}