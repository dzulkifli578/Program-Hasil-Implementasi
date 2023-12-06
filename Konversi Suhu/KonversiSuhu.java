import java.util.Scanner;

public class KonversiSuhu
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        float suhu = 0;
        char satuan;

        do
        {
            System.out.println ("========== Konversi Suhu ==========");
            System.out.println ("C = Celsius");
            System.out.println ("F = Fahrenheit");
            System.out.println ("K = Keluar");
            System.out.print ("Satuan mana yang ingin dikonversi?: ");
            satuan = scan.next ().charAt (0);

            if (satuan == 'C' || satuan == 'c')
            {
                System.out.print ("Masukkan suhu dalam satuan Fahrenheit: ");
                suhu = scan.next ().charAt (0);
                scan.close ();
                
                System.out.printf ("Suhu: %.2f derajat Celsius\n", (suhu - 32) * 5 / 9);
            }
            else if (satuan == 'F' || satuan == 'f')
            {
                System.out.print ("Masukkan suhu dalam Celsius: ");
                suhu = scan.next ().charAt (0);
                scan.close ();

                System.out.printf ("Suhu: %.2f derajat Fahrenheit\n", (suhu * 9 / 5) + 32);
            }
            else if (satuan == 'K' || satuan == 'k')
            {
                System.out.println ("Terima kasih telah menggunakan program ini!");
                break;
            }
            else
            {
                System.out.println("Masukkan antara C atau F");
                continue;
            }
        } while (true);
    }