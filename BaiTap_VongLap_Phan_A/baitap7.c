// Nhập vào n, in ra các số lẻ nhỏ hơn n.
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
    printf("Nhập vào số nguyên n (n > 0): \n");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Giá trị bạn nhập không hợp lệ. vui lòng nhập lại: \n");
        while (getchar() != '\n');
    }
    printf("Các số lẻ nhỏ hơn %d là: ", n);
    for (int i = 1; i < n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}