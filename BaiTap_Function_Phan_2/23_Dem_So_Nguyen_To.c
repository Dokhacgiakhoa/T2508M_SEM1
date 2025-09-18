/* 23. Đếm số nguyên tố 
Đe$m so$nguyên to$trong đoạn [a,b].	
Prototype: int count_primes(int a, int b); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int count_primes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int a, b;
    printf("Nhập vào đoạn [a,b]: \n");
    while (scanf("%d%d", &a, &b) != 2) {
        printf("Giá trị dữ liệu không hợp lệ, vui lồng nhập lại: ");
        while (getchar() != '\n');
    }
    int count = count_primes(a, b);
    printf("Số lượng số nguyên tố trong đoạn [%d,%d] là: %d\n", a, b, count);
    return 0;
}