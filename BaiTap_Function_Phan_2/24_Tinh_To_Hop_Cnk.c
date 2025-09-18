/* 24. Tính tổ hợp C(n,k) 
Tı́nh C(n,k) với n,k nhỏ.	
Prototype: long double comb_small(int n, int k); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long double comb_small(int n, int k) {
    long double result = 1;
    for (int i = 1; i <= k; i++) {
        result *= n--;
        result /= i;
    }
    return result;
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n, k;
    printf("Nhap n,k: \n");
    while (scanf("%d %d", &n, &k) != 2) {
        printf("Giá trị dữ liệu không hợp lệ, vui lồng nhập lại: ");
        while (getchar() != '\n');
    }
    long double result = comb_small(n, k);
    printf("C(%d,%d) = %Lf\n", n, k, result);
    return 0;
}