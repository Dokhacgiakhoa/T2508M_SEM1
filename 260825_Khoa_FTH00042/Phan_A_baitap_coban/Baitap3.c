// In ra bảng cửu chương 5 (dùng do while).
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int i = 1;
    printf("Bảng cửu chương 5:\n");
    do {
        printf("5 x %d = %d\n", i, i *5);
        i++;
    } while (i <=10);
    return 0;
}