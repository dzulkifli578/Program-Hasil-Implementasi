import 'dart:io';
import 'dart:math';

class PengecekanBilanganPrima {
  PengecekanBilanganPrima() {
    _input();
  }

  void _input() {
    late int? x;
    stdout.write('Masukkan bilangan yang ingin dicek : ');

    do {
      x = int.tryParse(stdin.readLineSync() ?? '0');
      if (x == null) print('Masukkan hanya format angka!');
    } while (x == null);

    _cek(x);
  }

  void _cek(int x) {
    bool prima = true;

    for (var i = 2; i <= sqrt(x); i++) {
      if (x % i == 0) {
        prima = false;
        break;
      }
    }

    prima
        ? print('$x adalah bilangan prima')
        : print('$x bukan bilangan prima');
  }

  void run() {
    _input();
  }
}