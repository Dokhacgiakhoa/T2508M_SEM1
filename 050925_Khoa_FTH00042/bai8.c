/* Min/Max mảng 
Cơ sở lýthuye-t: Duyệt một laCn.	
Yêu caCu: Tı̀m min và max.	
Prototype gợi ý: void minmax(const int a[], int n, int *minv, int *maxv);	
Vı́dụ I/O:	
[5,1,7] → min=1, max=7 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

void minmax(const int a[], int n, int *minv, int *maxv) {
    *minv = a[0];
    *maxv = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < *minv) *minv = a[i];
        if (a[i] > *maxv) *maxv = a[i];
    }
}

int main() {
#ifdef WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int n;
    printf("Nhập số phần tử của mảng: "); scanf("%d", &n);
    int a[n];
    printf("Nhập mảng:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int minv, maxv;
    minmax(a, n, &minv, &maxv);
    printf("Min: %d\n", minv);
    printf("Max: %d\n", maxv);
    return 0;
}