// Nhập vào n, tı́nh tı́ch các số từ 1 đến n.
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
    printf("Nhập vào số nguyên n (1 <= n <= 20): \n");
    while (scanf("%d",&n) != 1 || n >20 || n <= 0) {
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    long long tich = 1;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    printf("Tich cua cac so tu 1 den %d la: %lld", n, tich);
    return 0;
}