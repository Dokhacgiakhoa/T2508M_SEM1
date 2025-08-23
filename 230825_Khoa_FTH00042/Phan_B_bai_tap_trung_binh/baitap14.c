// Đề bài: Nhập vào 3 số, kiểm tra có tạo thành tam giác không.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int a, b, c, d = 1;
    printf("Nhập vào số nguyên thứ nhất: ");
    while ((scanf("%d", &a) != 1) || (a <= 0)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số nguyên không dương
        printf("Giá trị bạn nhập vào không phải là số nguyên dương. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào số nguyên thứ hai: ");
    while ((scanf("%d", &b) != 1) || (b <= 0)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số nguyên không dương
        printf("Giá trị bạn nhập vào không phải là số nguyên dương. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập vào số nguyên thứ ba: ");
    while ((scanf("%d", &c) != 1) || (c <= 0)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số nguyên không dương
        printf("Giá trị bạn nhập vào không phải là số nguyên dương. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    if ((a + b > c) && (a + c > b) && (b + c > a)) { // Kiểm tra điều kiện để ba cạnh tạo thành tam giác
        printf("Ba số %d, %d, %d có thể tạo thành một tam giác\n", a, b, c);
    } else { // Ngược lại
        printf("Ba số %d, %d, %d không thể tạo thành một tam giác\n", a, b, c);
        d++; // đặt d khác 1 để không kiểm tra loại tam giác
    }
// nếu d bằng 1 thì dùng switch kiểm tra tam giác đều, cân, vuông, vuông cân, thường
    if (d == 1) {
        switch (a == b && b == c) { // Kiểm tra nếu ba cạnh bằng nhau
            case 1:
                printf("Đây là Tam giác đều\n");
                break;
            case 0:
                switch (a == b || b == c || a == c) { // Kiểm tra nếu hai cạnh bằng nhau
                    case 1:
                        printf("Đây là Tam giác cân\n");
                        break;
                    case 0:
                        switch ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) { // Kiểm tra nếu tam giác vuông
                            case 1:
                                switch ((a == b) || (b == c) || (a == c)) { // Kiểm tra nếu tam giác vuông cân
                                    case 1:
                                        printf("Đây là Tam giác vuông cân\n");
                                        break;
                                    case 0:
                                        printf("Đây là Tam giác vuông\n");
                                        break;
                                }
                                break;
                            case 0:
                                printf("Đây là Tam giác thường\n");
                                break;
                        }
                        break;
                }
                break;
        }
    }
    return 0;
}