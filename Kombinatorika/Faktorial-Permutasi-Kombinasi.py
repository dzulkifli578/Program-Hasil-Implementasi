def main ():
    while True:
        print ("========== KOMBINATORIKA ==========")
        print ("1. Faktorial")
        print ("2. Permutasi")
        print ("3. Kombinasi")
        print ("4. Keluar")
        print ("===================================")
        pilihan = int (input ("Pilih salah satu: "))
        if pilihan == 1:
            faktorial ()
        elif pilihan == 2:
            permutasi ()
        elif pilihan == 3:
            kombinasi ()
        elif pilihan == 4:
            print ("Terima kasih telah menggunakan program ini!")
            break
        else:
            print ("Input error")

def faktorial ():
    angka = int (input ("Masukkan bilangan faktorial: "))
    hasil = 1
    for i in range (angka, 0 ,-1):
        hasil *= i
    print (f"{angka}! = {hasil}")

def permutasi ():
    n = int (input ("Masukkan bilangan keseluruhan: "))
    k = int (input ("Masukkan bilangan asli (tidak termasuk duplikat): "))
    p = 1
    for i in range (n, n - k, -1):
        p *= i
    print (f"Hasil: {p}")

def kombinasi ():
    n = int (input ("Masukkan bilangan keseluruhan: "))
    r = int (input ("Masukkan bilangan asli (tidak termasuk duplikat): "))
    n_faktorial = nr_faktorial = r_faktorial = 1
    for i in range (n, 0, -1):
        n_faktorial *= i
    for i in range (n - r, 0, -1):
        nr_faktorial *= i
    for i in range (r, 0, -1):
        r_faktorial *= i
    print (f"Hasil: {n_faktorial / (r_faktorial * nr_faktorial)}")

if __name__ == "__main__":
    main ()