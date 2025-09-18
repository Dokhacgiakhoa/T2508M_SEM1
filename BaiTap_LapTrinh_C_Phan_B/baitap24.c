// Nhập số nguyên tối đa lên tới 20 chữ số, in ra cách đọc (vı́ dụ 23 → “hai mươi ba”).
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành
// Mảng các chuỗi tương ứng với các số từ 0 đến 9
const char *numberWords[] = {"không", "một", "hai", "ba", "bốn", "năm", "sáu", "bảy", "tám", "chín"};
// Mảng các chuỗi tương ứng với các đơn vị hàng nghìn, triệu, tỷ
const char *units[] = {"", "nghìn ", "triệu "};
// Hàm để đọc số thành chữ, khai bao trước hàm main
void readNumberInWords(long long number) { 
    if (number == 0) {
        return;
    }
    int parts[4] = {0}; // Chia số thành các phần: triệu, nghìn, đơn vị, rỗng
    int partIndex = 0;
    while (number > 0 && partIndex < 4) {
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
            printf("%s", units[i]); // In đơn vị tương ứng (đơn vị, nghìn, triệu)
        }
    }
}

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu ra trên Windows
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa UTF-8 cho đầu vào trên Windows
#endif
    char s[27]; // Chuỗi để lưu số nhập vào, tối đa 26 chữ số + 1 ký tự null
    long long numtyty, numty, num; // Số lớn dùng long long
    printf("Nhập vào một số nguyên: ");
    scanf("%26s", s); // Đọc chuỗi tối đa 26 ký tự
    /* kiểm tra chuỗi s có phải là số không âm và không vượt quá 20 chữ số,
    nếu không thì in thông báo lỗi và yêu cầu nhập lại */
    int length = 0;
    while (s[length] != '\0') {
        if (s[length] < '0' || s[length] > '9') { // Kiểm tra từng ký tự có phải là chữ số không
            printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại.\n");
            return 1; // Kết thúc chương trình với mã lỗi
        }
        length++;
    }
    if (length == 0 || length > 26) { // Kiểm tra độ dài chuỗi
        printf("Giá trị bạn nhập vào không hợp lệ. Vui lòng thử lại.\n");
        return 1; // Kết thúc chương trình với mã lỗi
    }

    /* Chia chuỗi s thành các phần:
    hàng tỷ tỷ vào numtyty, hàng tỷ gán vào numty, hàng đơn vị gán vào num */
    numtyty = 0;
    numty = 0;
    num = 0;
    for (int i = 0; i < length; i++) {
        if (i < length - 18) { // Phần tỷ tỷ (nếu có)
            numtyty = numtyty * 10 + (s[i] - '0');
        } else if (i < length - 9) { // Phần tỷ (nếu có)
            numty = numty * 10 + (s[i] - '0');
        } else { // Phần đơn vị
            num = num * 10 + (s[i] - '0');
        }
    }
    // In ra cách đọc số
    if (numtyty > 0) {
        readNumberInWords(numtyty);
        printf("tỷ tỷ ");
    }
    if (numty > 0) {
        readNumberInWords(numty);
        printf("tỷ ");
    }
    if (num > 0) {
        readNumberInWords(num);
    }

// in ra numtyty, numty, num để kiểm tra
//   printf("numtyty: %lld, numty: %lld, num: %lld\n", numtyty, numty, num);
// in ra chuỗi s để kiểm tra
//    printf("Chuỗi s sau khi xử lý: %s\n", s);
    return 0;
}