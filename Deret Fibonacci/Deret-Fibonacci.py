ukuran = int (input ("Masukkan batas deret Fibonacci: "))

fibonacci = [0, 1]

for i in range (2, ukuran):
    fibonacci.append (fibonacci [i - 2] + fibonacci [i - 1])

print (f"Deret Fibonacci: {ukuran}")
print (" ".join (map (str, fibonacci)))