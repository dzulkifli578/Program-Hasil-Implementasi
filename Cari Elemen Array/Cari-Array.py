batas = 0
cari = 0

while True:
    try:
        batas = int (input ("Masukkan batas ukuran array: "))
        if batas <= 0:
            print ("Ukuran array harus lebih dari 0!")
        else:
            break
    except ValueError:
        print ("Ukuran array harus berupa angka!")

input_elemen = input (("Masukkan nilai tiap elemen array: "))
array = list (map (int, input_elemen.split ()))

cari = int (input ("Masukkan elemen yang dicari: "))

konfirmasi = False
for i in range (batas):
    if cari == array [i]:
        print(f"Elemen {cari} berada di index {i}")
        konfirmasi = True
if not konfirmasi:
        print(f"Elemen {cari} tidak ada pada array")