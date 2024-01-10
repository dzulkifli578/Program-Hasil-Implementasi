stasiun = int (input ())
nomor_stasiun = []
unik = 0

for i in range (stasiun):
    beda = True
    nomor = int (input ())
    nomor_stasiun.append (nomor)

    for j in range (i):
        if nomor_stasiun [i] == nomor_stasiun [j]:
            beda = False
            break

    if beda:
        unik += 1
        
print ()
print (unik)