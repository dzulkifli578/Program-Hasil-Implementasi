import java.util.Scanner;
import java.util.Random;

public class PasswordGenerator
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        Random rand = new Random ();

        char [] karakter = new char [62];
        
        // isi array dengan huruf kecil
        for (int i = 0; i < 26; i++)
            karakter [i] = (char) ('a' + i);

        // isi array dengan huruf besar
        for (int i = 0; i < 26; i++)
            karakter [i + 26] = (char) ('A' + i);
        
        // isi array dengan angka
        for (int i = 0; i < 10; i++)
            karakter [i + 52] = (char) ('0' + i);

        System.out.print ("Masukkan panjang password: ");
        int panjang = scan.nextInt ();
        scan.close ();

        for (int i = 0; i < panjang; i++)
            System.out.print (karakter [Math.abs (rand.nextInt ()) % 62]);
    }
}