// Nhập vào 1 số, đảo ngược số đó.
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    char a[20];
    printf("Nhập vào 1 số nguyên: \n");
    // Kiểm tra dữ liệu nhập vào có phải là số nguyên không, nếu không thì nhập lại
    while (1) {
        scanf(" %s", &a);
        int n = strlen(a);
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] < '0' || a[i] > '9') {
                printf("Giá trị nhập vào không hợp lệ. Vui lòng nhập lại: \n");
                flag = 1;
                break;
            }
        }
        if (flag == 0) break;
    }
    // giản lược a nếu nhập số 0 ở đầu
    int n = strlen(a), i = 0;
    while (a[i] == '0') i++;
    for (int j = 0; j < n-i; j++) {
        a[j] = a[j + i];
        a[j + i] = '0';
    }
    n -= i;
    // Đảo ngược số
    printf("Số đảo ngược là: ");
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] != '0' || a[i+1] != '0' || count != 0) {
            printf("%c", a[i]);
            count++;
        }
    }
    return 0;
}