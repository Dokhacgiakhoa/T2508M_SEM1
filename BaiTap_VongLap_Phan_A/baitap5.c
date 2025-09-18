// Nhập vào n, tính tổng các số từ 1 đến n.
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n, i;
    printf("Nhập vào số nguyên n và i: \n");
    while (scanf("%d %d", &n, &i) !=2 && i>n) {
        printf("Dữ liệu không hợp lệ, vui lòng nhập lại: \n");
        while (getchar() != '\n');
    }
    printf("Tổng các số từ %d đến %d là:\n", i, n);
    printf("%d",(n+i)*(n-i+1)/2);
    return 0;
}