desimal = int (input ("Desimal       : "))
heksadesimal = ""

while desimal > 0:
    sisa = desimal % 16
    if sisa >= 10:
        heksadesimal = chr (ord ('A') + sisa - 10) + heksadesimal
    else:
        heksadesimal = str (sisa) + heksadesimal
    desimal //= 16

print("Heksadesimal  : " + heksadesimal)