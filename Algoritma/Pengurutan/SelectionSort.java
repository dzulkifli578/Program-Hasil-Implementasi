import java.util.Scanner;
import java.util.Random;

public class SelectionSort
{
    static Scanner scan = new Scanner (System.in);
    static Random random = new Random ();

    public static void main (String [] args)
    {
        int pilihan = 0, ukuran = 0;

        do {
            System.out.println ("========== SELECTION SORT ==========");
            System.out.println ("1. Isi array secara manual");
            System.out.println ("2. Isi array secara otomatis (acak)");
            System.out.println ("3. Keluar");
            System.out.print ("Pilih salah satu: ");
            pilihan = scan.nextInt ();

            switch (pilihan)
            {
                case 1: manual (ukuran);
                        break;
                case 2: otomatis (ukuran);
                        break;
                case 3: System.out.println ("Terima kasih telah menggunakan program ini!");
                        break;
                default: System.out.println ("Input error");
            }
        } while (pilihan != 3);

        scan.close ();
    }

    static void manual (int ukuran)
    {
        System.out.print ("Masukkan batas ukuran array: ");
        ukuran = scan.nextInt ();

        int [] array = new int [ukuran];

        System.out.print ("Masukkan nilai tiap elemen array (dipisahkan oleh spasi): ");
        for (int i = 0; i < ukuran; i++)
        {
            array [i] = scan.nextInt ();
        }

        urut_dan_tampilkan (ukuran, array);
    }

    static void otomatis (int ukuran)
    {
        int batas = 0;

        System.out.print ("Masukkan batas ukuran array: ");
        ukuran = scan.nextInt ();
        System.out.print ("Masukkan batas angka acak: ");
        batas = scan.nextInt ();

        int [] array = new int [ukuran];

        for (int i = 0; i < ukuran; i++)
        {
            array [i] = random.nextInt (batas) + 1;
        }

        System.out.print ("Elemen array: ");
        for (int i = 0; i < ukuran; i++)
        {
            System.out.print (array [i] + " ");
        }
        System.out.println ();

        urut_dan_tampilkan (ukuran, array);
    }

    static void urut_dan_tampilkan (int ukuran, int [] array)
    {
        for (int i = 0; i < ukuran - 1; i++)
        {
            int minimal = i;
            for (int j = i + 1; j < ukuran; j++)
            {
                if (array [minimal] > array [j])
                {
                    minimal = j;
                }
            }
            int sementara = array [i];
            array [i] = array [minimal];
            array [minimal] = sementara;
        }
    
        System.out.print ("Hasil pengurutan elemen array: ");
        for (int i = 0; i < ukuran; i++)
        {
            System.out.print (array [i] + " ");
        }
        System.out.println ();
    }
}
