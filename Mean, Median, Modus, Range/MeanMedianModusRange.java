import java.util.Scanner;

public class MeanMedianModusRange
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        // Inisialisasi array dan ukuran array
        int [] arr;
        int input = 0, elemen = 0;
        
        // input ukuran array dari user
        input = scan.nextInt ();
        arr = new int [input];
        // inisialisasi elemen dengan panjang array
        elemen = arr.length;

        // Input setiap elemen array
        for (int i = 0; i < input; i++)
        {
            arr [i] = scan.nextInt ();
        }

        scan.close ();

        // memanggil fungsi-fungsi yang diperlukan
        bubbleSort (arr, elemen);
        System.out.print ("Mean      : "); mean (arr, elemen);
        System.out.print ("Median    : "); median (arr, elemen);
        System.out.print ("Mode      : "); mode (arr, elemen);
        System.out.print ("Range     : "); range (arr, elemen);

        // menghapus array setelah dipakai
        arr = null;
    }

    public static void bubbleSort (int [] arr, int elemen)
    {
    // mengurutkan elemen array dengan algoritma bubble sort
        for (int i = 0; i < elemen - 1; i++)
        {
            for (int j = 0; j < elemen - i - 1; j++)
            {
                if (arr [j] > arr [j + 1])
                {
                    int x = arr [j];
                    arr [j] = arr [j + 1];
                    arr [j + 1] = x;
                }
            }
        }
    }

    public static void mean (int [] arr, int elemen)
    {
        // mean = total semua nilai / jumlah nilai yang dimasukkan
        double hasil = 0;
        for (int i = 0; i < elemen; i++)
        {
            hasil += arr [i];
        }
            hasil /= elemen;
            System.out.printf("%.2f%n", hasil);
        }

    public static void median (int [] arr, int elemen)
    {
        // median = nilai tengah
        if (elemen % 2 == 1)
        {
            System.out.println (arr [elemen / 2 - 1]);
        }
        else
        {
            double median = (arr [elemen / 2 - 1] + arr [elemen / 2]) / 2.0;
            System.out.printf ("%.2f%n", median);
        }
    }

    public static void mode (int [] arr, int elemen)
    {
    // mode = frekuensi nilai yang sering muncul
    int mode = 0, angka = 0, max = 0, hitung;

    for (int i = 0; i < elemen; i++)
    {
        angka = arr [i];
        hitung = 0;
        for (int j = 0; j < elemen; j++)
        {
            if (angka == arr [j])
            {
                hitung++;
            }
            if (hitung > max)
            {
                max = hitung;
                if (max == 1)
                {
                    mode = arr [0];
                }
                else
                {
                    mode = angka;
                }
            }
        }

    }
        System.out.println (mode);
    }

    public static void range(int[] arr, int elemen)
    {
        // range = nilai terbesar - nilai terkecil
        System.out.println (arr [elemen - 1] - arr[0]);
    }
}
