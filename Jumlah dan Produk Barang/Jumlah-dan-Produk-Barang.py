batas = int (input ())

jumlah = 0
produk = 1

for i in range (1, batas):
    if i % 3 == 0 or i % 5 == 0:
        jumlah += i
        produk *= i

print (jumlah)
print (produk)