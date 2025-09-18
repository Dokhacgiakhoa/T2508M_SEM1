/* 15. Số đối xứng 
KiePm tra so$nguyên có phải so$palindrome.	
Prototype: int is_palindrome_num(long long x); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_palindrome_num(long long x) {
    long long reversed = reverse_ll(x);
    return x == reversed;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    long long n;
    printf("Nhập số nguyên: \n");
    while (scanf("%lld", &n) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    if (is_palindrome_num(n)) {
        printf("%lld là số đối xứng.\n", n);
    } else {
        printf("%lld không phải số đối xứng.\n", n);
    }
    return 0;
}