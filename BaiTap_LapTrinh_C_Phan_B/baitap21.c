/* Đề bài: Viết chương trı̀nh nhập vào điểm 3 môn Toán, Văn, Anh. 
Tı́nh điểm trung bı̀nh và in ra kết quả xếp loại học lực. */
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    float toan, van, anh; // Khai báo biến điểm toán, văn, anh
    printf("Nhập điểm môn Toán: "); // Yêu cầu người dùng nhập điểm toán
    while ((scanf("%f", &toan) != 1) || (toan < 0) || (toan > 10)) { // Kiểm tra đầu vào nếu không phải là số thực hoặc không trong khoảng từ 0 đến 10
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập điểm môn Văn: "); // Yêu cầu người dùng nhập điểm văn
    while ((scanf("%f", &van) != 1) || (van < 0) || (van > 10)) { // Kiểm tra đầu vào nếu không phải là số thực hoặc không trong khoảng từ 0 đến 10
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    printf("Nhập điểm môn Anh: "); // Yêu cầu người dùng nhập điểm anh
    while ((scanf("%f", &anh) != 1) || (anh < 0) || (anh > 10)) { // Kiểm tra đầu vào nếu không phải là số thực hoặc không trong khoảng từ 0 đến 10
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    float average = (toan + van + anh) / 3; // Tính điểm trung bình
    printf("Điểm trung bình: %.2f\n", average); // In ra điểm trung bình với 2 chữ số thập phân
    // Làm tròn điểm trung bình
    if ((average - (int)average) >= 0.5) { // Nếu phần thập phân >= 0.5 thì làm tròn lên
        average = (int)average + 1;
    } else { // Ngược lại thì làm tròn xuống
        average = (int)average;
    }
    // Xếp loại học lực dựa trên điểm trung bình
    if (average >= 8.0) {
        printf("Xếp loại: Giỏi\n");
    } else if (average >= 6.5) {
        printf("Xếp loại: Khá\n");
    } else if (average >= 5.0) {
        printf("Xếp loại: Trung bình\n");
    } else {
        printf("Xếp loại: Yếu\n");
    }
    return 0;
}