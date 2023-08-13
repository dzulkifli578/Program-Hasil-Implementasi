import java.util.Scanner;

public class PembuatPolaSegitiga
{
    Scanner scanner = new Scanner (System.in);
    void segitiga_siku_siku_pola1 ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        byte tinggi = scanner.nextByte ();

        for (byte i = 1; i <= tinggi; i++)
        {
            for (byte j = 1; j <= i; j++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    void segitiga_siku_siku_pola1_terbalik ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        byte tinggi = scanner.nextByte ();

        for (byte i = 0; i <= tinggi; i++)
        {
            for (byte j = 1; j <= tinggi - i; j++)
            {
                System.out.print ("*");
            }
            System.out.println ();

            if (i == tinggi - 1)
            {
                break;
            }
        }
    }

    void segitiga_siku_siku_pola2 ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        byte tinggi = scanner.nextByte ();

        for (byte i = 1; i <= tinggi; i++)
        {
            for (byte j = 1; j <= tinggi - i; j++)
            {
                System.out.print (" ");
            }
            for (byte k = 1; k <= i; k++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    void segitiga_siku_siku_pola2_terbalik ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        byte tinggi = scanner.nextByte ();

        for (byte i = 0; i <= tinggi; i++)
        {
            for (byte j = 1; j <= i; j++)
            {
                System.out.print (" ");
            }

            for (byte k = 1; k <= tinggi - i; k++)
            {
                System.out.print ("*");
            }
            System.out.println ();

            if (i == tinggi - 1)
            {
                break;
            }
        }
    }

    void segitiga_sama_kaki ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        byte tinggi = scanner.nextByte ();

        for (byte i = 1; i <= tinggi; i++)
        {
            for (byte j = 1; j <= tinggi - i; j++)
            {
                System.out.print (" ");
            }
            for (byte k = 1; k <= 2 * i - 1; k++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    public static void main (String [] args)
    {
        PembuatPolaSegitiga pps = new PembuatPolaSegitiga ();

        System.out.println ("========== Pembuat Pola Segitiga ==========");
        System.out.println ("1. Segitiga siku-siku pola 1");
        System.out.println ("2. Segitiga siku-siku pola 1 (terbalik)");
        System.out.println ("3. Segitiga siku-siku pola 2");
        System.out.println ("4. Segitiga siku-siku pola 2 (terbalik)");
        System.out.println ("5. Segitiga sama kaki");
        System.out.print ("Pilih salah satu: ");
        byte pilihan = pps.scanner.nextByte ();

        switch (pilihan)
        {
            case 1:
                pps.segitiga_siku_siku_pola1 ();
                break;
            case 2:
                pps.segitiga_siku_siku_pola1_terbalik ();
                break;
            case 3:
                pps.segitiga_siku_siku_pola2 ();
                break;
            case 4:
                pps.segitiga_siku_siku_pola2_terbalik ();
                break;
            case 5:
                pps.segitiga_sama_kaki ();
                break;
            default:
                System.out.println ("Input error");
                break;
        }
    }
}
