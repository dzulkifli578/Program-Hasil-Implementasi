class ToDoList:
    def __init__(self):
        self.list = []

    def add(self):
        while True:
            isi = input('Masukkan list (STOP jika ingin berhenti): ')
            if isi.upper() == 'STOP':
                break
            else:
                self.list.append(isi)

    def view(self):
        if not self.list:
            print('Kamu belum memiliki list!')
        else:
            for i, item in enumerate(self.list, start=1):
                print(f'{i}. {item}')

    def edit(self):
        ID = int(input('Masukkan nomor urut list yang akan diedit: '))
        isi = input('Masukkan list baru: ')
        self.list[ID - 1] = isi

    def delete(self):
        ID = int(input('Masukkan nomor urut list yang akan dihapus: '))
        del self.list[ID - 1]

def main():
    to_do_list = ToDoList()

    while True:
        print('==============================')
        print('To-Do List')
        print('==============================')
        to_do_list.view()
        print('==============================')
        print('1. Tambah')
        print('2. Edit')
        print('3. Hapus')
        print('4. Keluar')
        input_choice = input('Masukkan salah satu: ')

        if input_choice == '1':
            to_do_list.add()
        elif input_choice == '2':
            to_do_list.edit()
        elif input_choice == '3':
            to_do_list.delete()
        elif input_choice == '4':
            print('Terima kasih!')
            break
        else:
            print('Input error, silahkan coba lagi')

if __name__ == "__main__":
    main()
