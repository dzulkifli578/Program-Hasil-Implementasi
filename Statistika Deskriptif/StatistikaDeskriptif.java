import java.util.Scanner;
import java.util.Arrays;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class StatistikaDeskriptif
{
    static Scanner scan = new Scanner (System.in);
    static BufferedReader input = new BufferedReader (new InputStreamReader (System.in));
    
    public static void main (String [] args)
        throws IOException
    {
        int ukuran = 0;

        System.out.println ("====================== INPUT DATA =====================");
        System.out.print ("Masukkan batas banyaknya data : ");
        ukuran = scan.nextInt ();

        int [] array = new int [ukuran];
        System.out.print ("Masukkan nilai tiap data      : ");

        String [] string_array;
        string_array = input.readLine ().split (" ");

        for (int i = 0; i < array.length; i++)
        {
            array [i] = Integer.parseInt (string_array [i]);
        }

        data (array);
        mean (array);
        median (array);
        mode (array);
        range (array);
    }

    static void data (int array [])
    {
        System.out.println ("================== IDENTIFIKASI DATA ==================");
        System.out.print ("Data yang dimasukkan          : ");
        for (int i = 0; i < array.length; i++)
        {
            System.out.print (array [i] + " ");
        }
        System.out.println ();

        Arrays.sort (array);
        System.out.print ("Data yang terurut             : ");
        for (int i = 0; i < array.length; i++)
        {
            System.out.print (array [i] + " ");
        }
        System.out.println ();

        System.out.println ("Min                           : " + array [0]);
        System.out.println ("Max                           : " + array [array.length - 1]);
        System.out.println ("================ STATISTIKA DESKRIPTIF ================");
    }

    static void mean (int array [])
    {
        double jumlah = 0;

        for (int i = 0; i < array.length; i++)
        {
            jumlah += array [i];
        }

        System.out.printf ("Mean                          = %.2f\n", jumlah / array.length);
    }

    static void median (int array [])
    {
        if (array.length % 2 == 1)
        {
            System.out.printf ("Median                        = %.2f\n", array [(array.length - 1) / 2]);
        }
        else
        {
            double median = (array [(array.length / 2) - 1] + array [array.length / 2]) / 2.0;
            System.out.printf ("Median                        = %.2f\n", median);
        }
    }

    static void mode (int array [])
    {
        int [] frekuensi = new int [array.length];

        for (int i = 0; i < array.length; i++)
        {
            for (int j = 0; j < array.length; j++)
            {
                if (array [j] == array [i])
                {
                    frekuensi [i]++;
                }
            }
        }

        int max_frekuensi = 0;
        for (int i = 0; i < array.length; i++)
        {
            if (frekuensi [i] > frekuensi [max_frekuensi])
            {
                max_frekuensi = i;
            }
        }

        if (frekuensi [max_frekuensi] > 1)
        {
            System.out.println ("Mode                          = " + array [max_frekuensi]);
        }
        else
        {
            System.out.println ("Mode                          = -");
        }
    }

    static void range (int array [])
    {
        System.out.println ("Range                         = " + (array [array.length - 1] - array [0]));
    }
}