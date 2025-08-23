// Đề bài: Nhập vào tuổi của học sinh, in ra “Đủ tuổi vào lớp 10” nếu tuổi từ 15 trở lên.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int age;
    printf("Nhập vào tuổi của học sinh: ");
    while ((scanf("%d", &age) != 1) || (age < 0) || (age > 100)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số nguyên âm
        printf("Giá trị bạn nhập vào không phải là tuổi hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    if (age >= 15) { // Kiểm tra nếu tuổi từ 15 trở lên
        printf("Đủ tuổi vào lớp 10\n");
    } else { // Ngược lại
        printf("Chưa đủ tuổi vào lớp 10\n");
    }
    return 0;
}