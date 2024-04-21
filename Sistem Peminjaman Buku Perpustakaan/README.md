# Design Pattern: Sistem Peminjaman Buku Perpustakaan

## Deskripsi
Aplikasi ini bertujuan untuk mengelola perpustakaan, termasuk manajemen buku, pencarian buku, peminjaman, dan pengembalian.

## Struktur Program

1. **Main.dart**: 
   - Mengatur alur eksekusi dan interaksi dengan pengguna melalui menu pilihan.
   - Memuat fungsi utama program yang mengarahkan pengguna ke fitur-fitur yang tersedia.

2. **BookManagement.dart**: 
   - Kelas untuk mengelola katalog buku.
   - Properti:
     - `book`: Sebuah map yang menyimpan buku dengan ID sebagai kunci dan detail buku sebagai nilai.
   - Metode:
     - `display()`: Menampilkan menu manajemen buku kepada pengguna.
     - `_add()`: Menambahkan buku baru ke dalam katalog.
     - `_view()`: Menampilkan daftar buku dalam katalog.
     - `_edit()`: Mengedit detail buku dalam katalog.
     - `_delete()`: Menghapus buku dari katalog.

3. **BookBorrow.dart**: 
   - Kelas untuk mengelola peminjaman buku.
   - Properti:
     - `borrower`: Sebuah map yang menyimpan peminjam dengan ID sebagai kunci dan detail peminjam sebagai nilai.
   - Metode:
     - `display()`: Menampilkan menu peminjaman buku kepada pengguna.
     - `_add()`: Menambahkan peminjam baru ke dalam daftar.
     - `_view()`: Menampilkan daftar peminjam.
     - `_edit()`: Mengedit detail peminjam.
     - `_delete()`: Menghapus peminjam dari daftar.

4. **BookReturn.dart**: 
   - Kelas untuk mengelola pengembalian buku.
   - Metode:
     - `BookReturn()`: Konstruktor untuk mengembalikan buku yang dipinjam.
     - `_findBookName()`: Mencari nama buku yang ingin dikembalikan.
     - Mengubah status buku yang dikembalikan menjadi "Tersedia".

5. **BookSearch.dart**: 
   - Kelas untuk mencari buku dalam katalog.
   - Metode:
     - `BookSearch()`: Konstruktor untuk mencari buku berdasarkan nama, pengarang, atau kategori.
     - Menampilkan hasil pencarian kepada pengguna.

## Interaksi Program

Pengguna dapat memilih opsi dari menu utama untuk mengakses fitur-fitur aplikasi, termasuk manajemen buku, pencarian buku, peminjaman, dan pengembalian.