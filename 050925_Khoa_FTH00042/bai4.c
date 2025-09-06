/* Lãi đơn tiết kiệm 
Cơ sở lýthuye-t: A = P + P*r*n.	
Yêu caCu: Nhập P, r(%/năm), n → tieCn cuo-i kỳ.	
Prototype gợi ý: double simple_interest(double P, double r_percent, int years);	
Vı́dụ I/O:	
Input: 10e6, 6.5, 2 → 11.3e6 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

double laidon(double sotien, float laixuat, int kyhan) {
    return sotien*(1+laixuat/100)*kyhan/12;
}

double laikep(double sotien, float laixuat, int kyhan) {
    for (int i = 1; i <= kyhan; i++) sotien *= (1+laixuat/1200);
    return sotien;
}

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    double sotien, laixuat, kieulaixuat, loinhuan;
    int kyhan, dongtien;
    printf("Nhập số tiền muốn gửi: \n"); scanf("%lf", &sotien);
    printf("Bạn gửi một lần hay mỗi tháng?\n 1. Một lần 2. Mỗi tháng \n"); scanf(" %d", &dongtien);
    printf("Nhập lãi xuất mong muốn (%%): "); scanf("%lf", &laixuat);
    printf("Nhập kỳ hạn muốn gửi (tháng): \n Nếu gửi tròn năm sẽ được hưởng lãi kép tháng. \n"); scanf("%d", &kyhan);
    if (dongtien == 1)
    {
        if (kyhan%12 == 0) printf("Tổng gốc và lãi kép cuối kỳ là: %.0f VND", laikep(sotien, laixuat, kyhan));
        else printf("Tổng gốc và lãi đơn cuối kỳ là: %.0f VND", laidon(sotien, laixuat, kyhan));
    } 
    else if (dongtien == 2) 
    {
        if (kyhan%12 == 0)
        {
            loinhuan = laikep(sotien, laixuat, kyhan);
            for (int i = 1; i < kyhan; i++) loinhuan += laikep(sotien, laixuat, i);
            printf("Tổng tiền gốc và lãi kép cuối kỳ là: %.0f VND", loinhuan);
        }
        else {
            loinhuan = laidon(sotien, laixuat, kyhan);
            for (int i = 1; i < kyhan; i++) loinhuan += laidon(sotien, laixuat, i);
            printf("Tổng tiền gốc và lãi đơn cuối kỳ là: %.0f VND", loinhuan);
        }
    }
    return 0;
}