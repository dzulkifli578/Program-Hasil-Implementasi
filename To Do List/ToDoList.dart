import 'dart:io';

void main() {
  late int input;
  ToDoList toDoList = ToDoList();

  do {
    print('==============================');
    print('To-Do List');
    print('==============================');
    toDoList.View();
    print('==============================');
    print('1. Tambah');
    print('2. Edit');
    print('3. Hapus');
    print('4. Keluar');
    stdout.write('Masukkan salah satu: ');
    input = int.parse(stdin.readLineSync() ?? '0');

    switch (input) {
      case 1:
        toDoList.Add();
        break;
      case 2:
        toDoList.Edit();
        break;
      case 3:
        toDoList.Delete();
        break;
      case 4:
        print('Terima kasih!');
        break;
      default:
        print('Input error, silahkan coba lagi');
        break;
    }
  } while (input != 4);
}

class ToDoList {
  List<String> list = [];

  ToDoList();

  void Add() {
    while (true) {
      stdout.write('Masukkan list (STOP jika ingin berhenti): ');
      String isi = stdin.readLineSync() ?? '';
      if (isi.toUpperCase() == 'STOP')
        break;
      else
        list.add(isi);
    }
  }

  void View() {
    if (list.isEmpty)
      print('Kamu belum memiliki list!');
    else {
      for (int i = 0; i < list.length; i++) {
        print('${i + 1}. ${list[i]}');
      }
    }
  }

  void Edit() {
    stdout.write('Masukkan nomor urut list yang akan diedit : ');
    int ID = int.parse(stdin.readLineSync() ?? '0');
    stdout.write('Masukkan list baru: ');
    String isi = stdin.readLineSync() ?? '';
    list[ID - 1] = isi;
  }

  void Delete() {
    stdout.write('Masukkan nomor urut list yang akan dihapus : ');
    int ID = int.parse(stdin.readLineSync() ?? '0');
    list.removeAt(ID - 1);
  }
}
