import 'dart:io';

import 'CariCatatan.dart';
import 'HapusCatatan.dart';
import 'LihatCatatan.dart';
import 'SuntingCatatan.dart';
import 'TambahCatatan.dart';

void main() {
  int? input;

  do {
    print('====================');
    print('Aplikasi Catatan');
    print('====================');
    print('1. Tambah Catatan');
    print('2. Sunting Catatan');
    print('3. Hapus Catatan');
    print('4. Lihat Catatan');
    print('5. Cari Catatan');
    print('0. Keluar');
    print('====================');
    stdout.write('Pilih salah satu : ');

    try {
      input = int.parse(stdin.readLineSync() ?? '');
    } catch (e) {
      print('Masukkan hanya format angka 0 - 5, silahkan coba lagi');
      continue;
    }

    if (input < 0 || input > 5) {
      print('Masukkan hanya format angka 0 - 5, silahkan coba lagi');
      continue;
    }

    switch (input) {
      case 1:
        TambahCatatan();
        break;
      case 2:
        SuntingCatatan();
        break;
      case 3:
        HapusCatatan();
        break;
      case 4:
        LihatCatatan();
        break;
      case 5:
        CariCatatan();
        break;
      case 0:
        print('Terima kasih!');
        break;
      default:
        print('Masukkan hanya format angka 0 - 5, silahkan coba lagi');
    }
  } while (input != 0);
}
