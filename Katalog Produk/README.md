# Design Pattern: Aplikasi Pembuat Katalog Produk

## Deskripsi
Aplikasi ini bertujuan untuk membuat, mengedit, dan menghapus katalog produk. Pengguna dapat memilih opsi dari menu yang tersedia untuk melakukan tindakan yang diinginkan.

## Struktur Program

1. **Mengimpor dart IO (untuk input dan output)**: Menggunakan library `dart:io` untuk mengambil input dari pengguna dan menampilkan output.

2. **Fungsi Main**: Membuat fungsi utama program yang mengatur alur eksekusi dan interaksi dengan pengguna.

3. **Class CatalogProduct**: Membuat kelas untuk mengelola katalog produk.

   - **Properti**:
     - `id`: Menyimpan nomor identifikasi untuk setiap produk.
     - `nama`: Menyimpan nama produk.
     - `deskripsi`: Menyimpan deskripsi produk.
     - `harga`: Menyimpan harga produk.
     - `produk`: Sebuah map yang menyimpan produk dengan ID sebagai kunci dan detail produk sebagai nilai.

   - **Method**:
     - `add()`: Menambahkan produk baru ke dalam katalog.
     - `view()`: Menampilkan katalog produk kepada pengguna.
     - `edit()`: Mengedit produk yang ada dalam katalog.
     - `delete()`: Menghapus produk dari katalog.
     - `_inputHarga()`: Memvalidasi dan mengambil input harga dari pengguna.

4. **Fungsi-fungsi dalam Fungsi Main**:
   - Menampilkan tampilan awal aplikasi dan menu pilihan.
   - Memproses input pengguna dan menjalankan operasi yang sesuai.
