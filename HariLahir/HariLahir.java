import java.util.Scanner;

class ErrorMessage
{
    static final String FORMAT_EXAMPLE = "Masukkan format tanggal seperti ini\nDD MM YYYY\n18 10 2006";
    static final String NO_DAY_OR_MONTH = "Tidak ada hari atau bulan yang nol atau negatif";
    static final String NO_DAY = "Tidak ada hari nol atau negatif";
    static final String NO_MONTH = "Tidak ada bulan nol atau negatif";
    static final String MAX_MONTH_DAY = "1 tahun maksimal 12 bulan, dan 1 bulan maksimal 31 hari";
    static final String POSITIVE_YEAR = "Masukan tahun hanya bilangan positif";
    static final String MAX_DAY = "1 bulan maksimal 31 hari";}

class HariLahir
{
    public static void main (String [] args)
    {
        Scanner scan = new Scanner (System.in);
        int day = 0, month = 0, year = 0;

        System.out.print ("Masukkan tanggal lahirmu: ");
        day = scan.nextInt ();
        month = scan.nextInt ();
        year = scan.nextInt ();
        scan.close ();

        CheckDate (day, month, year);
        CheckMonth (day, month, year);
        DefineDay (day, month, year);
        
    }

static void CheckDate (int day, int month, int year)
{
    if (day == 0 && month == 0 && year == 0)
        System.out.println(ErrorMessage.FORMAT_EXAMPLE);
    
    if (day <= 0 || month <= 0 || (day > 31 && month > 12 && year <= 0))
    {
        if (day > 31 && month > 12 && year <= 0)
            System.out.println(ErrorMessage.MAX_MONTH_DAY + "\n" + ErrorMessage.POSITIVE_YEAR);
        else if (day <= 0)
            System.out.println(month <= 0 ? ErrorMessage.NO_DAY_OR_MONTH : ErrorMessage.NO_DAY);
        else if (month <= 0)
            System.out.println(ErrorMessage.NO_MONTH);
        else
            System.out.println(ErrorMessage.MAX_DAY + "\n" + ErrorMessage.POSITIVE_YEAR);
    }
    else if ((day > 31 && month <= 12) || (day <= 31 && month > 12))
        System.out.println(ErrorMessage.MAX_DAY + "\n" + ErrorMessage.POSITIVE_YEAR);
}

    static void CheckMonth (int day, int month, int year)
    {
        boolean LeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        int DaysPerMonth = 0;

        switch (month)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                DaysPerMonth = 31;
                break;
            case 4: case 6: case 9: case 11:
                DaysPerMonth = 30;
                break;
            case 2:
                DaysPerMonth = LeapYear ? 29 : 28;
                break;
            default:
                System.out.println ("Bulan tidak valid");
                return;
        }

        if (day > DaysPerMonth)
        {
            if (month == 2 && LeapYear)
            {
                System.out.println ("Tahun " + year + " adalah tahun kabisat");
                System.out.println ("Jadi, bulan Februari mempunyai 29 hari");
            }
            else System.out.println ("Bulan " + month + " hanya mempunyai " + DaysPerMonth);
        }
    }

    static void DefineDay (int day, int month, int year)
    {
        String [] days = {"Sabtu", "Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jum'at"};
        String [] months = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
        int PrintDay = day;

        int PreviousYear = 0;
        int MonthAdjusment = 0;

        if (month <= 2) PreviousYear = year - 1;
        else
        {
            PreviousYear = year;
            MonthAdjusment = (4 * month + 23) / 10;
        }

        int TotalDays = 365 * year + day + 31 * (month - 1) - MonthAdjusment + (PreviousYear / 4) - ((3 * ((PreviousYear / 100) + 1) / 4));
        day = TotalDays % 7;

        System.out.println ("Kamu lahir pada hari " + days [day]);
        System.out.println ("Tanggal " + PrintDay + " " + months [month - 1] + " " + year);
    }
}