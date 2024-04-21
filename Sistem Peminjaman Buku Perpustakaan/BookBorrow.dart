import 'dart:io';
import 'dart:collection';
import 'BookManagement.dart';

class BookBorrow {
  static final HashMap<int, Map<String, String>> borrower =
      HashMap<int, Map<String, String>>();
  int _id = 0;

  void display() {
    int input;
    do {
      print('==============================');
      print('Peminjaman Buku');
      print('==============================');
      print('1. Tambah peminjam');
      print('2. Lihat Daftar Peminjam');
      print('3. Edit Peminjam');
      print('4. Hapus Peminjam');
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
    print('Masukkan detail peminjam:');
    stdout.write('Nama: ');
    final fullname = stdin.readLineSync() ?? '';
    stdout.write('Alamat: ');
    final address = stdin.readLineSync() ?? '';
    stdout.write('Nomor Telepon: ');
    final phoneNumber = stdin.readLineSync() ?? '';

    final bookName = _findBookName();
    if (bookName != null) {
      borrower[++_id] = {
        'Nama': fullname,
        'Alamat': address,
        'Nomor Telepon': phoneNumber,
        'Buku yang dipinjam': bookName,
      };
    } else {
      print('Nama buku tidak ditemukan, silahkan cari lagi!');
    }
  }

  String? _findBookName() {
    stdout.write('Masukkan nama buku yang ingin dipinjam: ');
    final bookName = stdin.readLineSync() ?? '';

    for (var entry in BookManagement.book.entries) {
      if (entry.value['Nama'] == bookName) {
        entry.value['Status'] = 'Dipinjam';
        return bookName;
      }
    }

    return null;
  }

  void _view() {
    if (borrower.isEmpty) {
      print('Kamu belum memiliki daftar peminjam!');
    } else {
      for (var entry in borrower.entries) {
        int i = 0;
        print('${++i}. Nama peminjam         : ${entry.value['Nama']}');
        print('   Alamat             : ${entry.value['Alamat']}');
        print('   Nomor Telepon      : ${entry.value['Nomor Telepon']}');
        print('   Buku yang dipinjam : ${entry.value['Buku yang dipinjam']}');
      }
    }
  }

  void _edit() {
    if (borrower.isEmpty) {
      print('Kamu belum memiliki daftar peminjam!');
      return;
    }
    stdout.write('Masukkan nomor urut peminjam : ');
    final id = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;
    if (!borrower.containsKey(id)) {
      print('Peminjam dengan nomor urut $id tidak ada, silahkan coba lagi');
      return;
    }

    print('Masukkan detail peminjam baru:');
    stdout.write('Nama: ');
    final fullname = stdin.readLineSync() ?? borrower[id]!['Nama']!;
    stdout.write('Alamat: ');
    final address = stdin.readLineSync() ?? borrower[id]!['Alamat']!;
    stdout.write('Nomor Telepon: ');
    final phoneNumber = stdin.readLineSync() ?? borrower[id]!['Nomor Telepon']!;

    final bookName = _findBookName();
    if (bookName != null) {
      borrower[id] = {
        'Nama': fullname,
        'Alamat': address,
        'Nomor Telepon': phoneNumber,
        'Buku yang dipinjam': bookName,
      };
    } else {
      print('Nama buku tidak ditemukan, silahkan cari lagi!');
    }
  }

  void _delete() {
    if (borrower.isEmpty) {
      print('Kamu belum memiliki daftar peminjam!');
      return;
    }
    stdout.write('Masukkan nomor urut peminjam yang akan dihapus : ');
    final id = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;
    if (!borrower.containsKey(id)) {
      print('Peminjam dengan nomor urut $id tidak ada, silahkan coba lagi');
      return;
    }
    borrower.remove(id);
  }
}
