/* 25. Đổi nhiệt độ 
Vie$t các hàm đoPi Celsius ↔ Fahrenheit.	
Prototype: double c_to_f(double c); double f_to_c(double f); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

double c_to_f(double c)
{
    return c * 9 / 5 + 32;
}

double f_to_c(double f)
{
    return (f - 32) * 5 / 9;
}
int main()
{
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    double c, f;
    printf("Chọn 1: Độ C → Độ F\nChọn 2: Độ F → Độ C\n");
    int chon;
    while (scanf("%d", &chon) != 1 || chon < 1 || chon > 2)
    {
        printf("Giá trị dữ liệu không hợp lệ, vui số nhập lại: ");
        while (getchar() != '\n');
    }
    if (chon == 1)
    {
        printf("Nhập độ C: ");
        scanf("%lf", &c);
        f = c_to_f(c);
        printf("Đổi ra độ F: %.2lf\n", f);
    }
    else if (chon == 2)
    {
        printf("Nhập độ F: ");
        scanf("%lf", &f);
        c = f_to_c(f);
        printf("Đổi ra độ C: %.2lf\n", c);
    }
    return 0;
}