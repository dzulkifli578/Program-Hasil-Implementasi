import 'dart:io';

void main() {
  var catalogProduct = CatalogProduct();
  var input = 0;

  do {
    print('==============================');
    print('Aplikasi Pembuat Katalog Produk');
    print('==============================');
    catalogProduct.view();
    print('==============================');
    print('1. Tambah');
    print('2. Edit');
    print('3. Hapus');
    print('4. Keluar');
    stdout.write('Masukkan salah satu: ');
    input = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;

    switch (input) {
      case 1:
        catalogProduct.add();
        break;
      case 2:
        catalogProduct.edit();
        break;
      case 3:
        catalogProduct.delete();
        break;
      case 4:
        print('Terima kasih!');
        break;
      default:
        print('Masukkan input dari 1-4, silahkan coba lagi');
    }
  } while (input != 4);
}

class CatalogProduct {
  var id = 0;
  late String nama;
  late String deskripsi;
  late double harga;

  var produk = <int, Map<String, dynamic>>{};

  void add() {
    stdout.write('Masukkan nama katalog : ');
    nama = stdin.readLineSync() ?? '';
    stdout.write('Masukkan deskripsi katalog : ');
    deskripsi = stdin.readLineSync() ?? '';
    harga = _inputHarga();
    produk[++id] = {'Nama': nama, 'Deskripsi': deskripsi, 'Harga': harga};
  }

  void view() {
    if (produk.isEmpty) {
      print('Kamu belum memiliki katalog!');
    } else {
      produk.forEach((key, value) {
        print('$key: $value');
      });
    }
  }

  void edit() {
    if (produk.isEmpty) {
      print('Tidak bisa mengedit, kamu belum memiliki katalog!');
    } else {
      stdout.write('Masukkan nomor urut katalog : ');
      var id = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;

      if (!produk.containsKey(id)) {
        print('Tidak ada katalog dengan nomor urut $id!');
      } else {
        stdout.write('Masukkan nama katalog baru : ');
        nama = stdin.readLineSync() ?? '';
        stdout.write('Masukkan deskripsi katalog baru : ');
        deskripsi = stdin.readLineSync() ?? '';
        harga = _inputHarga();
        produk[id] = {'Nama': nama, 'Deskripsi': deskripsi, 'Harga': harga};
      }
    }
  }

  void delete() {
    if (produk.isEmpty) {
      print('Tidak bisa menghapus, kamu belum memiliki katalog!');
    } else {
      stdout.write('Masukkan nomor urut katalog : ');
      var id = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;

      if (!produk.containsKey(id)) {
        print('Tidak ada katalog dengan nomor urut $id!');
      } else {
        produk.remove(id);
      }
    }
  }

  double _inputHarga() {
    while (true) {
      stdout.write('Masukkan harga katalog : ');
      var inputHarga = stdin.readLineSync() ?? '';
      try {
        var harga = double.parse(inputHarga);
        if (harga > 0) return harga;
        print('Harga harus lebih besar dari 0!');
      } catch (e) {
        print('Masukkan harga dengan format angka yang benar!');
      }
    }
  }
}
