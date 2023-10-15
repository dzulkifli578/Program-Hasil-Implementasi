import java.util.Scanner;
import java.util.Arrays;

public class MinimalMaksimalRata
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        /*
            inisialisasi variabel:
            - batas  = untuk membatasi perulangan yang berhubungan dengan array
            - angka  = array untuk menampung angka yang ditentukan
        */

        int batas = 5;
        int [] angka = new int [5];

        // memasukkan angka ke dalam array untuk diproses
        for (int i = 0; i < batas; i++)
        {
            angka [i] = scanner.nextInt ();
        }

        // memanggil fungsi urut_angka untuk menentukan nilai minimal dan nilai maksimal
        urut_angka (angka);

        // memanggil fungsi rata_rata untuk menghitung rata-rata 
        rata_rata (angka);

        scanner.close();
    }

    public static void urut_angka (int [] angka)
    {
        // mengurutkan angka-angka di dalam elemen array menggunakan algoritma Arrays.sort()
        Arrays.sort (angka);

        // menampilkan nilai minimal dengan mengambil elemen array dengan index pertama
        System.out.println ("Nilai minimal: " + angka [0]);
        // menampilkan nilai minimal dengan mengambil elemen array dengan index terakhir
        System.out.println ("Nilai maksimal: " + angka [4]);
    }

    public static void rata_rata (int [] angka)
    {
        // inisialisasi variabel tambah untuk menampung elemen array untuk diproses
        int tambah = 0;

        for (int i = 0; i < angka.length; i++)
        {
            tambah += angka [i];
        }

        /*
            menghitung nilai rata-rata dari variabel tambah

            rumus rata-rata:
            - (total semua nilai / jumlah nilai yang dimasukkan)
        */
        float rata = (float) tambah / angka.length;
        System.out.println ("Nilai rata-rata: " + rata);
    }
}
