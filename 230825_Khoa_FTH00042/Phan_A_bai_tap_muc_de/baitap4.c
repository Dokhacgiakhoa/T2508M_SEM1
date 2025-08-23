// Đề bài: Nhập vào bán kı́nh hı̀nh tròn, tı́nh và in ra chu vi và diện tı́ch (la0y π = 3.14)
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    float r;
    const float pi = 3.14;
    printf("Nhập vào bán kính hình tròn: ");
    while (scanf("%f", &r) != 1 || r < 0) { // Kiểm tra nếu đầu vào không phải là số thực hợp lệ hoặc số âm
        printf("Giá trị bạn nhập vào không phải là số thập phâ̂n hợp hoặc là số âm. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Chu vi hình tròn là: %.2f\n", 2 * pi * r);
    printf("Diện tích hình tròn là: %.2f\n", pi * r * r);
    return 0;
}