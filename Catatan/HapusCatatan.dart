import 'dart:io';
import 'Catatan.dart';

class HapusCatatan {
  HapusCatatan() {
    _input();
  }

  void _input() {
    int? id;
    do {
      stdout.write('Masukkan ID catatan: ');
      id = int.tryParse(stdin.readLineSync()?.trim() ?? '');
      if (id == null) {
        print('ID harus berupa angka!');
      }
    } while (id == null);
    _hapus(id);
  }

  void _hapus(int id) {
    if (Catatan.catatan.containsKey(id)) {
      Catatan.catatan.remove(id);
      print('Catatan dengan ID $id berhasil dihapus');
    } else {
      print('Catatan dengan ID $id tidak ditemukan');
    }
  }
}