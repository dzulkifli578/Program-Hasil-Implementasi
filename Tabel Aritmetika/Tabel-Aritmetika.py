def tabel_penjumlahan():
    batas = 0
    bilangan = 0

    print ("Masukkan bilangan: ", end="")
    bilangan = float (input ())
    print ("Masukkan batas hitung: ", end="")
    batas = int (input ())

    for i in range(1, batas + 1):
        print(f"{bilangan:.2f} + {i} = {bilangan + i:.2f}")

def tabel_pengurangan():
    batas = 0
    bilangan = 0

    print("Masukkan bilangan: ", end="")
    bilangan = float(input())
    print("Masukkan batas hitung: ", end="")
    batas = int(input())

    for i in range(1, batas + 1):
        print(f"{bilangan:.2f} - {i} = {bilangan - i:.2f}")

def tabel_perkalian():
    batas = 0
    bilangan = 0

    print("Masukkan bilangan: ", end="")
    bilangan = float(input())
    print("Masukkan batas hitung: ", end="")
    batas = int(input())

    for i in range(1, batas + 1):
        print(f"{bilangan:.2f} x {i} = {bilangan * i:.2f}")

def tabel_pembagian():
    batas = 0
    bilangan = 0

    print("Masukkan bilangan: ", end="")
    bilangan = float(input())
    print("Masukkan batas hitung: ", end="")
    batas = int(input())

    for i in range(1, batas + 1):
        print(f"{bilangan:.2f} : {i} = {bilangan / i:.2f}")

def main():
    pilihan = 0

    while True:
        print("========== Pembuat Tabel Aritmetika ==========")
        print("1. Penjumlahan")
        print("2. Pengurangan")
        print("3. Perkalian")
        print("4. Pembagian")
        print("5. Keluar")
        pilihan = int(input("Pilih salah satu: "))

        if pilihan == 1:
            tabel_penjumlahan()
        elif pilihan == 2:
            tabel_pengurangan()
        elif pilihan == 3:
            tabel_perkalian()
        elif pilihan == 4:
            tabel_pembagian()
        elif pilihan == 5:
            print("Terima kasih telah menggunakan program ini")
            break
        else:
            print("Input error")

if __name__ == "__main__":
    main()
