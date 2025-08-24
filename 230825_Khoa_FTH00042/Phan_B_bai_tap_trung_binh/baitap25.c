// Nhập vào ngày, tháng, năm. Kiểm tra ngày tháng năm có hợp lệ không
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành

int main() { // Hàm chính của chương trình
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa đầu ra là UTF-8
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa đầu vào là UTF-8
#endif // Kết thúc kiểm tra hệ điều hành
    int day, month, year; // Khai báo các biến để lưu ngày, tháng, năm
    int isLeapYear; // Biến để kiểm tra năm nhuận
    int maxDays; // Biến để lưu số ngày tối đa trong tháng
    // Nhập ngày, tháng, năm từ người dùng
    printf("Nhap vao ngay, thang, nam (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year); // Đọc dữ liệu nhập vào
    // Kiểm tra năm nhuận theo quy tắc lịch Gregory
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeapYear = 1; // Năm nhuận
    } else {
        isLeapYear = 0; // Năm không nhuận
    }
    // Xác định số ngày tối đa trong tháng
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maxDays = 31; // Tháng có 31 ngày
            break;
        case 4: case 6: case 9: case 11:
            maxDays = 30; // Tháng có 30 ngày
            break;
        case 2:
            maxDays = isLeapYear ? 29 : 28; // Tháng 2 có 28 hoặc 29 ngày
            break;
        default:
            maxDays = 0; // Tháng không hợp lệ
            break;
    }
    // Kiểm tra tính hợp lệ của ngày, tháng, năm
    if (year < 1 || month < 1 || month > 12 || day < 1 || day > maxDays) {
        printf("Ngay thang nam khong hop le.\n"); // Thông báo ngày tháng năm không hợp lệ
    } else {
        printf("Ngay thang nam hop le.\n"); // Thông báo ngày tháng năm hợp lệ
    }
    return 0; 
}