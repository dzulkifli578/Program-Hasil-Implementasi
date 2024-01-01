desimal = int (input ("Desimal   : "))
biner = ""

while desimal > 0:
    sisa = desimal % 2
    biner = str (sisa) + biner
    desimal //= 2

print ("Biner     : " + biner)