import java.util.Scanner;

public class PembalikAngka
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner(System.in);

        System.out.print ("Masukkan batas input angka: ");
        int batas = scan.nextInt();

        String [] array = new String [batas];

        System.out.println ("Masukkan daftar angka:");
        for (int i = 0; i < batas; i++)
            array [i] = scan.next ();

        scan.close ();
        
        System.out.println ("Daftar angka yang dibalik:");
        for (int i = 0; i < batas; i++)
        {
            for (int j = array [i].length () - 1; j >= 0; j--)
                System.out.print (array [i].charAt (j));
            System.out.println ();
        }
    }
}
