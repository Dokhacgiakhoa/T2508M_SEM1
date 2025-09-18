/* 1. Giá trị tuyệt đối 
Viết hàm tı́nh giá trị tuyệt đối của một số nguyên.	
Prototype: int abs_i(int x); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int abs_i(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int x;
    char c;
    printf("Nhập vào số nguyên n: \n ");
    while (scanf("%d%c", &x, &c) != 2 || c != '\n') {
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lồng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Giá trị tuyệt đối của %d là %d", x, abs_i(x));
    return 0;
}
