import java.util.Scanner;
import java.util.Random;

public class BatuGuntingKertas
{
    Scanner scanner = new Scanner (System.in);
    Random random = new Random ();

    char pilihan_pemain ()
    {
        char pemain;
        do
        {
            System.out.println ("===================");
            System.out.println ("Batu_Gunting-Kertas");
            System.out.println ("===================");
            System.out.println ("'b' untuk batu");
            System.out.println ("'g' untuk gunting");
            System.out.println ("'k' untuk kertas");
            System.out.println ("Silahkan pilih: ");
            pemain = scanner.next ().charAt (0);

        } while (pemain != 'b' && pemain != 'g' && pemain != 'k');

        return pemain;
    }
        
    char pilihan_komputer ()
    {
        int angka = random.nextInt (3) + 1;

        switch (angka)
        {
            case 1: return 'b';
            case 2: return 'g';
            case 3: return 'k';
        }

        return ' ';
    }

    void tampilkan_pilihan (char pilihan)
    {
        switch (pilihan)
        {
            case 'b':
                System.out.println ("Batu");
                break;
            case 'g':
                System.out.println ("Gunting");
                break;
            case 'k':
                System.out.println ("Kertas");
                break;
        }
    }

    void pemenang (char pemain, char komputer)
    {
        switch (pemain)
        {
            case 'b':
                if (komputer == 'b')
                {
                    System.out.println ("Seri!");
                }

                else if (komputer == 'g')
                {
                    System.out.println ("Kamu menang!");
                }

                else if (komputer == 'k')
                {
                    System.out.println ("Kamu kalah!");
                }
                break;

            case 'g':
                if (komputer == 'b')
                {
                    System.out.println ("Kamu kalah!");
                }

                else if (komputer == 'g')
                {
                    System.out.println ("Seri!");
                }

                else if (komputer == 'k')
                {
                    System.out.println ("Kamu menang!");
                }
                break;

            case 'k':
                if (komputer == 'b')
                {
                    System.out.println ("Kamu menang!");
                }

                else if (komputer == 'g')
                {
                    System.out.println ("Kamu kalah!");
                }

                else if (komputer == 'k')
                {
                    System.out.println ("Seri!");
                }
                break;
        }
    }

    public static void main (String [] args)
    {
        BatuGuntingKertas bgk = new BatuGuntingKertas ();

        char pemain, komputer;

        pemain = bgk.pilihan_pemain ();
    
        System.out.print ("Pilihanmu: ");
        bgk.tampilkan_pilihan (pemain);
    
        komputer = bgk.pilihan_komputer ();
        System.out.print ("Pilihan komputer: ");
        bgk.tampilkan_pilihan (komputer);
    
        bgk.pemenang (pemain, komputer);
    }
}