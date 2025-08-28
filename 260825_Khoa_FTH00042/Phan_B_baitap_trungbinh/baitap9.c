// Nhập vào n, in ra tổng các số chẵn từ 1 đến n.
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
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    printf("Tổng các số chẵn từ 1 đến %d là: ", n);
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}