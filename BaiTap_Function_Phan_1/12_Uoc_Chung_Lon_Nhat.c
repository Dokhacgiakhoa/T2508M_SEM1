/* 12. Ước chung lớn nhất 
Tı́nh gcd(a,b) theo thuật toán Euclid.	
Prototype: int gcd(int a, int b); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int gcd(int a, int b) {
    if (b == 0) return a; 
    else return gcd(b, a % b);
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
    int result = gcd(a, b);
    printf("Ước chung lớn nhất của %d và %d là: %d\n", a, b, result);
    return 0;
}