/* 11. Kiểm tra số nguyên tố 
KiePm tra n có phải so$nguyên to$.	
Prototype: int is_prime(int n); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    printf("Nhập số nguyên n: \n");
    while (scanf("%d", &n) != 1) {
        printf("Giá trị nhập vào không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    if (is_prime(n))
        printf("%d là số nguyên tố\n", n);
    else
        printf("%d không phải số nguyên tố\n", n);
    return 0;
}