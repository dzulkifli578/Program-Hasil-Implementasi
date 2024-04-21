import 'dart:io';

import 'BookBorrow.dart';
import 'BookManagement.dart';

class BookReturn {
  BookReturn() {
    stdout.write('Masukkan nama peminjam : ');
    final borrower = stdin.readLineSync() ?? '';

    for (var entry in BookBorrow.borrower.entries) {
      var borrowerName = entry.value['Nama'];
      if (borrowerName != borrower) {
        print('Nama peminjam tidak tersedia, silahkan coba lagi');
        return;
      }
    }

    stdout.write('Masukkan nama buku yang dipinjam : ');
    final book = stdin.readLineSync() ?? '';

    for (var entry in BookManagement.book.entries) {
      if (entry.value['Nama'] == book)
        entry.value['Status'] = 'Tersedia';
      else {
        print('Nama buku tidak tersedia, silahkan coba lagi');
        return;
      }
    }
  }
}
