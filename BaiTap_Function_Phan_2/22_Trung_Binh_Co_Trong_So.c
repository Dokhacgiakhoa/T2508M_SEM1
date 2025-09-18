/* 22. Trung bình có trọng số 
Tı́nh trung bı̀nh có trọng số của 3 điểm.	
Prototype: double weighted_avg(double a,double b,double c,double w1,double w2,double w3); */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

double weighted_avg(double a, double b, double c, double w1, double w2, double w3) {
    return (a * w1 + b * w2 + c * w3) / (w1 + w2 + w3);
}
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    double a, b, c, w1, w2, w3;
    printf("Nhập tọa độ điểm A: \n");
    while (scanf("%lf", &a) != 1 || a < 0) printf("Vui lặp nhập tọa độ điểm A: \n");
    printf("Nhập tọa độ điểm B: \n");
    while (scanf("%lf", &b) != 1 || b < 0) printf("Vui lặp nhập tọa độ điểm B: \n");
    printf("Nhập tọa độ điểm C: \n");
    while (scanf("%lf", &c) != 1 || c < 0) printf("Vui lặp nhập tọa độ điểm C: \n");
    printf("Nhập trọng số điểm A: \n");
    while (scanf("%lf", &w1) != 1 || w1 < 0) printf("Vui lặp nhập trọng số điểm A: \n");
    printf("Nhập trọng số điểm B: \n");
    while (scanf("%lf", &w2) != 1 || w2 < 0) printf("Vui lặp nhập trọng số điểm B: \n");
    printf("Nhập trọng số điểm C: \n");
    while (scanf("%lf", &w3) != 1 || w3 < 0) printf("Vui lặp nhập trọng số điểm C: \n");
    printf("%.2lf", weighted_avg(a, b, c, w1, w2, w3));
    return 0;
}

