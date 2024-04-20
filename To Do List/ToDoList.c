#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LIST_SIZE 100

typedef struct {
    char list[MAX_LIST_SIZE][100];
    int count;
} ToDoList;

void add(ToDoList *toDoList) {
    char input[100];
    while (1) {
        printf("Masukkan list (STOP jika ingin berhenti): ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0'; // Remove trailing newline
        if (strcmp(input, "STOP") == 0) {
            break;
        } else {
            strcpy(toDoList->list[toDoList->count], input);
            toDoList->count++;
        }
    }
}

void view(ToDoList *toDoList) {
    if (toDoList->count == 0) {
        printf("Kamu belum memiliki list!\n");
    } else {
        for (int i = 0; i < toDoList->count; i++) {
            printf("%d. %s\n", i + 1, toDoList->list[i]);
        }
    }
}

void edit(ToDoList *toDoList) {
    int ID;
    printf("Masukkan nomor urut list yang akan diedit: ");
    scanf("%d", &ID);
    getchar(); // Clear newline character from buffer
    printf("Masukkan list baru: ");
    fgets(toDoList->list[ID - 1], sizeof(toDoList->list[ID - 1]), stdin);
    toDoList->list[ID - 1][strcspn(toDoList->list[ID - 1], "\n")] = '\0'; // Remove trailing newline
}

void delete(ToDoList *toDoList) {
    int ID;
    printf("Masukkan nomor urut list yang akan dihapus: ");
    scanf("%d", &ID);
    getchar(); // Clear newline character from buffer
    for (int i = ID - 1; i < toDoList->count - 1; i++) {
        strcpy(toDoList->list[i], toDoList->list[i + 1]);
    }
    toDoList->count--;
}

int main() {
    int input;
    ToDoList toDoList;
    toDoList.count = 0;

    do {
        printf("==============================\n");
        printf("To-Do List\n");
        printf("==============================\n");
        view(&toDoList);
        printf("==============================\n");
        printf("1. Tambah\n");
        printf("2. Edit\n");
        printf("3. Hapus\n");
        printf("4. Keluar\n");
        printf("Masukkan salah satu: ");
        scanf("%d", &input);
        getchar(); // Clear newline character from buffer

        switch (input) {
            case 1:
                add(&toDoList);
                break;
            case 2:
                edit(&toDoList);
                break;
            case 3:
                delete(&toDoList);
                break;
            case 4:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Input error, silahkan coba lagi\n");
                break;
        }
    } while (input != 4);

    return 0;
}
