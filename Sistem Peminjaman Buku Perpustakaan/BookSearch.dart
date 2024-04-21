import 'dart:io';
import 'BookManagement.dart';

class BookSearch {
  BookSearch() {
    stdout.write('Masukkan nama buku yang ingin dicari : ');
    final search = stdin.readLineSync() ?? '';

    print('Hasil Pencarian $search :');
    for (var entry in BookManagement.book.entries) {
      if (entry.value['Nama'] == search ||
          entry.value['Pengarang'] == search ||
          entry.value['Kategori'] == search) {
        print('Nama buku : ${entry.value['Nama']}');
        print('Pengarang : ${entry.value['Pengarang']}');
        print('Kategori  : ${entry.value['Kategori']}');
        print('Status    : ${entry.value['Status']}');
      }
    }
  }
}
