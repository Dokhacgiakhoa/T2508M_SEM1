// Nhập vào n, tı́nh tı́ch các số từ 1 đến n.
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    getconsolseCPoutput (CP_UTF8);
    getconsolseCP (CP_UTF8);
#endif
    int n;
    printf("Nhập vào số nguyên n: \n");
    while (scanf("%d",&n) != 1 );
    return 0;
}