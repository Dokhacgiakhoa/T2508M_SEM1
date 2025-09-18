// Viết chương trình vẽ tam giác sao theo chiều cao n.
#include <stdio.h>
#ifdef _WIN32 
#include <windows.h> 
#endif 
int main() {
#ifdef _WIN32 
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
#endif 
    int n; 
    printf("Nhập vào chiều cao n: \n"); 
    while (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Giá trị nhập vào không hợp lệ. Vui nhập lại: \n");
        while (getchar() != '\n');
    } 
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= n - i; j++) { 
            printf(" "); 
        } 
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*"); 
        } 
        printf("\n");
    } 
    return 0; 
}