/* Kiểm tra số chính phương 
Kiểm tra n có phải số chı́nh phương.	
Prototype: int is_perfect_square(int n); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_perfect_square(int n) {
    int i;
    for (i = 1; i * i <= n; i++) {
        if (i * i == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    printf("Nhập số nguyên n: ");
    scanf("%d", &n);
    if (is_perfect_square(n)) {
        printf("%d là số chính phương\n", n);
    } else {
        printf("%d không phải số chính phương\n", n);
    }
    return 0;
}