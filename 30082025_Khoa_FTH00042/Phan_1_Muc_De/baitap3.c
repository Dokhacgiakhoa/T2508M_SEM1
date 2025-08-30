/* Số lớn nhất của hai số 
Vie$t hàm trả về số lớn hơn trong hai so nguyên a và b.	
Prototype: int max2(int a, int b); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int max2(int a, int b) {
    return a > b ? a : b;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int a, b;
    printf("Nhập vào số nguyên a: ");
    while (scanf("%d", &a) != 1) {
        printf("Giá trị nhập vào không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Nhập vào số nguyên b: ");
    while (scanf("%d", &b) != 1) {
        printf("Giá trị nhập vào không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Số lớn nhất trong 2 số nguyên %d và %d là: %d\n", a, b, max2(a, b));
    return 0;
}