batas = int (input ())

for i in range (batas):
    angka = int (input ())
    prima = 0

    if angka == 1:
        print ("Bukan bilangan prima")
        continue

    for j in range (2, int (angka ** 0.5) + 1):
        if angka % j == 0:
            prima += 1
            break

    print ("Bilangan prima" if prima == 0 else "Bukan bilangan prima")
