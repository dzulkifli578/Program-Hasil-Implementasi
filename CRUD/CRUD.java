import java.util.Scanner;
import java.util.ArrayList;

public class CRUD
{
    static Scanner scan = new Scanner (System.in);
    static ArrayList <String> NamaPeminjam = new ArrayList <> ();
    static ArrayList <String> JudulBuku = new ArrayList <> ();
    static ArrayList <String> Tanggal = new ArrayList <> ();

    public static void main (String [] args)
    {
        /*
            buat program CRUD Peminjaman BUKU dengan ArrayList

            ArrayList function:
            add    = menambah elemen
            set    = mengedit elemen berdasarkan index
            remove = menghapus elemen
            get    = mengambil elemen
            size   = mengambil ukuran array
        */

        while (true)
        {
                System.out.println ("==============================");
                System.out.println ("PEMINJAMAN BUKU");
                System.out.println ("==============================");
                System.out.println ("1. Tambahkan peminjam");
                System.out.println ("2. Tampilkan peminjam");
                System.out.println ("3. Edit peminjam");
                System.out.println ("4. Hapus peminjam");
                System.out.println ("5. Keluar");
                System.out.println ("==============================");
                System.out.print ("Pilih salah satu: ");
                byte pilihan = scan.nextByte ();
        
                switch (pilihan)
                {
                    case 1: create ();
                            break;
                    case 2: read (NamaPeminjam, JudulBuku, Tanggal);
                            break;
                    case 3: update (NamaPeminjam, JudulBuku, Tanggal);
                            break;
                    case 4: delete (NamaPeminjam, JudulBuku, Tanggal);
                            break;
                    case 5: System.out.println ("Terima kasih telah menggunakan program ini!");
                            return;
                    default: System.out.println ("Input error");
                             break;
                }
        }
    }

    static void create ()
    {
        System.out.println ("==============================");
        System.out.println ("TAMBAHKAN PEMINJAM");
        System.out.println ("==============================");

        System.out.print ("Masukkan nama peminjam: ");
        scan.nextLine ();
        String peminjam = scan.nextLine ();
        NamaPeminjam.add (peminjam);

        System.out.print ("Masukkan judul buku yang dipinjam: ");
        String judul_buku = scan.nextLine ();
        JudulBuku.add (judul_buku);

        System.out.print ("Masukkan tanggal meminjam buku: ");
        String tanggal = scan.nextLine ();
        Tanggal.add (tanggal);
    }

    static void read (ArrayList <String> NamaPeminjam, ArrayList <String> JudulBuku, ArrayList <String> Tanggal)
    {
        System.out.println ("==============================");
        System.out.println ("TAMPILKAN PEMINJAM");
        System.out.println ("==============================");

        if (NamaPeminjam.size () == 0) System.out.println ("Data tidak ditemukan");
        else
        {
            for (int i = 0; i < NamaPeminjam.size (); i++)
            {
                    System.out.println ("ID         : " + i);
                    System.out.println ("Nama       : " + NamaPeminjam.get (i));
                    System.out.println ("Judul buku : " + JudulBuku.get (i));
                    System.out.println ("Tanggal    : " + Tanggal.get (i));
                    System.out.println ("==============================");
            }
        }
    }

    static void update (ArrayList <String> NamaPeminjam, ArrayList <String> JudulBuku, ArrayList <String> Tanggal)
    {
        System.out.println ("==============================");
        System.out.println ("EDIT PEMINJAM");
        System.out.println ("==============================");

        if (NamaPeminjam.size () == 0) System.out.println ("Data tidak ditemukan");
        else
        {
            System.out.print ("Masukkan ID peminjam: ");
            int ID = scan.nextInt ();
            scan.nextLine ();
    
            for (int i = 0; i < NamaPeminjam.size (); i++)
            {
                if (ID == i)
                {
                    System.out.println ("ID         : " + i);
                    System.out.println ("Nama       : " + NamaPeminjam.get (i));
                    System.out.println ("Judul buku : " + JudulBuku.get (i));
                    System.out.println ("Tanggal    : " + Tanggal.get (i));
    
                    System.out.println ("\nEdit");
                    System.out.print ("Nama       : ");
                    String nama = scan.nextLine ();
                    System.out.print ("Judul buku : ");
                    String judul = scan.nextLine ();
                    System.out.print ("Tanggal    : ");
                    String tanggal = scan.nextLine ();
    
                    NamaPeminjam.set (i, nama);
                    JudulBuku.set (i, judul);
                    Tanggal.set (i, tanggal);
                }
                else System.out.println ("Data tidak ditemukan");    
            }
        }
     }

    static void delete (ArrayList <String> NamaPeminjam, ArrayList <String> JudulBuku, ArrayList <String> Tanggal)
    {
        System.out.println ("==============================");
        System.out.println ("HAPUS PEMINJAM");
        System.out.println ("==============================");

        if (NamaPeminjam.size () == 0) System.out.println ("Data tidak ditemukan");
        else
        {
            System.out.print ("Masukkan ID peminjam: ");
            int ID = scan.nextInt ();
            scan.nextLine ();
    
            for (int i = 0; i < NamaPeminjam.size (); i++)
            {
                if (ID == i)
                {
                    System.out.println ("ID         : " + i);
                    System.out.println ("Nama       : " + NamaPeminjam.get (i));
                    System.out.println ("Judul buku : " + JudulBuku.get (i));
                    System.out.println ("Tanggal    : " + Tanggal.get (i));
    
                    System.out.print ("Hapus? (Y/y atau T/t): ");
                    char konfirmasi = scan.next ().charAt (0);
    
                    if (konfirmasi == 'Y' || konfirmasi == 'y')
                    {
                        NamaPeminjam.remove (i);
                        JudulBuku.remove (i);
                        Tanggal.remove (i);
    
                        System.out.println ("Data berhasil dihapus");
                    }
                    else if (konfirmasi == 'T' || konfirmasi == 't')
                        System.out.println ("Data tidak dihapus");
                    else System.out.println ("Masukan hanya Y/y atau T/t");
                }
                else System.out.println ("Data tidak ditemukan");
            }    
        }
    }
}