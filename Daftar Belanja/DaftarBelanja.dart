import 'dart:io';

void main() {
  ShoppingList shoppingList = ShoppingList();
  late String input;

  do {
    print('==============================');
    print('Aplikasi Daftar belanja');
    print('==============================');
    print('1. Tambah barang ke daftar belanja');
    print('2. Lihat daftar belanja');
    print('3. Edit daftar belanja');
    print('4. Hapus daftar belanja');
    print('5. Keluar');
    print('==============================');
    input = stdin.readLineSync() ?? '';

    switch (input) {
      case '1':
        shoppingList.AddShoppingList();
        break;
      case '2':
        shoppingList.SeeShoppingList();
        break;
      case '3':
        shoppingList.EditShoppingList();
        break;
      case '4':
        shoppingList.DeleteShoppingList();
        break;
      case '5':
        print('Terima kasih!');
        break;
      default:
        print('Input tidak valid');
    }
  } while (input != '5');
}

class ShoppingList {
  int index = -1;
  late List<String> NamaBarang = [];
  late List<int> JumlahBarang = [];

  void AddShoppingList() {
    stdout.write('Masukkan Nama Barang : ');
    String NamaBarang = stdin.readLineSync() ?? '';
    this.NamaBarang.add(NamaBarang);

    stdout.write('Masukkan Jumlah Barang : ');
    int JumlahBarang = int.parse(stdin.readLineSync() ?? '0');
    this.JumlahBarang.add(JumlahBarang);

    index++;
  }

  void SeeShoppingList() {
    for (int i = 0; i < NamaBarang.length; i++) {
      print('${i + 1}. ${NamaBarang[i]} (${JumlahBarang[i]})');
    }
  }

  void EditShoppingList() {
    stdout.write('Masukkan ID Barang yang ingin diubah : ');
    int IDBarang = int.parse(stdin.readLineSync() ?? '0');

    if (IDBarang > index || IDBarang < 0) {
      print('ID tidak ditemukan');
      return;
    }

    stdout.write('Masukkan Nama Barang baru : ');
    String NamaBarangBaru = stdin.readLineSync() ?? '';

    stdout.write('Masukkan Jumlah Barang baru : ');
    int JumlahBarangBaru = int.parse(stdin.readLineSync() ?? '0');

    NamaBarang[IDBarang] = NamaBarangBaru;
    JumlahBarang[IDBarang] = JumlahBarangBaru;
  }

  void DeleteShoppingList() {
    print('Masukkan ID Barang yang ingin dihapus : ');
    int IDBarang = int.parse(stdin.readLineSync() ?? '0');

    if (IDBarang > index || IDBarang < 0) {
      print('ID tidak ditemukan');
      return;
    }

    NamaBarang.removeAt(IDBarang);
    JumlahBarang.removeAt(IDBarang);
  }
}
