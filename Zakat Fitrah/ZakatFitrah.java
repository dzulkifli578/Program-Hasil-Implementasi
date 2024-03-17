import java.util.Scanner;

public class ZakatFitrah
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int orang;
        double harga_kg = 0, harga_L = 0;
        char satuan;

        System.out.println ("========================================");
        System.out.println ("Kalkulator Zakat Fitrah");
        System.out.println ("========================================");
        System.out.print ("Masukkan jumlah orang untuk zakat fitrah: ");
        orang = scan.nextInt ();
        System.out.print ("Pilih satuan makanan pokok (K/L): ");
        satuan = scan.next ().charAt (0);

        if (satuan == 'K' || satuan == 'k')
        {
            System.out.print ("Masukkan harga beras/kg: ");
            harga_kg = scan.nextInt ();
            harga_L = harga_kg / 1.11;
        }
        else if (satuan == 'L' || satuan == 'l')
        {
            System.out.print ("Masukkan harga beras/L: ");
            harga_L = scan.nextInt ();
            harga_kg = harga_L * 1.11;
        }
        else System.out.println ("Input error");
        
        scan.close ();

        System.out.println ("========================================");
        System.out.println ("Jumlah orang yang zakat fitrah   : " + orang);
        System.out.println ("Harga makanan pokok/kg           : " + harga_kg);
        System.out.println ("Harga makanan pokok/L            : " + harga_L);
        System.out.println ("Total harga zakat fitrah         : " + harga_kg * orang);
        System.out.println ("========================================");
    }    
}
