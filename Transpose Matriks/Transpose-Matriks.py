baris = int (input ("Masukkan baris matriks: "))
kolom = int (input ("Masukkan kolom matriks: "))

matriks = [[0] * kolom for i in range (baris)]

print ("Masukkan elemen matriks:")
for i in range (baris):
    input_baris = input ().split ()
    for j in range (kolom):
        matriks [i][j] = int (input_baris [j])

print ("Transpose matriks:")
for j in range (kolom):
    for i in range (baris):
        print (matriks [i][j], end = " ")
    print ()