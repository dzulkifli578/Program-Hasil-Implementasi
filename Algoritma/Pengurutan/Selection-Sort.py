import random

def main ():
    pilihan = 0
    while pilihan != 3:
        print ("========== SELECTION SORT ==========")
        print ("1. Isi array secara manual")
        print ("2. Isi array secara otomatis (acak)")
        print ("3. Keluar")
        pilihan = int (input ("Pilih salah satu: "))

        if pilihan == 1:
            ukuran = int (input ("Masukkan batas ukuran array: "))
            array = [int(x) for x in input("Masukkan nilai tiap elemen array (dipisahkan oleh spasi): ").split()]
            urut_dan_tampilkan (ukuran, array)
        elif pilihan == 2:
            ukuran = int (input ("Masukkan batas ukuran array: "))
            batas = int (input ("Masukkan batas angka acak: "))
            array = [random.randint (1, batas) for i in range (ukuran)]
            print ("Elemen array:", *array)
            urut_dan_tampilkan (ukuran, array)
        elif pilihan == 3:
            print ("Terima kasih telah menggunakan program ini!")
        else:
            print ("Input error")

def urut_dan_tampilkan (ukuran, array):
    for i in range (ukuran - 1):
        minimal = i
        for j in range (i + 1, ukuran):
            if array [minimal] > array [j]:
                minimal = j
        sementara = array [i]
        array [i], array [minimal] = array [minimal], sementara

    print ("Hasil pengurutan elemen array:", *array)

if __name__ == "__main__":
    main ()