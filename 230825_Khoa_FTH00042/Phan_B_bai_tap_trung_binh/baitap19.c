// Nhập vào so0nguyên từ 1–12, in ra tên tháng tương ứng.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int month;
    printf("Nhập vào một số nguyên từ 1 đến 12: ");
    while ((scanf("%d", &month) != 1) || (month < 1) || (month > 12)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 12
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    switch (month) { // Sử dụng cấu trúc switch để xác định tên tháng tương ứng
        case 1:
            printf("Tháng 1: Tháng Một\n");
            break;
        case 2:
            printf("Tháng 2: Tháng Hai\n");
            break;
        case 3:
            printf("Tháng 3: Tháng Ba\n");
            break;
        case 4:
            printf("Tháng 4: Tháng Tư\n");
            break;
        case 5:
            printf("Tháng 5: Tháng Năm\n");
            break;
        case 6:
            printf("Tháng 6: Tháng Sáu\n");
            break;
        case 7:
            printf("Tháng 7: Tháng Bảy\n");
            break;
        case 8:
            printf("Tháng 8: Tháng Tám\n");
            break;
        case 9:
            printf("Tháng 9: Tháng Chín\n");
            break;
        case 10:
            printf("Tháng 10: Tháng Mười\n");
            break;
        case 11:
            printf("Tháng 11: Tháng Mười Một\n");
            break;
        case 12:
            printf("Tháng 12: Tháng Mười Hai\n");
            break;
        default:
            // Trường hợp này sẽ không xảy ra do đã kiểm tra đầu vào trước đó
            printf("Lỗi: Giá trị không hợp lệ.\n");
    }
    // Nhập ngày tháng năm sinh, in ra cung hoàng đạo tương ứng.
    int day, year;
    printf("Nhập vào ngày sinh (1-31): ");
    while ((scanf("%d", &day) != 1) || (day < 1) || (day > 31)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 31
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào năm sinh (ví dụ: 1990): ");
    while ((scanf("%d", &year) != 1) || (year < 1900) || (year > 2100)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1900 đến 2100
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    // Xác định cung hoàng đạo dựa trên ngày và tháng sinh
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Cung hoàng đạo: Bạch Dương\n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Cung hoàng đạo: Kim Ngưu\n");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Cung hoàng đạo: Song Tử\n");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Cung hoàng đạo: Cự Giải\n");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Cung hoàng đạo: Sư Tử\n");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Cung hoàng đạo: Xử Nữ\n");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Cung hoàng đạo: Thiên Bình\n");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Cung hoàng đạo: Bọ Cạp\n");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Cung hoàng đạo: Nhân Mã\n");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Cung hoàng đạo: Ma Kết\n");
    } else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Cung hoàng đạo: Bảo Bình\n");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        printf("Cung hoàng đạo: Song Ngư\n");
    } else {
        printf("Ngày sinh không hợp lệ để xác định cung hoàng đạo.\n");
    }
    return 0;
}