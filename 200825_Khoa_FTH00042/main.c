#include <stdio.h>
int main(){
    char 
    z, a = 'A', b = 'B', c = 'C', 
    s1[] = "abc",s2[] = "_A1", 
    dola = '$', nhaydon = '\'';
    int so1 = 8, so2 = 23;
    float soa = 10.34;
    double 
    area = 12112134.86868686886,
    dai, rong, chuvi, dientich; 
    long liteyrs;
    short arm;
    printf("ky tu in hoa %c, %c va %c \n", a, b, c);
    printf("chuoi ky tu %s va %s\n",s1,s2);
    printf("ghep ky tu A, B, C va $ ta duoc %c%c%c%c\n", dola, a, b, c);
    printf("ky tu dac biet %c%c%c\n", nhaydon, a, nhaydon);
    printf("so nguyen %d va %d\n", so1, so2);
    printf("so thuc %.2f va %lf\n", soa, area);
    /*------------------------------------*/
    printf("----------------------------------------------------\n");
    printf("nhap mot ky tu: \n");
    if (scanf(" %c",&z) !=1) {
        printf("vui long nhap lai:\n"); return 1;}
    printf("ky tu '%c' co ma ASCII la %d\n", z, (unsigned char)z);
    /*------------------------------------*/
    printf("----------------------------------------------------\n");
    printf("Nhap chieu dai: \n");
    if (scanf(" %lf", &dai) !=1) {printf("khong hop le!\n"); return 1;}
    printf("Nhap chieu rong: \n");
    if (scanf(" %lf", &rong) !=1) {printf("khong hop le!\n"); return 1;}
    chuvi = 2 * (dai + rong);
    dientich = dai * rong;
    printf("Chu vi hinh chu nhat la: %.2f\n",chuvi);
    printf("Dien tich hinh chu nhat la: %.2f\n",dientich);
    return 0;
}