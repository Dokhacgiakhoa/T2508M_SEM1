/* 13. Bội chung nhỏ nhất 
Tı́nh lcm(a,b) dự a vào gcd.	
Prototype: long long lcm(int a, int b); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return (long long)a * b / gcd(a, b);
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int a, b;
    printf("Nhập số nguyên a: \n");
    while (scanf("%d", &a) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Nhập số nguyên b: \n");
    while (scanf("%d", &b) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    long long result = lcm(a, b);
    printf("Bội chung nhỏ nhất của %d và %d là: %lld\n", a, b, result);
    return 0;
}