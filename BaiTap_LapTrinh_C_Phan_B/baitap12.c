// Đề bài: Nhập vào một năm, kiểm tra có phải năm nhuận không.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int year;
    printf("Nhập vào một năm: ");
    while ((scanf("%d", &year) != 1) || (year < 0)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số nguyên âm
        printf("Giá trị bạn nhập vào không phải là năm hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
/* Để kiểm tra năm nhuận theo lịch dương, áp dụng quy tắc: 
chia hết cho 4, nhưng không chia hết cho 100 
trừ khi năm đó cũng chia hết cho 400 */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { // Kiểm tra nếu năm là năm nhuận
        printf("Năm %d là năm nhuận theo lịch Gregorian\n", year);
    } else { // Ngược lại
        printf("Năm %d không phải là năm nhuận theo lịch Gregorian\n", year);
    }
    return 0;
}