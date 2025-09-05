/* Tính tiền điện bậc thang 
Cơ sở lý thuye-t: Hàm từng đoạn (piecewise).	
Yêu caCu: Tı́nh tieCn điện theo 3 bậc; làm tròn 2 chữ so-sau da-u phaGy.	
Prototype gợi ý: double power_bill(int kwh);	
Vı́dụ I/O:	
Input: 120 → 50*k1 + 50*k2 + 20*k3*/

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

long long power_bill(int kwh, int k) {
    printf("%lld\n", kwh*k);
    return kwh * k;
}

long long scancheck(int e, long long k) {
    while (scanf("%d %lld", &e, &k) != 2) {
        printf("Dữ liệu không hợp lệ, vui nhập lại: %d %lld\n", e, k);
        while (getchar() != '\n');
    }
    printf("%d %lld\n", e, k);
    return e, k;
}

double scanfix(int kwh) {
    while (scanf("%d", &kwh) != 1) {
        printf("Dữ liệu không hợp lệ, vui nhập lại: \n");
        while (getchar() != '\n');
    }
    printf("%d\n", kwh);
    return kwh;
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập má hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập má hóa UTF-8 cho đầu vào trên Windows
#endif
    int kwh, k1, k2, k3, e1, e2, e3;
    printf("Nhập số điện tiêu thụ (kWh): \n"); scanfix(kwh);
    printf("Nhập ngưỡng tiêu thụ điện và giá tiền bậc 1: \n"); scancheck(e1,k1);
    printf("Nhập ngưỡng tiêu thụ điện và giá tiền bậc 2: \n"); scancheck(e2,k2);
    printf("Nhập ngưỡng tiêu thụ điện và giá tiền bậc 3: \n"); scancheck(e3,k3);
    if (kwh < e1) printf("Tiền điện phải trả là: %lld VND\n", power_bill(kwh, k1));
    else if (kwh < e2) printf("Tiền điện phải trả là: %lld VND\n", power_bill(e1, k1) + power_bill(kwh - e1, k2));
    else if (kwh < e3) printf("Tiền điện phải trả là: %lld VND\n", power_bill(e1, k1) + power_bill(e2-e1, k2) + power_bill(kwh - e2, k3));
    else printf("Tiền điện phải trả là: %lld VND\n", power_bill(e1, k1) + power_bill(e2-e1, k2) + power_bill(e3-e2, k3)+ power_bill(kwh - e3, k3));
    return 0;
}