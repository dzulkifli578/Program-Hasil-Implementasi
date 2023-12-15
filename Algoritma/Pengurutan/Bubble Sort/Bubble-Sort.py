import random

def main ():
    pilihan = 0
    while pilihan != 3:
        print ("========== BUBBLE SORT ==========")
        print ("1. Isi array secara manual")
        print ("2. Isi array secara otomatis (acak)")
        print ("3. Keluar")
        pilihan = int (input ("Pilih salah satu: "))

        if pilihan == 1:
            ukuran = int (input ("Masukkan batas ukuran array: "))
            array = [int (i) for i in input("Masukkan nilai tiap elemen array:\n").split()]
            urut_dan_tampilkan (ukuran, array)
        elif pilihan == 2:
            ukuran = int (input ("Masukkan batas ukuran array: "))
            batas = int (input ("Masukkan batas angka acak: "))
            array = [random.randint (1, batas) for i in range (ukuran)]
            print ("Elemen array:\n")
            print (*array)
            urut_dan_tampilkan (ukuran, array)
        elif pilihan == 3:
            print ("Terima kasih telah menggunakan program ini!")
        else:
            print ("Input error")

def urut_dan_tampilkan (ukuran, array):
    for i in range (ukuran - 1):
        for j in range (ukuran - i - 1):
            if array [j] > array [j + 1]:
                array [j], array [j + 1] = array [j + 1], array [j]

    print ("Hasil pengurutan elemen array:")
    print (*array)

if __name__ == "__main__":
    main ()