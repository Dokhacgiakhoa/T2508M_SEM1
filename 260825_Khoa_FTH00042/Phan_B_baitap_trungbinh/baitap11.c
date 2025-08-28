// Nhập vào n, kiểm tra n có phải số nguyên tố không.
#include <stdio.h> 
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    printf("Nhập vào số nguyên n (n > 0): \n");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Giá trị bạn nhập không hợp lệ. Vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    int count = 0;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        printf("%d là số nguyên tố.\n", n);
    }
    else {
        printf("%d không phải số nguyên tố.\n", n);
    }
    return 0;
}