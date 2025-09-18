// Nhập vào n, đếm xem có bao nhiêu chữ số.
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main () {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); 
    SetConsoleCP(CP_UTF8); 
#endif
    char n[100];
    printf("Nhập vào 1 số nguyên: ");
    // kiểm tra dữ liệu nhập vào có phải số nguyên hay không, nếu không phải số nguyên thì nhập lại
    while (1) {
        scanf(" %s", &n);
        int count = 0;
        for (int i = 0; i < strlen(n); i++) {
            if (n[i] < '0' || n[i] > '9') {
                printf("Giá trị nhập vào không hợp lệ. Vui nhập lại: ");
                count = 1;
                break;
            }
        }
        if (count == 0) break;
    }
    // giản lược n nếu nhập số 0 ở đầu
    int s = strlen(n), i = 0;
    while (n[i] == '0') i++;
    for (int j = 0; j < s-i; j++) {
        n[j] = n[j + i];
        n[j + i] = '0';
    }
    s -= i;
    // đếm xếp số nguyên
        printf("Số %s có %d chữ số.\n", n, s);
    return 0;
}