import java.util.Scanner;
import java.util.Random;

public class BatuGuntingKertas
{
    static String [] choices = {"Batu", "Gunting", "Kertas"};
    static int [][] results = {{0, 1, -1}, {-1, 0, 1}, {1, -1, 0}};
    static Scanner scan = new Scanner (System.in);
    static Random rand = new Random ();

    public static void main (String [] args)
    {
        while (true)
        {
            int PlayerChoice, ComputerChoice;
        
            PlayerChoice = player ();
            ComputerChoice = computer ();
            challenge (PlayerChoice, ComputerChoice);

            System.out.print ("\nIngin bermain lagi? (Y/y atau ketik sembarang untuk keluar): ");
            char choice = scan.next ().charAt (0);

            if (Character.toUpperCase (choice) != 'Y')
            {
                System.out.println ("Terima kasih telah bermain!");
                break;
            }
        }
    }

    static int player ()
    {
        System.out.println ("====================");
        System.out.println ("Batu-Gunting-Kertas");
        System.out.println ("====================");
        System.out.println ("1. Batu");
        System.out.println ("2. Gunting");
        System.out.println ("3. Kertas");
        System.out.println ("====================");
        System.out.print ("Pilih salah satu: ");
        int PlayerChoice = scan.nextInt ();

        while (PlayerChoice < 1 || PlayerChoice > 3)
        {
            System.out.println ("Masukkan hanya angka 1-3");
            System.out.print ("Pilih salah satu: ");
            PlayerChoice = scan.nextInt ();
        }

        System.out.printf ("\nPlayer memilih [%s]\n",choices [PlayerChoice - 1]);
        return PlayerChoice;
    }

    static int computer ()
    {
        int ComputerChoice = rand.nextInt (3);
        System.out.printf ("Komputer memilih [%s]\n", choices [ComputerChoice]);
        return ComputerChoice;
    }

    static void challenge (int PlayerChoice, int ComputerChoice)
    {
        int result = results [PlayerChoice - 1][ComputerChoice];
        if (result == 0) System.out.println ("Seri");
        else if (result == 1) System.out.println ("Player Menang, Computer Kalah");
        else System.out.println ("Player Kalah, Computer Menang");
    }
}