#include<stdio.h>
int main() {
    int a = 10, b = 7, d = 4, e = 2, so1, so2, so3;
    float c = 15.75, f = 5.6, z;
    /*Bài 1*/
    printf("Nhap so 1: ");
    if (scanf("%d", &so1) != 1) {
        printf("Nhap so 1 khong hop le.\n");
        return 1;
    }
    printf("Nhap so 2: ");
    if (scanf("%d", &so2) != 1) {
        printf("Nhap so 2 khong hop le.\n");
        return 1;
    }
    printf("Nhap so 3: ");
    if (scanf("%d", &so3) != 1) {
        printf("Nhap so 3 khong hop le.\n");
        return 1;
    }
    printf("So thu nhat: %d\n", so1);
    printf("So thu hai: %d\n", so2);
    printf("So thu ba: %d\n", so3);
    /*Bài 2*/
    printf("Dap an cong thuc z = a*b+(c/d)-e*f \n");
    z = a * b + (c / d) - e * f;
    printf("z = %f\n", z);
    /*Bài 3*/
    float dai, rong;
    printf("Nhap chieu dai: ");
    if (scanf("%f", &dai) != 1 || (dai <= 0)) {
        printf("Nhap chieu dai khong hop le.\n");
        return 1;
    }
    printf("Nhap chieu rong: ");
    if ((scanf("%f", &rong) != 1) || (rong <= 0 || dai <= rong)) {
        printf("Nhap chieu rong khong hop le.\n");
        return 1;
    }
    printf("Dien tich hinh chu nhat = %f\n", dai * rong);
    printf("Chu vi hinh chu nhat = %f\n", 2 * (dai + rong));
    /*Bài 4*/
    return 0;
}