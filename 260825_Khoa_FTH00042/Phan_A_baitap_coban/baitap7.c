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
    printf("Nhap vao so nguyen n (n > 0): \n");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Gia tri ban nhap khong hop le. Vui long nhap lai:\n");
        while (getchar() != '\n');
    }
    printf("Cac so le nho hon %d la: ", n);
    for (int i = 1; i < n; i += 2) {
        printf("%d ", i);
    }
    return 0;
}