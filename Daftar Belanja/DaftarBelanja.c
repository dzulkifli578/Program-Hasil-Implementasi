#include <stdio.h>
#include <stdlib.h>

struct ShoppingList {
    int index;
    char NamaBarang[100][100];
    int JumlahBarang[100];
};

void AddShoppingList(struct ShoppingList *shoppingList) {
    printf("Masukkan Nama Barang : ");
    scanf("%s", shoppingList->NamaBarang[shoppingList->index]);
    
    printf("Masukkan Jumlah Barang : ");
    scanf("%d", &shoppingList->JumlahBarang[shoppingList->index]);
    
    shoppingList->index++;
}

void SeeShoppingList(struct ShoppingList *shoppingList) {
    for (int i = 0; i < shoppingList->index; i++) {
        printf("%d. %s (%d)\n", i + 1, shoppingList->NamaBarang[i], shoppingList->JumlahBarang[i]);
    }
}

void EditShoppingList(struct ShoppingList *shoppingList) {
    int IDBarang;
    printf("Masukkan ID Barang yang ingin diubah : ");
    scanf("%d", &IDBarang);

    if (IDBarang >= shoppingList->index || IDBarang < 0) {
        printf("ID tidak ditemukan\n");
        return;
    }

    printf("Masukkan Nama Barang baru : ");
    scanf("%s", shoppingList->NamaBarang[IDBarang]);

    printf("Masukkan Jumlah Barang baru : ");
    scanf("%d", &shoppingList->JumlahBarang[IDBarang]);
}

void DeleteShoppingList(struct ShoppingList *shoppingList) {
    int IDBarang;
    printf("Masukkan ID Barang yang ingin dihapus : ");
    scanf("%d", &IDBarang);

    if (IDBarang >= shoppingList->index || IDBarang < 0) {
        printf("ID tidak ditemukan\n");
        return;
    }

    for (int i = IDBarang; i < shoppingList->index - 1; i++) {
        strcpy(shoppingList->NamaBarang[i], shoppingList->NamaBarang[i + 1]);
        shoppingList->JumlahBarang[i] = shoppingList->JumlahBarang[i + 1];
    }

    shoppingList->index--;
}

int main() {
    struct ShoppingList shoppingList;
    shoppingList.index = 0;

    char input[10];

    do {
        printf("==============================\n");
        printf("Aplikasi Daftar belanja\n");
        printf("==============================\n");
        printf("1. Tambah barang ke daftar belanja\n");
        printf("2. Lihat daftar belanja\n");
        printf("3. Edit daftar belanja\n");
        printf("4. Hapus daftar belanja\n");
        printf("5. Keluar\n");
        printf("==============================\n");
        scanf("%s", input);

        switch (input[0]) {
            case '1':
                AddShoppingList(&shoppingList);
                break;
            case '2':
                SeeShoppingList(&shoppingList);
                break;
            case '3':
                EditShoppingList(&shoppingList);
                break;
            case '4':
                DeleteShoppingList(&shoppingList);
                break;
            case '5':
                printf("Terima kasih!\n");
                break;
            default:
                printf("Input tidak valid\n");
        }
    } while (input[0] != '5');

    return 0;
}
