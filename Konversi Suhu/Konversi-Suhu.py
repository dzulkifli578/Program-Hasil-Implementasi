while True:
    print ("========== Konversi Suhu ========== ")
    print ("C = Celsius")
    print ("F = Fahrenheit")
    print ("K = Keluar")
    satuan = input ("Satuan mana yang ingin dikonversi?: ")

    if satuan.lower () == 'c':
        suhu = float (input ("Masukkan suhu dalam satuan Fahrenheit: "))
        fahrenheit_ke_celsius = (suhu - 32) * 5 / 9
        print (f"Suhu: {fahrenheit_ke_celsius :.2f} derajat Celsius")
    
    elif satuan.lower () == 'f':
        suhu = float (input ("Masukkan suhu dalam satuan Celsius: "))
        celsius_ke_fahrenheit = (suhu * 9 / 5) + 32
        print (f"Suhu: {celsius_ke_fahrenheit :.2f} derajat Fahrenheit")
    
    elif satuan.lower () == 'k':
        print ("Terima kasih telah menggunakan program ini!")
        break
    
    else:
        print ("Masukkan antara C|F|K")
        continue