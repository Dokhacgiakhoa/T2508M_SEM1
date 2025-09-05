/* Năm nhuận & số ngày trong tháng 
Cơ sở lýthuye-t: Năm nhuận: %400==0 hoặc (%4==0 && %100!=0).	
Yêu caCu: Nhập tháng, năm → so-ngày của tháng.	
Prototype gợi ý: int days_in_month(int month, int year);	
Vı́dụ I/O:	
Input: 2 2024 → 29 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int nhuan(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return 1;
    else return 0;
}

int days_in_month(int month, int year) {
    int array[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && nhuan(year) == 1) return 29;
    else return array[month];
}
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int month, year, days;
    printf("Nhập vào tháng và năm (mm yyyy): \n");
    scanf("%d %d", &month, &year);
    days = days_in_month(month, year);
    printf("Tháng %d năm %d có %d ngày.\n", month, year, days);
    return 0;
}