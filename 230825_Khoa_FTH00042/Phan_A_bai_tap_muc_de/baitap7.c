// Nhập một số nguyên, kie=m tra số đó là chẵnn hay lẻ.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int number;
    printf("Nhập vào một số nguyên: ");
    while ((scanf("%d", &number) != 1)) { // Kiểm tra đầu vào nếu không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    if (number % 2 == 0) { // Kiểm tra nếu số là chẵn
        printf("Số %d là số chẵn\n", number);
    } else { // Ngược lại
        printf("Số %d là số lẻ\n", number);
    }
    return 0;
}