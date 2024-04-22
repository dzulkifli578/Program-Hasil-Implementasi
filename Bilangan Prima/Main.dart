// Main.dart
import 'dart:io';
import 'PengecekanBilanganPrima.dart';
import 'GeneratorBilanganPrima.dart';
import 'FaktorisasiBilanganPrima.dart';
import 'MencariBilanganPrima.dart';

void main() {
  late int? input;

  do {
    print('==============================');
    print('Aplikasi Bilangan Prima');
    print('==============================');
    print('1. Cek Bilangan Prima');
    print('2. Generator Bilangan Prima');
    print('3. Faktorisasi Bilangan Prima');
    print('4. Mencari Bilangan Prima Terkecil, Terbesar, Rata-rata');
    print('0. Keluar');
    print('==============================');
    stdout.write('Pilih salah satu : ');
    input = int.tryParse(stdin.readLineSync() ?? '0');

    if (input == null)
      print('Masukkan hanya format angka!');
    else {
      switch (input) {
        case 1:
          PengecekanBilanganPrima();
          break;
        case 2:
          GeneratorBilanganPrima();
          break;
        case 3:
          FaktorisasiBilanganPrima();
          break;
        case 4:
          MencariBilanganPrima();
          break;
        case 0:
          print('Terima kasih');
          return;
        default:
          print('Masukkan hanya format angka 0 - 4, silahkan coba lagi');
      }
    }
  } while (input != 0);
}
