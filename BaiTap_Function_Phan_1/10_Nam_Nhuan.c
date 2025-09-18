/* 10. Năm nhuận 
KiePm tra một năm có nhuận hay không.	
Prototype: int is_leap_year(int y); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_leap_year(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int year;
    printf("Nhập năm: ");
    scanf("%d", &year);
    if (is_leap_year(year)) {
        printf("%d là năm nhuận\n", year);
    } else {
        printf("%d không phải năm nhuận\n", year);
    }
    return 0;
}