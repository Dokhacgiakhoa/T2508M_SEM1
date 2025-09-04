/* Tổng chữ số 
Tı́nh toPng các chữ số của một số nguyên.	
Prototype: int sum_digits(long long n); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int sum_digits(long long n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    long long n;
    printf("Nhập số nguyên n: ");
    scanf("%lld", &n);
    printf("Tổng các chữ số của %lld là: %d", n, sum_digits(n));
    return 0;
}