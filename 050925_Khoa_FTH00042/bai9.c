/* Tần suất giá trị x 
Cơ sở lýthuye-t: Đe-m xua-t hiện x.	
Yêu caCu: Trả veCso-laCn x xua-t hiện.	
Prototype gợi ý: int freq_of(const int a[], int n, int x);	
Vı́dụ I/O:	
[1,2,1,1], x=1 → 3 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int freq_of(const int a[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
        }
    }
    return count;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    int n;
    printf("Nhập số phần tử của mảng: "); scanf("%d", &n);
    int a[n];
    printf("Nhâp mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int x;
    printf("Nhập số x: "); scanf("%d", &x);
    int count = freq_of(a, n, x);
    printf("%d xuất hiện %d lần\n", x, count);
    return 0;
}