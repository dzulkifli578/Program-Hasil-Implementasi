while True:
    print ("========== Konversi Suhu ==========")
    print ("C = Celsius")
    print ("F = Fahrenheit")
    satuan = input ("Satuan mana yang ingin dikonversi?: ")

    if satuan == 'C' or satuan == "c":
        suhu = float (input ("Masukkan suhu dalam satuan Fahrenheit: "))
        hasil = (1.8 * suhu) + 32
        print(f"Suhu: {hasil:.2f} derajat Celsius")
        break
    
    elif satuan == 'F' or satuan == "f":
        suhu = float (input ("Masukkan suhu dalam satuan Celsius: "))
        hasil = (suhu - 32) / 1.8
        print(f"Suhu: {hasil:.2f} derajat Fahrenheit")
        break

    else:
        print("Masukkan antara C atau F")