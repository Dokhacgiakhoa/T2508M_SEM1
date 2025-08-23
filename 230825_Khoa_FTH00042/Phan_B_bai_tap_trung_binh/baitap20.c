// Đề bài: Nhập vào số nguyên từ 1–4, in ra mùa trong năm.
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
    printf("Nhập vào số nguyên từ 1 đến 4: ");
    while ((scanf("%d", &month) != 1) || (month < 1) || (month > 4)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 4
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    switch (month) { // Sử dụng cấu trúc switch để kiểm tra giá trị của month
        case 1:
            printf("Mùa xuân\n");
            break;
        case 2:
            printf("Mùa hạ\n");
            break;
        case 3:
            printf("Mùa thu\n");
            break;
        case 4:
            printf("Mùa đông\n");
            break;
        default:
            // Không cần thiết vì đã kiểm tra đầu vào trước đó
            break;
    }
    return 0;
}