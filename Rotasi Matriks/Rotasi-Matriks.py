kolom = int (input ("Masukkan panjang kolom matriks: "))
baris = int (input ("Masukkan panjang baris matriks: "))

array = [[0] * baris for i in range (kolom)]

print ("Masukkan elemen matriks:")
for i in range (kolom):
    input_kolom = input ().split ()
    for j in range (baris):
        array [i][j] = int (input_kolom [j])

print ("Rotasi matriks:")
for j in range (baris):
    for i in range (kolom - 1, - 1, -1):
        print (array [i][j], end = " ")
    print ()