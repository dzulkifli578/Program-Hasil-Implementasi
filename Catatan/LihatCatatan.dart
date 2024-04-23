import 'Catatan.dart';

class LihatCatatan {
  LihatCatatan() {
    _lihat();
  }

  void _lihat() {
    if (Catatan.catatan.isEmpty) {
      print('Tidak ada catatan yang tersedia');
      return;
    }
    for (var entry in Catatan.catatan.entries) {
      _printCatatan(entry.value);
    }
  }

  void _printCatatan(Map<String, dynamic> catatan) {
    print('====================');
    print('Judul     : ${catatan['Judul']}');
    print('Isi       : ${catatan['Isi']}');
    print('Waktu     : ${catatan['Waktu']}');
    print('Prioritas : ${catatan['Prioritas']}');
    print('Status    : ${catatan['Status']}');
  }
}
