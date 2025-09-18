/* 20. Đổi giây thành giờ:phút:giây 
In ra h:m:s từ toPng giây.	
Prototype: void print_hms(int total_seconds); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void print_hms(int total_seconds) {
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;
    printf("%d:%d:%d\n", hours, minutes, seconds);
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int total_seconds;
    printf("Nhập số giây: \n");
    while (scanf("%d", &total_seconds) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    print_hms(total_seconds);
    return 0;
}