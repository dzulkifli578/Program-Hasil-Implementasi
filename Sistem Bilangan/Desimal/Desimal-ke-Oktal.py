desimal = int (input ("Desimal       : "))
oktal = ""

while desimal > 0:
    sisa = desimal % 8
    oktal = str (sisa) + oktal
    desimal //= 8

print ("Oktal         : " + oktal)