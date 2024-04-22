import 'dart:io';

class MencariBilanganPrima {
  late int x;
  List<int> faktor = [];

  MencariBilanganPrima() {
    _input();
  }

  void _input() {
    print('Masukkan bilangan :');

    do {
      x = int.tryParse(stdin.readLineSync() ?? '0') ?? -1;
      if (x == 0) print('Masukkan bilangan bulat positif!');
      else
      {
        faktor.add(x);
      }
    } while (x != -1);

    _output();
  }

  void _output() {
    faktor.sort();
    print('Bilangan prima terkecil : ${faktor[0]}');

    if (faktor.length % 2 == 0) {
      int rataRata =
          (faktor[faktor.length ~/ 2] + faktor[faktor.length ~/ 2 - 1]) ~/ 2;
      print('Bilangan prima rata-rata : $rataRata');
    } else {
      print('Bilangan prima rata-rata : ${faktor[faktor.length ~/ 2]}');
    }

    print('Bilangan prima terbesar : ${faktor[faktor.length - 1]}');
  }

  void run() {
    _input();
  }
}
