/* 16. Số Armstrong 
KiePm tra so$có phải Armstrong.	
Prototype: int is_armstrong(int n); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_armstrong(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == n;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    char c;
    printf("Nhập vào số nguyên n (n > 0): \n");
    while (scanf("%d%c", &n, &c) != 2 || n <= 0 || c != '\n') {
        printf("Giá trị dữ liệu không hợp lệ, vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    if (is_armstrong(n)) {
        printf("%d là số Armstrong.\n", n);
    } else {
        printf("%d không phải số Armstrong.\n", n);
    }
    return 0;
}