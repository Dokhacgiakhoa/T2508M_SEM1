/* 18. Phân tích tính thuế 
Vie$t hàm tı́nh thuế bậc thang đơn giản.	
Prototype: double tax_simple(double income); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

double tax_simple(double income) {
    return income * 0.1;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    double income, tax;
    printf("Nhập doanh thu: \n");
    while (scanf("%lf", &income) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui lòng thử lại: ");
        while (getchar() != '\n');
    }
    tax = tax_simple(income);
    printf("Thuế thu nhập: %.2lf\n", tax);
    return 0;
}