/* Viết chương trình nhập vào một số nguyên dương n, tính và in ra:
Tổng các chữ số của n và số đảo ngược của n. */
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
    printf("Nhập vào số nguyên n: \n");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Giá trị nhập vào không hợp lệ. Vui nhập lại: \n");
        while (getchar() != '\n');
    }
    int tong = 0, m = n;
    while (m != 0) {
        tong += m % 10;
        m /= 10;
    }
    printf("Tổng các chữ số của %d là: %d\n", n, tong);
    int daoNghich = 0; 
    m = n;
    while (m != 0) {
        daoNghich = daoNghich * 10 + m % 10;
        m /= 10;
    }
    printf("Số đảo ngược của %d là: %d\n", n, daoNghich);
    return 0;
}