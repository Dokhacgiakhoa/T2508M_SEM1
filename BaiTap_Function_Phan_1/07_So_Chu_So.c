/* 7. Số chữ số 
Đếm số chữ số của một số nguyên.	
Prototype: int digit_count(long long n); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int digit_count(long long n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    long long n;
    printf("Nhập vào một số nguyên: ");
    while (scanf("%lld", &n) != 1) {
        printf("Giá trị nhập vào không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    int count = digit_count(n);
    printf("Số chữ số của %lld là: %d\n", n, count);
    return 0;
}