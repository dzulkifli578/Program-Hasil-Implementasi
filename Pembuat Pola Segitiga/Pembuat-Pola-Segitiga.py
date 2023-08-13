def segitiga_siku_siku_pola1 ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    
    for i in range (1, tinggi + 1):
        for j in range (i):
            print ("*", end = "")
        print ()

def segitiga_siku_siku_pola1_terbalik ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))

    for i in range (tinggi, 0, -1):
        for j in range (i):
            print ("*", end = "")
        print ()

def segitiga_siku_siku_pola2 ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    
    for i in range (1, tinggi + 1):
        for j in range (tinggi - i):
            print (" ", end = "")
        for k in range (i):
            print ("*", end = "")
        print ()

def segitiga_siku_siku_pola2_terbalik ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    
    for i in range (tinggi + 1):
        for j in range (i):
            print (" ", end = "")
        for k in range (tinggi - i):
            print ("*", end="")
        print ()

def segitiga_sama_kaki ():
    tinggi = int (input ("Masukkan tinggi segitiga: "))
    
    for i in range (1, tinggi + 1):
        for j in range (tinggi - i):
            print (" ", end = "")
        for k in range (2 * i - 1):
            print ("*", end = "")
        print ()

print ("========== Pembuat Pola Segitiga ==========")
print ("1. Segitiga siku-siku pola 1")
print ("2. Segitiga siku-siku pola 1 (terbalik)")
print ("3. Segitiga siku-siku pola 2")
print ("4. Segitiga siku-siku pola 2 (terbalik)")
print ("5. Segitiga sama kaki")
pilihan = int (input ("Pilih salah satu: "))

if pilihan == 1:
    segitiga_siku_siku_pola1 ()
elif pilihan == 2:
    segitiga_siku_siku_pola1_terbalik ()
elif pilihan == 3:
    segitiga_siku_siku_pola2 ()
elif pilihan == 4:
    segitiga_siku_siku_pola2_terbalik ()
elif pilihan == 5:
    segitiga_sama_kaki ()
else:
    print ("Input error")
