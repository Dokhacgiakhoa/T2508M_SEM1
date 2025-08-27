// Nhập vào n, in ra các số từ 1 đến n.
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#include <math.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n, i = 1, j;
    printf("Nhập vào số nguyên dương n: \n");
    scanf("%d", &n);
    for (j = sqrt(n); j <= n; j++) { // lựa chọn j là điểm xuống dòng
        if (n % j == 0) { break; }
    }
    printf("Các số từ 1 đến %d là:\n", n);
    while (i <= n) {
        printf(" %d", i);
        if (i % j == 0) { // nếu i chạy tới điểm xuống dòng
            printf("\n");
        }
        i++;
    }
    printf("\n");
    return 0;
}