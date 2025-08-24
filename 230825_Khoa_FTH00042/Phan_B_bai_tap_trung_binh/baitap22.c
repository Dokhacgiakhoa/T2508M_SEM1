// Đè bài: Nhập số nguyên từ 1–3, in ra tên cấp học (1: Tiểu học, 2: THCS, 3: THPT).
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    int grade;
    printf("Nhập vào một số nguyên từ 1 đến 3: ");
    while ((scanf("%d", &grade) != 1) || (grade < 1) || (grade > 3)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 3
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    switch (grade) { // Sử dụng cấu trúc switch để xác định tên cấp học tương ứng
        case 1:
            printf("Cấp học: Tiểu học\n");
            break;
        case 2:
            printf("Cấp học: Trung học cơ sở (THCS)\n");
            break;
        case 3:
            printf("Cấp học: Trung học phổ thông (THPT)\n");
            break;
        default:
            // Trường hợp này sẽ không xảy ra do đã kiểm tra đầu vào trước đó
            printf("Lỗi: Giá trị không hợp lệ.\n");
    }
// Đè bài: Nhập vào số nguyên tương ứng từ  lớp 1 đến  lớp 12, in ra cấp học tương ứng.
    int class;
    printf("Nhập vào một số nguyên từ 1 đến 12: ");
    while ((scanf("%d", &class) != 1) || (class < 1) || (class > 12)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc không trong khoảng từ 1 đến 12
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    if (class >= 1 && class <= 5) {
        printf("Cấp học: Tiểu học\n");
    } else if (class >= 6 && class <= 9) {
        printf("Cấp học: Trung học cơ sở (THCS)\n");
    } else if (class >= 10 && class <= 12) {
        printf("Cấp học: Trung học phổ thông (THPT)\n");
    } else {
        // Trường hợp này sẽ không xảy ra do đã kiểm tra đầu vào trước đó
        printf("Lỗi: Giá trị không hợp lệ.\n");
    }
    return 0;
}