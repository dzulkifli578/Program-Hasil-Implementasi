import 'dart:io';
import 'dart:math';

class GeneratorBilanganPrima {
  late int x;

  GeneratorBilanganPrima() {
    _input();
  }

  void _input() {
    stdout.write('Masukkan batas bilangan prima : ');

    do {
      x = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;
      if (x <= 0) print('Masukkan bilangan bulat positif!');
    } while (x <= 0);

    _loop(x);
  }

  void _loop(int x) {
    for (var i = 2; i <= x; i++) {
      if (_isPrime(i)) print(i);
    }
  }

  bool _isPrime(int x) {
    for (var i = 2; i <= sqrt(x); i++) {
      if (x % i == 0) {
        return false;
      }
    }
    return true;
  }

  void run() {
    _input();
  }
}