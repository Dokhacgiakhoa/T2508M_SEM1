// Viết chương trình in ra tam giác Pascal với n dòng.
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
    printf("Nhập số dòng của tam giác Pascal (từ 1 đến 65): \n");
    while (scanf("%d", &n) != 1 || n <= 0 || n > 65) {
        printf("Giá trị nhập vào không hợp lệ. Vui lòng nhập lại: \n");
        while (getchar() != '\n');
    }
    long long C[68][68] = {0}; // đủ chỗ cho 0..67
    // build tam giác
    for (int i = 0; i < n; i++) {
        C[i][0] = C[i][i] = 1;                // 2 cạnh = 1
        for (int j = 1; j < i; j++)           // phần giữa
            C[i][j] = C[i-1][j-1] + C[i-1][j];
    }
    // in đẹp (căn lề)
    for (int i = 0; i < n; i++) {
        // khoảng trắng đầu dòng cho cân đối
        for (int s = 0; s < n - i - 1; s++) printf("   ");
        for (int j = 0; j <= i; j++)
            printf("%6lld", C[i][j]);
        printf("\n");
    }
    return 0;
}