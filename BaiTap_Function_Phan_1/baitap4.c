/* Tổng 1..n 
Tı́nh toPng các so$từ 1 đe$n n.	
Prototype: long long sum_to_n(int n); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long sum_to_n(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    char c;
    printf("Nhập vào số nguyên n (n > 0): \n");
    while (scanf("%d%c", &n, &c) != 2 || n <= 0 || c != '\n') {
        printf("Giá trị nhập vào không hợp lệ, vui lòng nhập lại:\n");
        while (getchar() != '\n');
    }
    long long sum = sum_to_n(n);
    printf("Tổng các số từ 1 đến %d là: %lld\n", n, sum);
    return 0;
}