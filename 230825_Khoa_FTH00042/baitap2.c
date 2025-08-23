// Nhập vào 2 số nguyên, tı́nh và in ra tổng, hiệu, tı́ch, thương.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int a, b;
    printf("Nhập vào số nguyên thứ nhất: ");
    while (scanf("%d", &a) != 1) { // Kiểm tra nếu đầu vào không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào số nguyên thứ hai: ");
    while (scanf("%d", &b) != 1) { // Kiểm tra nếu đầu vào không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Tổng: %d + %d = %d\n", a, b, a + b);
    printf("Hiệu: %d - %d = %d\n", a, b, a - b);
    printf("Tích: %d * %d = %d\n", a, b, a * b);
    if (b != 0) { // Kiểm tra để tránh chia cho 0
        printf("Thương: %d / %d = %.0f\n", a, b, (float)a / b);
    } else { // Xử lý trường hợp chia cho 0
        printf("Không thể tính thương vì mẫu số là 0.\n");
    }   
    return 0;
}