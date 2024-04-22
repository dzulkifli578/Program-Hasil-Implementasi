import 'dart:io';
import 'dart:math';

class FaktorisasiBilanganPrima {
  late int x;
  List<int> faktor = [];

  FaktorisasiBilanganPrima() {
    _input();
  }

  void _input() {
    stdout.write('Masukkan bilangan : ');

    do {
      x = int.tryParse(stdin.readLineSync() ?? '0') ?? 0;
      if (x <= 0) print('Masukkan bilangan bulat positif!');
    } while (x <= 0);

    _faktorisasi(x);
  }

  void _faktorisasi(int x) {
    int temp = x;

    // Memproses faktor 2
    while (temp % 2 == 0) {
      faktor.add(2);
      temp ~/= 2;
    }

    // Memproses faktor-faktor ganjil
    for (int i = 3; i <= sqrt(temp); i += 2) {
      while (temp % i == 0) {
        faktor.add(i);
        temp ~/= i;
      }
    }

    // Jika temp masih lebih besar dari 2, tambahkan ke faktor
    if (temp > 2) {
      faktor.add(temp);
    }

    _output();
  }

  void _output() {
    print('Faktorisasi bilangan prima dari $x : ${faktor.join(', ')}');
  }

  void run() {
    _input();
  }
}