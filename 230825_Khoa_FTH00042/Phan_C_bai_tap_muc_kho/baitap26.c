// Viết chương trı̀nh giải phương trı̀nh bậc nhất ax + b = 0.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành

int main() { // Hàm chính của chương trình
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa đầu ra là UTF-8
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa đầu vào là UTF-8
#endif // Kết thúc kiểm tra hệ điều hành
    float a, b; // Khai báo các biến a và b
    // Nhập hệ số a và b từ người dùng
    printf("Nhập hệ số a và b (a*x + b = 0): ");
    scanf("%f %f", &a, &b); // Đọc dữ liệu nhập vào
    // Kiểm tra giá trị của a để xác định loại phương trình
    if (a == 0) { // Nếu a bằng 0
        if (b == 0) { // Nếu b cũng bằng 0
            printf("Phương trình có vô số nghiệm.\n"); // Thông báo vô số nghiệm
        } else { // Nếu b khác 0
            printf("Phương trình vô nghiệm.\n"); // Thông báo vô nghiệm
        }
    } else { // Nếu a khác 0
        float x = -b / a; // Tính nghiệm của phương trình
        printf("Phương trình %.2fx + %.2f = 0 có nghiệm x = %.2f\n", a, b, x); // In ra nghiệm với 2 chữ số thập phân
    }
    return 0; // Kết thúc chương trình
}