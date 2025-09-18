/* 21. Hàm bậc thang 
Trả về -1, 0, 1 theo giá trị x.	
Prototype: int step(int x); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int step(int x) {
    if (x < 0) {
        return -1;
    } else if (x == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int x;
    char c;
    printf("Nhập vào số nguyên n: \n");
    while (scanf("%d%c", &x, &c) != 2 || c != '\n') {
        printf("Giá trị dữ liệu không hợp lệ, vui lồng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Kết quả: %d", step(x));
    return 0;
}