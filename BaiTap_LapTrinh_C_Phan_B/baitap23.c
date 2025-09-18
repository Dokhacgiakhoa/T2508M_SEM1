/* Đề bài: Nhập số điện năng tiêu thụ (kWh). Tı́nh tiền điện theo quy tắc: 
0–50 kWh: 1.700 vnđ/kWh; 51–100 kWh: 2.000 vnđ/kWh; >100 kWh: 2.500 vnđ/kWh. */
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành

// Mảng các chuỗi tương ứng với các số từ 0 đến 9
const char *numberWords[] = {"không", "một", "hai", "ba", "bốn", "năm", "sáu", "bảy", "tám", "chín"};
// Mảng các chuỗi tương ứng với các đơn vị hàng nghìn, triệu, tỷ
const char *units[] = {"", "nghìn", "triệu", "tỷ", "nghìn tỷ"};
// Hàm để đọc số thành chữ, khai bao trước hàm main
void readNumberInWords(long long number) { 
    if (number == 0) {
        printf("không tốn đồng nào");
        return;
    }
    int parts[5] = {0}; // Chia số thành các phần: nghìn tỷ, tỷ, triệu, nghìn, đơn vị
    int partIndex = 0;
    while (number > 0 && partIndex < 5) {
        parts[partIndex++] = number % 1000; // Lấy 3 chữ số cuối cùng gán vào mảng parts
        number /= 1000; // Bỏ đi 3 chữ số đã lấy của number
    }
    for (int i = partIndex - 1; i >= 0; i--) { // Duyệt mảng parts từ phần lớn nhất đến nhỏ nhất
        int part = parts[i];
        if (part > 0) {
            int hundreds = part / 100; // Hàng trăm
            int tens = (part / 10) % 10; // Hàng chục
            int unitsDigit = part % 10; // Hàng đơn vị
            if (hundreds > 0) {
                printf("%s trăm ", numberWords[hundreds]);
            }
            if (tens > 1) {
                printf("%s mươi ", numberWords[tens]);
                if (unitsDigit == 1) {
                    printf("mốt ");
                } else if (unitsDigit == 5) {
                    printf("lăm ");
                } else if (unitsDigit > 1) {
                    printf("%s ", numberWords[unitsDigit]);
                }
            } else if (tens == 1) {
                printf("mười ");
                if (unitsDigit == 1) {
                    printf("một ");
                } else if (unitsDigit == 5) {
                    printf("lăm ");
                } else if (unitsDigit > 1) {
                    printf("%s ", numberWords[unitsDigit]);
                }
            } else if (tens == 0 && unitsDigit > 0) {
                if (hundreds > 0) {
                    printf("lẻ ");
                }
                if (unitsDigit == 1) {
                    printf("một ");
                } else if (unitsDigit == 5) {
                    printf("lăm ");
                } else {
                    printf("%s ", numberWords[unitsDigit]);
                }
            }
            printf("%s ", units[i]); // In đơn vị tương ứng (nghìn, triệu, tỷ, nghìn tỷ)
        }
    }
    printf("Việt Nam đồng"); // Đơn bị tiền tệ
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    long long kWh; // Điện năng tiêu thụ có thể là hàng triệu kWh, nên dùng long long
    printf("Nhập vào số kWh điện năng tiêu thụ: ");
    while ((scanf("%lld", &kWh) != 1) || (kWh < 0)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số âm
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    long long totalCost = 0; // Tổng tiền điện có thể rất lớn, nên dùng long long
    if (kWh <= 50) {
        totalCost = kWh * 1700; // Tính tiền điện cho 0-50 kWh
    } else if (kWh <= 100) {
        totalCost = (50 * 1700) + ((kWh - 50) * 2000); // Tính tiền điện cho 51-100 kWh
    } else {
        totalCost = (50 * 1700) + (50 * 2000) + ((kWh - 100) * 2500); // Tính tiền điện cho >100 kWh
    }
    printf("Tổng tiền điện phải trả: %lld VND\n", totalCost); // In ra tổng tiền điện
// In ra tổng tiền điện bằng chữ
// Hàm để đọc số thành chữ
    printf("Tổng tiền điện bằng chữ: ");
    readNumberInWords(totalCost); // Gọi hàm để đọc số thành chữ
    printf("\n");
// Nhập vào số tiền điện, in ra số điện năng kmh tiêu thụ tương ứng.
    long long inputCost;
    printf("Nhập vào số tiền điện (VND): ");
    while ((scanf("%lld", &inputCost) != 1) || (inputCost < 0)) { // Kiểm tra đầu vào nếu không phải là số nguyên hoặc số âm
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại: ");
        while (getchar() != '\n'); // Xoá bỏ đầu vào không hợp lệ khỏi bộ đệm
    }
    long long calculatedKWh = 0; // Số kWh tính được từ số tiền nhập vào
    if (inputCost <= 50 * 1700) {
        calculatedKWh = inputCost / 1700; // Tính kWh cho số tiền <= tiền của 50 kWh
    } else if (inputCost <= (50 * 1700 + 50 * 2000)) {
        calculatedKWh = 50 + (inputCost - (50 * 1700)) / 2000; // Tính kWh cho số tiền <= tiền của 100 kWh
    } else {
        calculatedKWh = 100 + (inputCost - (50 * 1700 + 50 * 2000)) / 2500; // Tính kWh cho số tiền > tiền của 100 kWh
    }
    printf("Số kWh điện năng tiêu thụ tương ứng: %lld kWh\n", calculatedKWh); // In ra số kWh tính được
    return 0;
}

