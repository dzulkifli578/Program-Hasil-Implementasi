def main ():
    # inisialisasi variabel:
    # - batas  = untuk membatasi perulangan yang berhubungan dengan array
    # - angka  = array untuk menampung angka yang ditentukan
    angka = []
    batas = 5

    # memasukkan angka ke dalam array untuk diproses
    for i in range (batas):
        angka.append (int (input ("Masukkan angka: ")))

    # memanggil fungsi urut_angka untuk menentukan nilai minimal dan nilai maksimal
    urut_angka (angka)

    # memanggil fungsi rata_rata untuk menghitung rata-rata
    rata_rata (angka)

def urut_angka (angka):
    # mengurutkan angka-angka dalam list menggunakan algoritma bubble sort
    n = len (angka)
    for i in range (n):
        for j in range (0, n - i - 1):
            if angka [j] > angka [j+1]:
                angka [j], angka [j+1] = angka [j+1], angka [j]

    # menampilkan nilai minimal dengan mengambil elemen pertama dalam list
    print ("Nilai minimal:", angka [0])

    # Menampilkan nilai maksimal dengan mengambil elemen terakhir dalam list
    print ("Nilai maksimal:", angka [-1])

def rata_rata(angka):
    # Menghitung nilai rata-rata dari list angka
    #
    # rumus rata-rata:
    # (total semua nilai / jumlah nilai yang dimasukkan)
    rata = sum (angka) / len (angka)
    print (f"Nilai rata-rata: {rata:.2f}")

if __name__ == "__main__":
    main()