import 'dart:io';
import 'Catatan.dart';

class TambahCatatan {
  TambahCatatan() {
    _input();
  }

  void _input() {
    String? judul, isi;
    do {
      stdout.write('Masukkan judul catatan : ');
      judul = stdin.readLineSync()?.trim();
      stdout.write('Masukkan isi catatan : ');
      isi = stdin.readLineSync()?.trim();
      if (judul == null || isi == null || judul.isEmpty || isi.isEmpty) {
        print('Judul dan isi catatan harus diisi!');
      }
    } while (judul == null || isi == null || judul.isEmpty || isi.isEmpty);

    _proses(judul, isi);
  }

  void _proses(String judul, String isi) {
    Catatan.catatan[++Catatan.id] = {
      'Judul': judul,
      'Isi': isi,
      'Waktu': DateTime.now(),
      'Prioritas': 0,
      'Status': 'Belum dikerjakan'
    };
    print('Catatan berhasil ditambahkan dengan ID ${Catatan.id}');
  }
}