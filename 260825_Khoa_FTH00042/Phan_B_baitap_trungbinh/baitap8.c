// Nhập vào n, in ra bảng cửu chương n (1 đến 10).
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    printf("Nhập vào số nguyên n (1 <= n <= 10): \n");
    while (scanf("%d", &n) != 1 || n > 10 || n <= 0) {
        printf("Giá trị bạn nhập không hợp lệ. Vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    printf("Bảng cưu chương %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}