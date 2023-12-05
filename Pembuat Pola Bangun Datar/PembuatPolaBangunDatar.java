import java.util.Scanner;

public class PembuatPolaBangunDatar
{
    Scanner scanner = new Scanner (System.in);

    public static void main (String [] args)
    {
        PembuatPolaBangunDatar ppbd = new PembuatPolaBangunDatar ();

        short pilihan = 0;
        do
        {
            System.out.print ("========== Pembuat Pola Bangun Datar ==========\n");
            System.out.print ("1. Persegi\n");
            System.out.print ("2. Persegi panjang\n");
            System.out.print ("3. Segitiga\n");
            System.out.print ("4. Jajar genjang\n");
            System.out.print ("5. Keluar\n");
            System.out.print ("Pilih salah satu: ");
            pilihan = ppbd.scanner.nextShort ();

            switch (pilihan)
            {
                case 1: ppbd.persegi ();
                        break;
                case 2: ppbd.persegi_panjang ();
                        break;
                case 3: ppbd.segitiga ();
                        break;
                case 4: ppbd.jajar_genjang ();
                        break;
                case 5: System.out.print ("Terima kasih telah menggunakan program ini!\n");
                        break;
                default: System.out.print ("Input error\n");
                        break;
            }
        } while (pilihan != 5);    
    }

    void persegi ()
    {
        System.out.print ("Masukkan panjang sisi: ");
        short sisi = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= sisi; i++)
        {
            for (short j = 1; j <= sisi; j++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    void persegi_panjang ()
    {
       System.out.print ("Masukkan sisi panjang: ");
        short panjang = scanner.nextShort ();

        System.out.print ("Masukkan sisi lebar: ");
        short lebar = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= lebar; i++)
        {
            for (short j = 1; j <= panjang; j++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    void segitiga ()
    {
        System.out.print ("========== Pembuat Pola Segitiga ==========\n");
        System.out.print ("1. Segitiga siku-siku pola 1\n");
        System.out.print ("2. Segitiga siku-siku pola 1 (terbalik)\n");
        System.out.print ("3. Segitiga siku-siku pola 2\n");
        System.out.print ("4. Segitiga siku-siku pola 2 (terbalik)\n");
        System.out.print ("5. Segitiga sama kaki\n");
        System.out.print ("Pilih salah satu: ");
        short pilihan = scanner.nextShort ();

        scanner.close ();

        switch (pilihan)
        {
            case 1: segitiga_siku_siku_pola1 ();
                    break;
            case 2: segitiga_siku_siku_pola1_terbalik ();
                    break;
            case 3: segitiga_siku_siku_pola2 ();
                    break;
            case 4: segitiga_siku_siku_pola2_terbalik ();
                    break;
            case 5: segitiga_sama_kaki ();
                    break;
            default: System.out.print ("Input error\n");
                     break;
        }
    }

    void segitiga_siku_siku_pola1 ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        short tinggi = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= tinggi; i++)
        {
            for (short j = 1; j <= i; j++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    void segitiga_siku_siku_pola1_terbalik ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        short tinggi = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= tinggi; i++)
        {
            for (short j = 1; j <= tinggi - i; j++)
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
        short tinggi = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= tinggi; i++)
        {
            for (short j = 1; j <= tinggi - i; j++)
            {
                System.out.print (" ");
            }
            for (short k = 1; k <= i; k++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    void segitiga_siku_siku_pola2_terbalik ()
    {
        System.out.print ("Masukkan tinggi segitiga: ");
        short tinggi = scanner.nextShort ();

        scanner.close ();

        for (short i = 0; i <= tinggi; i++)
        {
            for (short j = 1; j <= i; j++)
            {
                System.out.print (" ");
            }
            for (short k = 1; k <= tinggi - i; k++)
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
        short tinggi = scanner.nextShort ();

        scanner.close ();

        for (short i = 1; i <= tinggi; i++)
        {
            for (short j = 1; j <= tinggi - i; j++)
            {
                System.out.print (" ");
            }
            for (short k = 1; k <= 2 * i - 1; k++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }

    void jajar_genjang ()
    {
        System.out.print ("Masukkan panjang alas: ");
        short alas = scanner.nextShort ();

        System.out.print ("Masukkan tinggi: ");
        short tinggi = scanner.nextShort ();
        
        scanner.close ();
        for (short i = 1; i <= tinggi; i++)
        {
            for (short j = 1; j <= tinggi - i; j++)
            {
                System.out.print (" ");
            }
            for (short k = 1; k <= alas; k++)
            {
                System.out.print ("*");
            }
            System.out.println ();
        }
    }
}