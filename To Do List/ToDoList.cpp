#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ToDoList {
private:
    vector<string> list;

public:
    ToDoList() {}

    void Add() {
        string isi;
        while (true) {
            cout << "Masukkan list (STOP jika ingin berhenti): ";
            getline(cin, isi);
            if (isi == "STOP")
                break;
            else
                list.push_back(isi);
        }
    }

    void View() {
        if (list.empty())
            cout << "Kamu belum memiliki list!" << endl;
        else {
            for (int i = 0; i < list.size(); i++) {
                cout << i + 1 << ". " << list[i] << endl;
            }
        }
    }

    void Edit() {
        int ID;
        cout << "Masukkan nomor urut list yang akan diedit : ";
        cin >> ID;
        cin.ignore();
        cout << "Masukkan list baru: ";
        string isi;
        getline(cin, isi);
        list[ID - 1] = isi;
    }

    void Delete() {
        int ID;
        cout << "Masukkan nomor urut list yang akan dihapus : ";
        cin >> ID;
        list.erase(list.begin() + ID - 1);
    }
};
