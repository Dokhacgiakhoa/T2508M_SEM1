// Viết chương trı̀nh nhập 3 cạnh của tam giác, tı́nh diện tı́ch theo công thức Heron.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#include <math.h>  // Thư viện math.h để sử dụng hàm sqrt()
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành

int main() { // Hàm chính của chương trình
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa đầu ra là UTF-8
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa đầu vào là UTF-8
#endif // Kết thúc kiểm tra hệ điều hành
    float a, b, c; // Khai báo các biến để lưu độ dài các cạnh
    // Nhập độ dài các cạnh từ người dùng
    printf("Nhập vào độ dài 3 cạnh của tam giác (a b c): ");
    scanf("%f %f %f", &a, &b, &c); // Đọc dữ liệu nhập vào
    // Kiểm tra tính hợp lệ của tam giác
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Độ dài các cạnh không hợp lệ để tạo thành tam giác.\n"); // Thông báo độ dài không hợp lệ
        return 1; // Kết thúc chương trình với mã lỗi
    }
    // Tính nửa chu vi
    float s = (a + b + c) / 2;
    // Tính diện tích theo công thức Heron
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    // In ra diện tích của tam giác
    printf("Diện tích của tam giác là: %.2f\n", area);
    return 0; // Kết thúc chương trình
}