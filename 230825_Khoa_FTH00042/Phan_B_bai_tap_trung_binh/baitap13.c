// Đề bài: Nhập vào 3 số, tı̀m số lớn nhất.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int num1, num2, num3;
    printf("Nhập vào số nguyên thứ nhất: ");
    while ((scanf("%d", &num1) != 1)) { // Kiểm tra đầu vào nếu không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào số nguyên thứ hai: ");
    while ((scanf("%d", &num2) != 1)) { // Kiểm tra đầu vào nếu không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào số nguyên thứ ba: ");
    while ((scanf("%d", &num3) != 1)) { // Kiểm tra đầu vào nếu không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    if (num1 >= num2 && num1 >= num3) { // Kiểm tra nếu số thứ nhất lớn hơn hoặc bằng cả hai số còn lại
        printf("Số lớn nhất là: %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) { // Kiểm tra nếu số thứ hai lớn hơn hoặc bằng cả hai số còn lại
        printf("Số lớn nhất là: %d\n", num2);
    } else { // Ngược lại số thứ ba là số lớn nhất
        printf("Số lớn nhất là: %d\n", num3);
    }
    return 0;
}