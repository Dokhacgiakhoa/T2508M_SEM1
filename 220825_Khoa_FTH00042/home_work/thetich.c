#include<stdio.h>
int main() {
    const float PI = 3.14;
    float r, h, v;
    printf("Nhap ban kinh hinh tru: ");
    if (scanf("%f", &r) != 1 || r <= 0) {
        printf("Nhap ban kinh khong hop le.\n");
        return 1;
    }
    printf("Nhap chieu cao hinh tru: ");
    if (scanf("%f", &h) != 1 || h <= 0) {
        printf("Nhap chieu cao khong hop le.\n");
        return 1;
    }
    v = PI * r * r * h;
    printf("The tich hinh tru = %.2f\n", v);
    printf("Dien tich xung quanh hinh tru = %.2f\n", 2 * PI * r * h);
    printf("Dien tich toan phan hinh tru = %.2f\n", 2 * PI * r * (r + h));
    return 0;
}