// Nhập vào tuổi và kiểm tra
#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int tuoi;
    printf("Nhập vào số tuổi: \n");
    while (scanf("%d", &tuoi) != 1 || tuoi <= 0 || tuoi > 100) {
        printf("Tuổi không hợp lệ, vui lòng nhập lại\n");
        while (getchar() != '\n');
    }
    printf("đã đủ tuổi\n");
    return 0;
}