digit = input ("Masukkan nomor kartu:\n")
digit_angka = [0] * 16
hasil = 0

for i in range (16):
    digit_angka [i] = int (digit [i])

    if i == 0 or i % 2 == 0:
        digit_angka [i] *= 2
        if digit_angka [i] > 9:
            digit_angka [i] -= 9

    hasil += digit_angka [i]

print ("Nomor kartu valid" if hasil % 10 == 0 else "Nomor kartu tidak valid")