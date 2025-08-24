/* Viết chương trı̀nh nhập vào giờ, phút, giây. Kiểm tra tı́nh hợp lệ.
Sau đó mỗi giây in ra giờ kế tiếp (giờ:phút:giây + 1 giây) đến khi ấn enter thì dừng. */
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#include <conio.h> // Thư viện conio.h để sử dụng hàm getch()
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
#include <unistd.h> // Thư viện unistd.h để sử dụng hàm sleep() trên hệ điều hành Unix/Linux
#include <time.h> // Thư viện time.h để sử dụng các hàm liên quan đến thời gian

int main() { // Hàm chính của chương trình
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa đầu ra là UTF-8
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa đầu vào là UTF-8
#endif // Kết thúc kiểm tra hệ điều hành
    int hour, minute, second; // Khai báo các biến để lưu giờ, phút, giây
    // Nhập giờ, phút, giây từ người dùng
    printf("Nhập vào giờ, phút, giây (hh mm ss): ");
    scanf("%d %d %d", &hour, &minute, &second); // Đọc dữ liệu nhập vào
    // Kiểm tra tính hợp lệ của giờ, phút, giây
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59 || second < 0 || second > 59) {
        printf("Giờ phút giây không hợp lệ.\n"); // Thông báo giờ phút giây không hợp lệ
        return 1; // Kết thúc chương trình với mã lỗi
    }
    printf("Nhấn Enter để dừng đồng hồ...\n"); // Hướng dẫn người dùng nhấn Enter để dừng
    while (1) { // Vòng lặp vô hạn để in ra giờ kế tiếp
        // In ra giờ, phút, giây với định dạng hh:mm:ss
        printf("\r%02d:%02d:%02d", hour, minute, second);
        fflush(stdout); // Đảm bảo in ngay lập tức
        sleep(1); // Tạm dừng 1 giây
        second++; // Tăng giây lên 1
        if (second == 60) { // Nếu giây đạt 60
            second = 0; // Đặt lại giây về 0
            minute++; // Tăng phút lên 1
            if (minute == 60) { // Nếu phút đạt 60
                minute = 0; // Đặt lại phút về 0
                hour++; // Tăng giờ lên 1
                if (hour == 24) { // Nếu giờ đạt 24
                    hour = 0; // Đặt lại giờ về 0
                }
            }
        }
        if (kbhit()) { // Kiểm tra nếu có phím được nhấn
            char ch = getch(); // Đọc ký tự được nhấn
            if (ch == '\r' || ch == '\n') { // Nếu phím là Enter
                break; // Thoát khỏi vòng lặp
            }
        }
    }
    printf("\nĐồng hồ dừng lại ở %02d:%02d:%02d\n", hour, minute, second); // In ra thời gian khi dừng
    return 0; // Kết thúc chương trình
}