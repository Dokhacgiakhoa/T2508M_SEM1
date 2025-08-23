/* Nhập vào chiều dài và chiều rộng, tı́nh diện tı́ch hı̀nh chữ nhật. 
Nếu diện tı́ch > 100 thı̀ in ra “Hı̀nh lớn”, ngược lại in ra “Hı̀nh nhỏ”. */
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    float length, width, area;
    printf("Nhập vào chiều dài: ");
    while ((scanf("%f", &length) != 1) || (length <= 0)) { // Kiểm tra đầu vào nếu không phải là số thực hoặc số thực âm
        printf("Giá trị bạn nhập vào không phải là chiều dài hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào chiều rộng: ");
    while ((scanf("%f", &width) != 1) || (width <= 0) || (width > length)) { // Kiểm tra đầu vào nếu không phải là số thực hoặc số thực âm
        printf("Giá trị bạn nhập vào không phải là chiều rộng hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    area = length * width; // Tính diện tích hình chữ nhật
    printf("Diện tích hình chữ nhật là: %.2f\n", area);
    if (area > 100) { // Kiểm tra nếu diện tích lớn hơn 100
        printf("Hình lớn\n");
    } else { // Ngược lại
        printf("Hình nhỏ\n");
    }
    return 0;
}