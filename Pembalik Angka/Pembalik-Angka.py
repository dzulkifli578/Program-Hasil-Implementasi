batas = int (input ("Masukkan batas input angka: "))
array = []

print ("Masukkan daftar angka:")
for i in range (batas):
    array.append (input ())

print ("Daftar angka yang dibalik:")
for i in range (batas):
    print (array [i][::-1])