batas = int (input ("Masukkan batas perulangan bilangan prima: "))
print (f"Bilangan prima dari 2 hingga {batas}:")

for i in range (2, batas + 1):
    prima = True

    for j in range (2, int (i ** 0.5) + 1):
        if i % j == 0:
            prima = False
            break
    if prima:
        print (i, end = " ")
print ()