// Nhập vào hai số nguyên, in ra số lớn hơn.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int num1, num2;
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
    if (num1 > num2) { // Kiểm tra nếu số thứ nhất lớn hơn số thứ hai
        printf("Số lớn hơn là: %d\n", num1);
    } else if (num2 > num1) { // Kiểm tra nếu số thứ hai lớn hơn số thứ nhất
        printf("Số lớn hơn là: %d\n", num2);
    } else { // Ngược lại hai số bằng nhau
        printf("Hai số bằng nhau: %d và %d\n", num1, num2);
    }
    return 0;
}