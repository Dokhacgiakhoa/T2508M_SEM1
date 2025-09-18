// Nhập vào số n, in ra dãy Fibonacci gồm n số hạng.
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
    printf("Nhập số nguyên n: \n");
    while (scanf("%d", &n) != 1 || n <= 0 || n >= 91) {
        printf("Giá trị nhập vào không hợp lệ. Vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    long long f1 = 0, f2 = 1;
    long long f[91];
    printf("Dãy Fibonacci gồm %d số hạng:\n", n);
    for (int i = 1; i <= n; i++) {
        f[i] = f1 + f2;
        f1 = f2;
        f2 = f[i];
        printf("%lld ", f[i]);
        if (i % 10 == 0) printf("\n");
    }
    return 0;
}