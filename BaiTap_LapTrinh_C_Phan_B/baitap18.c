// Đề bài: Nhập số nguyên từ 1–7, in ra thứ trong tua_n (dùng switch-case).
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int day;
    printf("Nhập vào một số nguyên từ 1 đến 7: ");
    while ((scanf("%d", &day) != 1) || (day < 1) || (day > 7)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 7
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    switch (day) { // Sử dụng cấu trúc switch-case để xác định ngày trong tuần
        case 1:
            printf("Thứ Hai\n");
            break;
        case 2:
            printf("Thứ Ba\n");
            break;
        case 3:
            printf("Thứ Tư\n");
            break;
        case 4:
            printf("Thứ Năm\n");
            break;
        case 5:
            printf("Thứ Sáu\n");
            break;
        case 6:
            printf("Thứ Bảy\n");
            break;
        case 7:
            printf("Chủ Nhật\n");
            break;
        default: // Trường hợp không hợp lệ, mặc dù đã được kiểm tra trước đó
            printf("Giá trị bạn nhập vào không hợp lệ.\n");
            break;
    }
// Đề bài: Nhập ngày tháng năm, dùng switch-case để in ra thứ trong tuần.
    int day2, month, year;
    printf("Nhập vào ngày (1-31): ");
    while ((scanf("%d", &day2) != 1) || (day2 < 1) || (day2 > 31)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 31
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào tháng (1-12): ");
    while ((scanf("%d", &month) != 1) || (month < 1) || (month > 12)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 12
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào năm (ví dụ: 2023): ");
    while ((scanf("%d", &year) != 1) || (year < 1)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số nguyên âm
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
// Tính toán ngày trong tuần sử dụng công thức Zeller
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int f = day2 + (13 * (month + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;
    int dayOfWeek = f % 7;
    switch (dayOfWeek) { // Sử dụng cấu trúc switch-case để xác định ngày trong tuần
        case 1: // Chủ Nhật trong công thức Zeller là 1
            printf("Ngày %d/%d/%d là Chủ Nhật\n", day2, month > 12 ? month - 12 : month, year + (month > 12 ? 1 : 0));
            break;
        case 2: // Thứ Hai trong công thức Zeller là 2
            printf("Ngày %d/%d/%d là Thứ Hai\n", day2, month > 12 ? month - 12 : month, year + (month > 12 ? 1 : 0));
            break;
        case 3: // Thứ Ba trong công thức Zeller là 3
            printf("Ngày %d/%d/%d là Thứ Ba\n", day2, month > 12 ? month - 12 : month, year + (month > 12 ? 1 : 0));
            break;
        case 4: // Thứ Tư trong công thức Zeller là 4
            printf("Ngày %d/%d/%d là Thứ Tư\n", day2, month > 12 ? month - 12 : month, year + (month > 12 ? 1 : 0));
            break;
        case 5: // Thứ Năm trong công thức Zeller là 5
            printf("Ngày %d/%d/%d là Thứ Năm\n", day2, month > 12 ? month - 12 : month, year + (month > 12 ? 1 : 0));
            break;
        case 6: // Thứ Sáu trong công thức Zeller là 6
            printf("Ngày %d/%d/%d là Thứ Sáu\n", day2, month > 12 ? month - 12 : month, year + (month > 12 ? 1 : 0));
            break;
        case 0: // Thứ Bảy trong công thức Zeller là 0
            printf("Ngày %d/%d/%d là Thứ Bảy\n", day2, month > 12 ? month - 12 : month, year + (month > 12 ? 1 : 0));
            break;
        default: // Trường hợp không hợp lệ, mặc dù đã được kiểm tra trước đó
            printf("Giá trị bạn nhập vào không hợp lệ.\n");
            break;
    }
    return 0;
}