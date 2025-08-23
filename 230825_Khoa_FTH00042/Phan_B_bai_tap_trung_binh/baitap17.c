// Nhập vào ký tự, kiểm tra có phải nguyên âm (a, e, i, o, u) hay phụ âm.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    char ch;
    printf("Nhập vào một ký tự: ");
    while ((scanf(" %c", &ch) != 1)) { // Kiểm tra đầu vào nếu không phải là ký tự
        printf("Giá trị bạn nhập vào không phải là ký tự. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    // Kiểm tra nếu ký tự là nguyên âm (cả chữ hoa và chữ thường)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Ký tự '%c' là nguyên âm\n", ch);
    } else { // Ngược lại ký tự là phụ âm
        printf("Ký tự '%c' là phụ âm\n", ch);
    }
    return 0;
}