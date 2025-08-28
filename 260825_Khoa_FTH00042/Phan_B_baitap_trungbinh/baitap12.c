// In ra tất cả các số nguyên tố nhỏ hơn n.
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
int isPrime(int n) {
    if (n < 1) {
        return 0;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    printf("Nhập vào số nguyên n (n > 0): \n");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Giá trị nhập vào không hợp lệ. Vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    printf("Các số nguyên tố nhỏ hơn %d là:\n", n);
    for (int i = 1; i < n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}