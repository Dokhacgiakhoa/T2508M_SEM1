/* Giai thừa 
Tı́nh n! với n >= 0.	
Prototype: long long fact_iter(int n); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long fact_iter(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    char c;
    printf("Nhập vào số nguyên (0 <= n <= 25): ");
    while (scanf("%d%c", &n, &c) != 2 || n < 0 || c != '\n' || n > 25) {
        printf("Giá trị nhập vào không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    long long result = fact_iter(n);
    printf("Giai thừa của %d là: %lld\n", n, result);
    return 0;
}