/* 14. Đảo ngược số nguyên 
Trả veEso$đảo ngượ c của n.	
Prototype: long long reverse_ll(long long x); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long reverse_ll(long long x) {
    long long result = 0;
    while (x != 0) {
        result = result * 10 + x % 10;
        x /= 10;
    }
    return result;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    long long n;
    printf("Nhập số nguyên: ");
    while (scanf("%lld", &n) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    long long result = reverse_ll(n);
    printf("Đảo ngược của %lld là: %lld\n", n, result);
    return 0;
}