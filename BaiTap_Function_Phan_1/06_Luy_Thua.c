/* 6. Lũy thừa 
Tı́nh a^b với b >= 0.	
Prototype: long long pow_int(int a, int b); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long pow_int(int a, int b) {
    long long result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int a, b;
    printf("Nhập vào số nguyên a: ");
    while (scanf("%d", &a) != 1) {
        printf("Gía trị nhập vào không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Nhập vào số nguyên b: ");
    while (scanf("%d", &b) != 1 || b < 0) {
        printf("Giá trị nhập vào không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    long long result = pow_int(a, b);
    printf("%d^%d = %lld\n", a, b, result);
    return 0;
}