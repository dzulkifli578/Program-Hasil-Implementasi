import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class PengurutNama
{
    public static void main (String [] args)
    {
        // membuat objek Scanner untuk input
        Scanner scan = new Scanner (System.in);
        // membuat objek ArrayList untuk menampung daftar nama
        ArrayList <String> names = new ArrayList <> ();

        System.out.println ("Masukkan daftar nama (ketik 'selesai' untuk mengakhiri): ");
        while (true)
        {
            String input = scan.nextLine ();
            if (input.equalsIgnoreCase ("selesai")) break;
            names.add (input);
        }
        scan.close ();

        // mengurutkan nama
        Collections.sort (names);

        // menampilkan daftar nama
        System.out.println ("\nHasil pengurutan daftar nama:");
        for (String name : names) System.out.println (name);
    }
}