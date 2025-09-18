// Đề bài: Nhập vào một số nguyên và in ra bı̀nh phương của nó.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int n;
    printf("Nhập vào một số nguyên: ");
    while (scanf("%d", &n) != 1) { // Kiểm tra nếu đầu vào không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Bình phương của số %d là: %d\n", n, n * n);
    return 0;
}