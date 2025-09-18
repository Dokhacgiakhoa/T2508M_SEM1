/* 27. Fibonacci (đệ quy) 
Vie$t hàm Fibonacci đệ quy.	
Prototype: long long fib_rec(int n); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long fib_rec(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    printf("Nhập số nguyên n: \n");
    while (scanf("%d", &n) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Fibonacci(%d) = %lld\n", n, fib_rec(n));
    return 0;
}