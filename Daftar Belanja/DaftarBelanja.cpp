#include <iostream>
#include <vector>

using namespace std;

class ShoppingList {
private:
    int index = -1;
    vector<string> NamaBarang;
    vector<int> JumlahBarang;

public:
    void AddShoppingList() {
        cout << "Masukkan Nama Barang : ";
        string NamaBarang;
        cin >> NamaBarang;
        this->NamaBarang.push_back(NamaBarang);

        cout << "Masukkan Jumlah Barang : ";
        int JumlahBarang;
        cin >> JumlahBarang;
        this->JumlahBarang.push_back(JumlahBarang);

        index++;
    }

    void SeeShoppingList() {
        for (int i = 0; i < NamaBarang.size(); i++) {
            cout << i + 1 << ". " << NamaBarang[i] << " (" << JumlahBarang[i] << ")" << endl;
        }
    }

    void EditShoppingList() {
        cout << "Masukkan ID Barang yang ingin diubah : ";
        int IDBarang;
        cin >> IDBarang;

        if (IDBarang > index || IDBarang < 0) {
            cout << "ID tidak ditemukan" << endl;
            return;
        }

        cout << "Masukkan Nama Barang baru : ";
        string NamaBarangBaru;
        cin >> NamaBarangBaru;

        cout << "Masukkan Jumlah Barang baru : ";
        int JumlahBarangBaru;
        cin >> JumlahBarangBaru;

        NamaBarang[IDBarang] = NamaBarangBaru;
        JumlahBarang[IDBarang] = JumlahBarangBaru;
    }

    void DeleteShoppingList() {
        cout << "Masukkan ID Barang yang ingin dihapus : ";
        int IDBarang;
        cin >> IDBarang;

        if (IDBarang > index || IDBarang < 0) {
            cout << "ID tidak ditemukan" << endl;
            return;
        }

        NamaBarang.erase(NamaBarang.begin() + IDBarang);
        JumlahBarang.erase(JumlahBarang.begin() + IDBarang);
        index--;
    }
};

int main() {
    ShoppingList shoppingList;

    string input;

    do {
        cout << "==============================" << endl;
        cout << "Aplikasi Daftar belanja" << endl;
        cout << "==============================" << endl;
        cout << "1. Tambah barang ke daftar belanja" << endl;
        cout << "2. Lihat daftar belanja" << endl;
        cout << "3. Edit daftar belanja" << endl;
        cout << "4. Hapus daftar belanja" << endl;
        cout << "5. Keluar" << endl;
        cout << "==============================" << endl;
        cin >> input;

        switch (input[0]) {
            case '1':
                shoppingList.AddShoppingList();
                break;
            case '2':
                shoppingList.SeeShoppingList();
                break;
            case '3':
                shoppingList.EditShoppingList();
                break;
            case '4':
                shoppingList.DeleteShoppingList();
                break;
            case '5':
                cout << "Terima kasih!" << endl;
                break;
            default:
                cout << "Input tidak valid" << endl;
        }
    } while (input[0] != '5');

    return 0;
}
