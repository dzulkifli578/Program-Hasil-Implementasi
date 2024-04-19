import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class DaftarBelanja {
    public static void main(String[] args) {
        ShoppingList shoppingList = new ShoppingList();
        String input;

        Scanner scanner = new Scanner(System.in);

        do {
            System.out.println("==============================");
            System.out.println("Aplikasi Daftar belanja");
            System.out.println("==============================");
            System.out.println("1. Tambah barang ke daftar belanja");
            System.out.println("2. Lihat daftar belanja");
            System.out.println("3. Edit daftar belanja");
            System.out.println("4. Hapus daftar belanja");
            System.out.println("5. Keluar");
            System.out.println("==============================");
            input = scanner.nextLine();

            switch (input) {
                case "1":
                    shoppingList.AddShoppingList();
                    break;
                case "2":
                    shoppingList.SeeShoppingList();
                    break;
                case "3":
                    shoppingList.EditShoppingList();
                    break;
                case "4":
                    shoppingList.DeleteShoppingList();
                    break;
                case "5":
                    System.out.println("Terima kasih!");
                    break;
                default:
                    System.out.println("Input tidak valid");
            }
        } while (!input.equals("5"));

        scanner.close();
    }
}

class ShoppingList {
    private int index = -1;
    private List<String> NamaBarang = new ArrayList<>();
    private List<Integer> JumlahBarang = new ArrayList<>();

    public void AddShoppingList() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Masukkan Nama Barang : ");
        String NamaBarang = scanner.nextLine();
        this.NamaBarang.add(NamaBarang);

        System.out.print("Masukkan Jumlah Barang : ");
        int JumlahBarang = Integer.parseInt(scanner.nextLine());
        this.JumlahBarang.add(JumlahBarang);

        index++;

        scanner.close();
    }

    public void SeeShoppingList() {
        for (int i = 0; i < NamaBarang.size(); i++) {
            System.out.println((i + 1) + ". " + NamaBarang.get(i) + " (" + JumlahBarang.get(i) + ")");
        }
    }

    public void EditShoppingList() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Masukkan ID Barang yang ingin diubah : ");
        int IDBarang = Integer.parseInt(scanner.nextLine());

        if (IDBarang > index || IDBarang < 0) {
            System.out.println("ID tidak ditemukan");
            scanner.close();
            return;
        }

        System.out.print("Masukkan Nama Barang baru : ");
        String NamaBarangBaru = scanner.nextLine();

        System.out.print("Masukkan Jumlah Barang baru : ");
        int JumlahBarangBaru = Integer.parseInt(scanner.nextLine());

        NamaBarang.set(IDBarang, NamaBarangBaru);
        JumlahBarang.set(IDBarang, JumlahBarangBaru);

        scanner.close();
    }

    public void DeleteShoppingList() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Masukkan ID Barang yang ingin dihapus : ");
        int IDBarang = Integer.parseInt(scanner.nextLine());

        if (IDBarang > index || IDBarang < 0) {
            System.out.println("ID tidak ditemukan");
            scanner.close();
            return;
        }

        NamaBarang.remove(IDBarang);
        JumlahBarang.remove(IDBarang);

        scanner.close();
    }
}
