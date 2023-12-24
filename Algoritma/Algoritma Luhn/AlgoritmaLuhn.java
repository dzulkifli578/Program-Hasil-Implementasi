import java.util.Scanner;

public class AlgoritmaLuhn
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);

        int [] digit_angka = new int [17];
        int hasil = 0;

        System.out.println ("Masukkan nomor kartu:");
        String digit = scan.nextLine ();

        scan.close ();
        
        for (int i = 0; i < 16; i++)
        {
            digit_angka [i] = Character.getNumericValue (digit.charAt (i));

            if (i == 0 || i % 2 == 0)
            {
                digit_angka [i] *= 2;
                if (digit_angka [i] > 9) digit_angka [i] -= 9;
            }

            hasil += digit_angka [i];
        }

            System.out.println
            ( hasil % 10 == 0 ? "Nomor kartu valid" : "Nomor kartu tidak valid");
    }
}