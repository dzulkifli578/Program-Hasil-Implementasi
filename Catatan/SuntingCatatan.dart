import 'dart:io';
import 'Catatan.dart';

class SuntingCatatan {
  SuntingCatatan() {
    _input();
  }

  void _input() {
    int? id;
    String? judul, isi;
    int? prioritas, status;

    // Memeriksa jika catatan kosong
    if (Catatan.catatan.isEmpty) {
      print('Catatan kosong. Tidak ada yang bisa disunting.');
      return;
    }

    do {
      print('Masukkan ID catatan : ');
      id = int.tryParse(stdin.readLineSync() ?? '0');

      // Memeriksa apakah ID catatan ada dalam daftar
      if (!Catatan.catatan.containsKey(id)) {
        print('Catatan dengan ID $id tidak ditemukan.');
        continue; // Mengulangi loop jika ID tidak ditemukan
      }

      print('Masukkan judul catatan baru (kosongkan untuk melewati) : ');
      judul = stdin.readLineSync();

      print('Masukkan isi catatan baru (kosongkan untuk melewati) : ');
      isi = stdin.readLineSync();

      print('Masukkan prioritas baru : ');
      prioritas = int.tryParse(stdin.readLineSync() ?? '0');

      print('Masukkan status baru (0 untuk belum | 1 untuk sudah): ');
      status = int.tryParse(stdin.readLineSync() ?? '0');

    } while (!_cek(id, prioritas, status));

    _proses(id!, judul, isi, prioritas!, status!);
  }

  void _proses(int id, String? judul, String? isi, int prioritas, int status) {
    Map<String, dynamic>? catatan = Catatan.catatan[id];

    if (catatan == null || judul == null || isi == null) {
      print('Catatan tidak ditemukan atau input tidak valid.');
      return;
    }

    String judulSebelumnya = catatan['Judul'];
    String isiSebelumnya = catatan['Isi'];

    String statusString = status == 0 ? 'Belum dikerjakan' : 'Selesai';

    Catatan.catatan[id] = {
      'Judul': judulSebelumnya,
      'Isi': isiSebelumnya,
      'Waktu': DateTime.now(),
      'Prioritas': prioritas,
      'Status': statusString,
    };
  }
}

bool _cek(int? id, int? prioritas, int? status) {
  if (id == null) {
    print('ID harus berupa angka dan tidak boleh kosong!');
    return false;
  }

  if (prioritas == null) {
    print('Prioritas harus berupa angka!');
    return false;
  }

  if (status == null || status > 1) {
    print('Masukkan hanya 0 atau 1, silahkan coba lagi!');
    return false;
  }

  return true;
}
