/* 19. Giải phương trình bậc hai 
Trả về mã trạng thái nghiệm.	
Prototype: int quad_roots(double a, double b, double c); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

double quad_roots(double a, double b, double c) {
    double delta = b*b - 4*a*c;
    if (delta > 0) return 2;
    else if (delta == 0) return 1;
    else return 0;
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    double a, b, c;
    printf("Nhập hệ số a: \n");
    while (scanf("%lf", &a) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui lòng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Nhập hệ số b: \n");
    while (scanf("%lf", &b) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Nhập hệ số c: \n");
    while (scanf("%lf", &c) != 1) {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    double result = quad_roots(a, b, c);
    printf("Má trạng thái cơ bản cua phương trình bội %f*x^2 + %f*x + %f = 0 là: %f\n", a, b, c, result);    
    return 0;
}