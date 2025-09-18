/* 19. Giải phương trình bậc hai 
Trả về mã trạng thái nghiệm.	
Prototype: int quad_roots(double a, double b, double c, double *x1, double *x2); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif
#include <math.h>

double quad_roots(double a, double b, double c, double *x1, double *x2) {
    double delta = b*b - 4*a*c;
    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = *x2 = -b / (2*a);
        return 1;
    } else {
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);
        return 2;
    }
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
    double x1, x2;
    double result = quad_roots(a, b, c, &x1, &x2);
    if (result == 2) {
        printf("Phương trình bậc hai %lf*x^2 + %lf*x + %lf = 0 co hai nghiệm: x1 = %lf, x2 = %lf\n", a, b, c, x1, x2);
    }   
    else if (result == 1) {
        printf("Phương trình bậc hai %lf*x^2 + %lf*x + %lf = 0 co nghiệm: x1 = x2 = %lf\n", a, b, c, x1);
    }
    else {
        printf("Phương trình bậc hai %lf*x^2 + %lf*x + %lf = 0 khong co nghiệm\n", a, b, c);
    }
    return 0;
}