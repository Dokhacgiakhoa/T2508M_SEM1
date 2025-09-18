// Đề bài: Nhập vào một ký tự và in ra ký tự đó.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    char c[2];
    printf("Nhập vào một ký tự: ");
    while ((scanf(" %s", &c) != 1) || (strlen(c)!=1)) { // Kiểm tra đầu vào nếu không phải là chuỗi hoặc là chuỗi có độ dài khác 1
        printf("Giá trị bạn nhập vào không phải là ký tự. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Ký tự bạn vừa nhập là: %s\n", c);
    return 0;
}