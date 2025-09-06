/* Mảng tăng dần 
Cơ sở lýthuye-t: a[i] ≤ a[i+1].	
Yêu caCu: KieGm tra mảng không giảm.	
Prototype gợi ý: int is_non_decreasing(const int a[], int n);	
Vı́dụ I/O:	
[1,2,2,5] → 1 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_non_decreasing(const int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    int n;
    printf("Nhập số phần tử của mảng:\n"); scanf("%d", &n);
    int a[n];
    printf("Nhập mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int result = is_non_decreasing(a, n);
    if (result) {
        printf("Mảng không giảm.\n");
    } else {
        printf("Mảng không phải không giảm.\n");
    }
    return 0;
}