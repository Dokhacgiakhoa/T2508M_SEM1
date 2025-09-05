/* Nhiệt độ: C ↔ F & cảnh báo sốt 
Cơ sở lý thuyết: F = C*9/5 + 32; so-t khi C ≥ 37.5.	
Yêu caCu: Vie-t các hàm chuyeGn đoGi và kieGm tra so-t; in cảnh báo ne-u so-t.	
Prototype gợi ý: double c_to_f(double c); double f_to_c(double f); int is_fever(double c);	
Vı́dụ I/O:	
Input: 38.2 → is_fever=1; c_to_f=100.76 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

double c_to_f(double c) 
{
    return c*9/5 + 32;
}

double f_to_c(double f) 
{
    return (f-32)*5/9;
}

int is_fever(double c) 
{
    if (c >= 37.5) return 1;
    else return 0;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    double t, c, f;
    char s;
    printf("Nhập nhiệt độ (C hoặc F): ");
    scanf("%lf %c", &t, &s);
    if (s == 'C') 
    {
        c = t;
        f = c_to_f(t);
        printf("Độ Farenheit: %.2lf*F\n", f);
        printf("Độ Celsius: %.2lf*C\n", c);
        if (is_fever(c) == 1) printf("Cânh báo sốt\n");
    }
    else if (s == 'F')
    {
        f = t;
        c = f_to_c(t);
        printf("Độ Farenheit: %.2lf*F\n", f);
        printf("Độ Celsius: %.2lf*C\n", c);
        if (is_fever(c) == 1) printf("Cânh báo sốt\n");
    }
    else printf("Không hợp lệ\n");
    return 0;
}
