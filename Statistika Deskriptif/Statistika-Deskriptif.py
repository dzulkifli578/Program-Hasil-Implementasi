def main ():
    print ("====================== INPUT DATA =====================")
    ukuran = int (input ("Masukkan batas banyaknya data : "))
    array = list (map (int, input ("Masukkan nilai tiap data      : ").split ()))

    data (ukuran, array)
    mean (ukuran, array)
    median (ukuran, array)
    mode (ukuran, array)
    range_data (ukuran, array)

def data (ukuran, array):
    print ("================== IDENTIFIKASI DATA ==================")
    print ("Data yang dimasukkan          : ", end = "")
    for i in range (ukuran):
        print (array [i], end = " ")
    print ()

    urut_array (ukuran, array)
    print ("Data yang terurut             : ", end = "")
    for i in range (ukuran):
        print (array [i], end = " ")
    print ()

    print ("Min                           :", array [0])
    print ("Max                           :", array [ukuran - 1])
    print ("================ STATISTIKA DESKRIPTIF ================")

def urut_array (ukuran, array):
    for i in range (ukuran - 1):
        for j in range (ukuran - i - 1):
            if array [j] > array [j + 1]:
                array [j], array [j + 1] = array [j + 1], array [j]

def mean (ukuran, array):
    jumlah = sum (array)
    print (f"Mean                          = {jumlah / ukuran :.2f}")

def median (ukuran, array):
    if ukuran % 2 == 1:
        print (f"Median                        = {array [(ukuran - 1) // 2] :.2f}")
    else:
        median = (array [(ukuran // 2) - 1] + array [ukuran // 2]) / 2
        print (f"Median                        = {median :.2f}")


def mode (ukuran, array):
    frekuensi = [0] * ukuran
    for i in range (ukuran):
        for j in range (ukuran):
            if array [j] == array [i]:
                frekuensi [i] += 1

    max_frekuensi = 0
    for i in range (ukuran):
        if frekuensi [i] > frekuensi [max_frekuensi]:
            max_frekuensi = i

    if frekuensi [max_frekuensi] > 1:
        print (f"Mode                          = {array [max_frekuensi]}")
    else:
        print ("Mode                          = -")


def range_data (ukuran, array):
    print ("Range                         =", array [ukuran - 1] - array [0])

if __name__ == "__main__":
    main ()