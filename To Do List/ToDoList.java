import java.util.ArrayList;
import java.util.Scanner;

public class ToDoList {
    static Scanner scanner = new Scanner(System.in);
    public static void main(String[] args) {
        int input;
        ListToDo toDoList = new ListToDo();

        do {
            System.out.println("==============================");
            System.out.println("To-Do List");
            System.out.println("==============================");
            toDoList.view();
            System.out.println("==============================");
            System.out.println("1. Tambah");
            System.out.println("2. Edit");
            System.out.println("3. Hapus");
            System.out.println("4. Keluar");
            System.out.print("Masukkan salah satu: ");
            input = Integer.parseInt(scanner.nextLine());

            switch (input) {
                case 1:
                    toDoList.add();
                    break;
                case 2:
                    toDoList.edit();
                    break;
                case 3:
                    toDoList.delete();
                    break;
                case 4:
                    System.out.println("Terima kasih!");
                    break;
                default:
                    System.out.println("Input error, silahkan coba lagi");
                    break;
            }
        } while (input != 4);

        scanner.close();
    }
}

class ListToDo {
    static Scanner scanner = new Scanner(System.in);
    private ArrayList<String> list;

    public ListToDo() {
        this.list = new ArrayList<>();
    }

    public void add() {
        while (true) {
            System.out.print("Masukkan list (STOP jika ingin berhenti): ");
            String isi = scanner.nextLine();
            if (isi.toUpperCase().equals("STOP")) {
                break;
            } else {
                list.add(isi);
            }
        }
    }

    public void view() {
        if (list.isEmpty()) {
            System.out.println("Kamu belum memiliki list!");
        } else {
            for (int i = 0; i < list.size(); i++) {
                System.out.println((i + 1) + ". " + list.get(i));
            }
        }
    }

    public void edit() {
        System.out.print("Masukkan nomor urut list yang akan diedit : ");
        int ID = Integer.parseInt(scanner.nextLine());
        System.out.print("Masukkan list baru: ");
        String isi = scanner.nextLine();
        list.set(ID - 1, isi);
    }

    public void delete() {
        System.out.print("Masukkan nomor urut list yang akan dihapus : ");
        int ID = Integer.parseInt(scanner.nextLine());
        list.remove(ID - 1);
    }
}
