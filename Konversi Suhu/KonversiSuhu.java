import java.util.Scanner;

public class KonversiSuhu
{
    public static void main (String [] args)
    {
        Scanner scanner = new Scanner (System.in);

        float suhu = 0;
        char satuan;

        do
        {
            System.out.println ("========== Konversi Suhu ==========");
            System.out.println ("C = Celsius");
            System.out.println ("F = Fahrenheit");
            System.out.print ("Satuan mana yang ingin dikonversi?: ");
            satuan = scanner.next ().charAt (0);

            if (satuan == 'C' || satuan == 'c')
            {
                System.out.print ("Masukkan suhu dalam satuan Fahrenheit: ");
                suhu = scanner.next ().charAt (0);
                scanner.close ();

                System.out.printf ("Suhu: %.2f derajat Celsius", (1.8 * suhu) + 32 );
                break;
            }

            if (satuan == 'F' || satuan == 'f')
            {
                System.out.print ("Masukkan suhu dalam Celsius: ");
                suhu = scanner.next ().charAt (0);
                scanner.close ();

                System.out.printf ("Suhu: %.2f derajat Fahrenheit", (suhu - 32) / 1.8 );
                break;
            }

            else
            {
                System.out.println("Masukkan antara C atau F");
                break;
            }
        } while (suhu != 'F' || suhu != 'f' || suhu != 'C' || suhu != 'c');
    }
}