import 'dart:io';
import 'dart:collection';

class BookManagement {
  static HashMap<int, Map<String, String>> book = HashMap<int, Map<String, String>>();
  int _id = 0;

  void display() {
    int input;
    do {
      print('==============================');
      print('Manajemen Buku');
      print('==============================');
      print('1. Tambah Buku');
      print('2. Lihat Daftar Buku');
      print('3. Edit Buku');
      print('4. Hapus Buku');
      print('5. Kembali');
      print('==============================');
      stdout.write('Pilih salah satu: ');
      input = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;

      switch (input) {
        case 1:
          _add();
          break;
        case 2:
          _view();
          break;
        case 3:
          _edit();
          break;
        case 4:
          _delete();
          break;
        case 5:
          return;
        default:
          print('Masukkan input 1-5, silahkan coba lagi');
          break;
      }
    } while (input != 5);
  }

  void _add() {
    stdout.write('Masukkan nama buku : ');
    final name = stdin.readLineSync() ?? '';
    stdout.write('Masukkan pengarang buku : ');
    final author = stdin.readLineSync() ?? '';
    stdout.write('Masukkan kategori buku : ');
    final category = stdin.readLineSync() ?? '';

    book[++_id] = {
      'Nama': name,
      'Pengarang': author,
      'Kategori': category,
      'Status': 'Tersedia'
    };
  }

  void _view() {
    if (book.isEmpty) {
      print('Kamu belum memiliki daftar buku!');
    } else {
      for (var entry in book.entries) {
        int i = 0;
        print('${++i}. Nama buku : ${entry.value['Nama']}');
        print('   Pengarang : ${entry.value['Pengarang']}');
        print('   Kategori  : ${entry.value['Kategori']}');
        print('   Status    : ${entry.value['Status']}');
      }
    }
  }

  void _edit() {
    if (book.isEmpty) {
      print('Kamu belum memiliki daftar buku!');
      return;
    }
    stdout.write('Masukkan nomor urut buku : ');
    final id = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;
    if (!book.containsKey(id)) {
      print('Buku dengan nomor urut $id tidak ada, silahkan coba lagi');
      return;
    }
    stdout.write('Masukkan nama buku baru : ');
    final name = stdin.readLineSync() ?? '';
    stdout.write('Masukkan pengarang buku baru : ');
    final author = stdin.readLineSync() ?? '';
    stdout.write('Masukkan kategori buku baru : ');
    final category = stdin.readLineSync() ?? '';
    book[id] = {
      'Nama': name,
      'Pengarang': author,
      'Kategori': category
    };
  }

  void _delete() {
    if (book.isEmpty) {
      print('Kamu belum memiliki daftar buku!');
      return;
    }
    stdout.write('Masukkan nomor urut buku yang akan dihapus : ');
    final id = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;
    if (!book.containsKey(id)) {
      print('Buku dengan nomor urut $id tidak ada, silahkan coba lagi');
      return;
    }
    book.remove(id);
  }
}
