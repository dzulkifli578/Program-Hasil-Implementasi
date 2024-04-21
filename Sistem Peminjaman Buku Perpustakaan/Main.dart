import 'dart:io';
import 'BookManagement.dart';
import 'BookBorrow.dart';
import 'BookReturn.dart';
import 'BookSearch.dart';

void main() {
  final bookManagement = BookManagement();
  final bookBorrowing = BookBorrow();
  String input;

  do {
    print('==============================');
    print('Sistem Peminjaman Buku Perpustakaan');
    print('==============================');
    print('1. Manajemen Buku');
    print('2. Pencarian Buku');
    print('3. Peminjaman Buku');
    print('4. Pengembalian Buku');
    print('0. Keluar');
    print('==============================');
    stdout.write('Pilih salah satu: ');
    input = stdin.readLineSync() ?? '';
    input.toLowerCase();
    switch (int.tryParse(input)) {
      case 1:
        bookManagement.display();
        break;
      case 2:
        BookSearch();
        break;
      case 3:
        bookBorrowing.display();
        break;
      case 4:
        BookReturn();
        break;
      case 0:
        print('Terima kasih!');
        return;
      default:
        print('Masukkan input 0-4, silahkan coba lagi');
        break;
    }
  } while (input != 0);
}
