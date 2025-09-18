/* 28. Lũy thừa nhanh 
Vie$t hàm tı́nh x^n baJng chia đePtrị.	
Prototype: long long pow_fast(long long x, long long n); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long pow_fast(long long x, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }
    return result;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    long long x, n;
    printf("Nhập số nguyên x: \n");
    while (scanf("%lld", &x) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Nhập số nguyên n: \n");
    while (scanf("%lld", &n) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    long long result = pow_fast(x, n);
    printf("%lld^%lld = %lld\n", x, n, result);
    return 0;
}