// Nhập vào điểm số (0–10), in ra phân loại: Giỏi (≥8), Khá(6.5–7.9), Trung bı̀nh (5–6.4), Yếu (<5).
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    float score;
    printf("Nhập vào điểm số (0-10): ");
    while ((scanf(" %f", &score) != 1) || (score < 0) || (score > 10)) { // Kiểm tra đầu vào nếu không phải là số thực hoặc số thực không hợp lệ
        printf("Giá trị bạn nhập vào không phải là điểm số hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    if ((int)(score*100) % 10 != 0) { // Kiểm tra nếu điểm số có nhiều hơn 1 chữ số thập phân
        score = (int)(score * 10 + 0.5) / 10.0; // Làm tròn điểm số đến 1 chữ số thập phân
        printf("Điểm số sau khi làm tròn: %.1f\n", score);
    }
    if (score >= 8.0) { // Kiểm tra nếu điểm số lớn hơn hoặc bằng 8.0
        printf("Phân loại: Giỏi\n");
    } else if (score >= 6.5) { // Kiểm tra nếu điểm số lớn hơn hoặc bằng 6.5
        printf("Phân loại: Khá\n");
    } else if (score >= 5.0) { // Kiểm tra nếu điểm số lớn hơn hoặc bằng 5.0
        printf("Phân loại: Trung bình\n");
    } else { // Ngược lại
        printf("Phân loại: Yếu\n");
    }
    return 0;
}