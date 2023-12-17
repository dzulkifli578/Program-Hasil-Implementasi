def input_nilai (matkul, array):
    for i in range (matkul):
        print ("==============================")
        kehadiran = int (input ("Masukkan nilai kehadiran  : "))
        attitude = int (input ("Masukkan nilai attitude   : "))
        uts = int (input ("Masukkan nilai UTS        : "))
        uas = int (input ("Masukkan nilai UAS        : "))
        print ("==============================")

        nilai = int (0.2 * kehadiran + 0.2 * attitude + 0.2 * uts + 0.2 * uas)
        array [i] = nilai

        print ("==============================")
        print ("Nilai kehadiran           :", kehadiran)
        print ("Nilai attitude            :", attitude)
        print ("Nilai UTS                 :", uts)
        print ("Nilai UAS                 :", uas)
        print ("==============================")

        print ("Total Nilai               :", array [i], end=" ")
        if nilai >= 80:
            print ("(A)")
        elif nilai >= 70:
            print ("(B)")
        elif nilai >= 60:
            print ("(C)")
        elif nilai >= 50:
            print ("(D)")
        elif nilai >= 0:
            print ("(E)")


def status (matkul, array):
    salah = 0

    for i in range (matkul):
        if array [i] < 70:
            salah += 1

    if salah == 0:
        print ("Status                    : Lulus")
    else:
        print ("Status                    : Tidak Lulus")
    print ("==============================")
    
def main ():
    matkul = int(input("Masukkan jumlah mata kuliah: "))
    array = [0] * matkul

    input_nilai (matkul, array)
    status (matkul, array)

if __name__ == "__main__":
    main ()