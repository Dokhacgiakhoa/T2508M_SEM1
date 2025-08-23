// Nhập vào số nguyên n, kiểm tra n có phải bội số của 3 và 5 không.
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int n;
    printf("Nhập vào một số nguyên: ");
    while ((scanf("%d", &n) != 1)) { // Kiểm tra đầu vào nếu không phải là số nguyên
        printf("Giá trị bạn nhập vào không phải là số nguyên. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    if (n % 15 == 0) { // Kiểm tra nếu n là bội số của cả 3 và 5
        printf("Số %d là bội số của cả 3 và 5\n", n);
    } else if (n % 3 == 0) { // Kiểm tra nếu n là bội số của 3
        printf("Số %d là bội số của 3 nhưng không phải bội số của 5\n", n);
    } else if (n % 5 == 0) { // Kiểm tra nếu n là bội số của 5
        printf("Số %d là bội số của 5 nhưng không phải bội số của 3\n", n);
    } else { // Ngược lại n không phải là bội số của cả 3 và 5
        printf("Số %d không phải là bội số của cả 3 và 5\n", n);
    }
    return 0;
}