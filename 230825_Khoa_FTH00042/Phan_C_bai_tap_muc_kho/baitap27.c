// Viết chương trı̀nh giải phương trı̀nh bậc hai ax^2 + bx + c = 0.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#include <math.h> // Thư viện toán học để sử dụng hàm sqrt
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành

int main() { // Hàm chính của chương trình
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa đầu ra là UTF-8
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa đầu vào là UTF-8
#endif // Kết thúc kiểm tra hệ điều hành
    float a, b, c; // Khai báo các biến a, b và c
    // Nhập hệ số a, b và c từ người dùng
    printf("Nhập hệ số a, b và c (a*x^2 + b*x + c = 0): ");
    scanf("%f %f %f", &a, &b, &c); // Đọc dữ liệu nhập vào
    // Kiểm tra giá trị của a để xác định loại phương trình
    if (a == 0) { // Nếu a bằng 0, phương trình trở thành b*x + c = 0
        if (b == 0) { // Nếu b cũng bằng 0
            if (c == 0) { // Nếu c cũng bằng 0
                printf("Phương trình có vô số nghiệm.\n"); // Thông báo vô số nghiệm
            } else { // Nếu c khác 0
                printf("Phương trình vô nghiệm.\n"); // Thông báo vô nghiệm
            }
        } else { // Nếu b khác 0
            float x = -c / b; // Tính nghiệm của phương trình b*x + c = 0
            printf("Phương trình %.2fx + %.2f = 0 có nghiệm x = %.2f\n", b, c, x); // In ra nghiệm với 2 chữ số thập phân
        }
    } else { // Nếu a khác 0, giải phương trình bậc hai
        float delta = b * b - 4 * a * c; // Tính discriminant (delta)
        if (delta < 0) { // Nếu delta nhỏ hơn 0
            printf("Phương trình vô nghiệm.\n"); // Thông báo vô nghiệm
        } else if (delta == 0) { // Nếu delta bằng 0
            float x = -b / (2 * a); // Tính nghiệm kép
            printf("Phương trình có nghiệm kép x = %.2f\n", x); // In ra nghiệm kép với 2 chữ số thập phân
        } else { // Nếu delta lớn hơn 0
            float x1 = (-b + sqrt(delta)) / (2 * a); // Tính nghiệm thứ nhất
            float x2 = (-b - sqrt(delta)) / (2 * a); // Tính nghiệm thứ hai
            printf("Phương trình có hai nghiệm phân biệt:\n"); // Thông báo có hai nghiệm phân biệt
            printf("x1 = %.2f\n", x1); // In ra nghiệm thứ nhất với 2 chữ số thập phân
            printf("x2 = %.2f\n", x2); // In ra nghiệm thứ hai với 2 chữ số thập phân
        }
    }
    return 0; // Kết thúc chương trình
}