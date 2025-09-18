/* 26. Kiểm tra chia hết 
Hàm kiểm tra chia hết cho 3,5 hoặc 9.	
Prototype: int divisible_by_3(long long n); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int divisible_by_3(long long n) {
    return n % 3 == 0;
}

int divisible_by_5(long long n) {
    return n % 5 == 0;
}

int divisible_by_9(long long n) {
    return n % 9 == 0;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    long long n;
    printf("Nhập số nguyên n: \n");
    while (scanf("%lld", &n) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    int check = 0;
    if (divisible_by_3(n)) check+=1;
    if (divisible_by_5(n)) check+=2;
    if (divisible_by_9(n)) check+=4;
    switch (check)
    {
    case 0:
        printf("%lld không chia hết cho 3, 5 và 9.\n", n);
        break;
    case 1:
        printf("%lld chia hết cho 3, không chia hết cho 5 và 9.\n", n);
        break;
    case 2:
        printf("%lld không chia hết cho 3, chia hết cho 5 và 9.\n", n);
        break;
    case 3:
        printf("%lld chia hết cho 3, chia hết cho 5 và 9.\n", n);
        break;
    case 4:
        printf("%lld chia hết cho 3, không chia hết cho 5 và 9.\n", n);
        break;
    case 5:
        printf("%lld chia hết cho 3, chia hết cho 5 và 9.\n", n);
        break;
    case 6:
        printf("%lld chia hết cho 3, chia hết cho 5 và 9.\n", n);
        break;
    case 7:
        printf("%lld chia hết cho 3, chia hết cho 5 và 9.\n", n);
        break;
    default:
        break;
    }
    return 0;
}