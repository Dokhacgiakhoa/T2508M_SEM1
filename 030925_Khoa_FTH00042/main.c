// Viết chương trình in ra mảng số nguyên
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void showarray() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 10; i++) {
        printf("Vị trí array[%d] giá trị là %d\n", i, array[i]);
    }
}

void inputarray() {
    char aray[10];
    for (int i = 0; i < 15; i++) {
        printf("Vị trí array[%d] giá trị là %c\n", i, aray[i]);
    }
    printf("Nhập mảng số nguyên: \n");
    for (int i = 0; i < 15; i++) {
        printf("Vị trí array[%d]: \n", i);
        scanf("%c", &aray[i]);
    }
    for (int i = 0; i < 15; i++) {
        printf("Vị trí array[%d] giá trị là %c\n", i, aray[i]);
    }
}

void inputadv() {
    int n;
    printf("Nhập số nguyên n: \n");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        printf("Vị trí array[%d]: \n", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("Vị trí array[%d] giá trị là %d\n", i, array[i]);
    }
}

int main () {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    // showarray();
    // inputarray();
    while (1) {
        int choice;
        printf("1. Gọi hàm Showarray. \n");
        printf("2. Gọi hàm Inputarray. \n");
        printf("3. Gọi hàm Inputadv.\n");
        printf("Nhập vào lựa chọn của bạn: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                showarray();
                break;
            case 2:
                inputarray();
                break;
            case 3:
                inputadv();
                break;
            default:
                return 0;
        }
    }
    return 0;
}