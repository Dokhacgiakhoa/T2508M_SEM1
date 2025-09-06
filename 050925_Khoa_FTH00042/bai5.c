/* Tổng số lẻ 1..n 
Cơ sở lý thuyếtt: Cộng dồn với vòng lặp.	
Yêu cầu: Trả về tổng số lể trong [1..n].	
Prototype gợi ý: long long sum_odds_to_n(int n);	
Vı́dụ I/O:	
Input: 10 → 25 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
long long sum_odds_to_n(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i += 2) {
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
    printf("Nhập vào số nguyên n (n > 0): \n");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Dữ liệu nhập vào không hợp lệ, vui lòng nhập lại: \n");
        while (getchar() != '\n');
    }
    printf("Tổng các số lẻ từ 1 đến %d là: %lld\n", n, sum_odds_to_n(n));
    // Cách 2
    if (n % 2 == 0) printf("Tổng các số lẻ từ 1 đến %d là: %lld\n", n, n * n / 4);
    else printf("Tổng các số lẻ từ 1 đến %d là: %lld\n", n, (n + 1) * (n +1) / 4);
    return 0;
}
