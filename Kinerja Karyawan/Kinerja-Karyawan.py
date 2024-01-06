karyawan = int (input ())
gaji = [0] * 100

for i in range (karyawan):
    waktu, tugas = map (int, input ().split ())
    bonus = 500_000 if waktu >= 40 and tugas >= 20 else 0
    gaji [i] = bonus + (50000 * waktu)

for i in range (karyawan):
    print (gaji [i])