import 'dart:io';
import 'Catatan.dart';

class CariCatatan {
  CariCatatan() {
    _input();
  }

  void _input() {
    String? input;
    do {
      stdout.write('Masukkan judul/isi catatan: ');
      input = stdin.readLineSync()?.trim();
      if (input == null || input.isEmpty) {
        print('Judul atau isi catatan tidak boleh kosong!');
      }
    } while (input == null || input.isEmpty);
    _cari(input);
  }

  void _cari(String input) {
    bool found = false;
    for (var entry in Catatan.catatan.entries) {
      if (input == entry.value['Judul'] || input == entry.value['Isi']) {
        _printCatatan(entry.value);
        found = true;
      }
    }
    if (!found) {
      print('Catatan tidak ditemukan');
    }
  }

  void _printCatatan(Map<String, dynamic> catatan) {
    print('====================');
    print('Judul     : ${catatan['Judul']}');
    print('Isi       : ${catatan['Isi']}');
    print('Waktu     : ${catatan['Waktu']}');
    print('Prioritas : ${catatan['Prioritas']}');
    print('Status    : ${catatan['Status']}');
  }
}