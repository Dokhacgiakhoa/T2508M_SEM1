/* Đếm dương/âm/zero 
Cơ sở lýthuye-t: Duyệt mảng và phân loại.	
Yêu caCu: In dương, âm, zero (chưa học con trỏ cótheGin trự c tie-p).	
Prototype gợi ý: void count_sign(const int a[], int n);	
Vı́dụ I/O:	
[-2,0,5] → pos=1, neg=1, zero=1 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void count_sign(const int a[], int n) {
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) pos++;
        else if (a[i] < 0) neg++;
        else zero++;
    }
    printf("pos=%d, neg=%d, zero=%d\n", pos, neg, zero);
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
    count_sign(a, n);
    return 0;
}