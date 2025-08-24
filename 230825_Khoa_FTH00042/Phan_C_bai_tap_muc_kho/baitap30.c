/* Viết chương trı̀nh nhập vào số nguyên, 
kiểm tra xem có phải số đối xứng (palindrome) hay không (vı́dụ 121, 343). */
#include <stdio.h> // Thư viện chuẩn để sử dụng các hàm nhập xuất
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
#include <windows.h> // Thư viện Windows để sử dụng các hàm thiết lập mã hóa
#endif // Kết thúc kiểm tra hệ điều hành

int main() { // Hàm chính của chương trình
#ifdef _WIN32 // Kiểm tra nếu hệ điều hành là Windows
    SetConsoleOutputCP(CP_UTF8); // Thiết lập mã hóa đầu ra là UTF-8
    SetConsoleCP(CP_UTF8); // Thiết lập mã hóa đầu vào là UTF-8
#endif // Kết thúc kiểm tra hệ điều hành
    long long number; // Khai báo biến để lưu số nguyên nhập vào
    // Nhập số nguyên từ người dùng
    printf("Nhập vào một số nguyên: ");
    scanf("%lld", &number); // Đọc dữ liệu nhập vào
    long long originalNumber = number; // Lưu giá trị ban đầu của số
    long long reversedNumber = 0; // Biến để lưu số đảo ngược
    // Đảo ngược số
    while (number != 0) {
        int digit = number % 10; // Lấy chữ số cuối cùng
        reversedNumber = reversedNumber * 10 + digit; // Thêm chữ số vào số đảo ngược
        number /= 10; // Loại bỏ chữ số cuối cùng khỏi số ban đầu
    }
    // Kiểm tra nếu số ban đầu và số đảo ngược bằng nhau
    if (originalNumber == reversedNumber) {
        printf("%lld là số đối xứng (palindrome).\n", originalNumber); // Thông báo là số đối xứng
    } else {
        printf("%lld không phải là số đối xứng (palindrome).\n", originalNumber); // Thông báo không phải số đối xứng
    }
// Cách 2: nhập vào chuỗi ký tự, kiểm tra chuỗi có phải là palindrome hay không
    char str[100]; // Mảng để lưu chuỗi ký tự
    printf("Nhập vào một số nguyên: ");
    // Kiếm tra toàn bộ ký tự có phải là số hay không, nếu không phải số thì yêu cầu nhập lại
    while (1) {
        int isNumber = 1; // Biến kiểm tra có phải số hay không
        scanf("%s", str); // Đọc chuỗi ký tự nhập vào
        for (int i = 0; str[i] != '\0'; i++) { // Duyệt qua từng ký tự trong chuỗi
            if (str[i] < '0' || str[i] > '9') { // Kiểm tra nếu ký tự không phải là chữ số
                isNumber = 0; // Đánh dấu không phải số
                break; // Thoát khỏi vòng lặp
            }
        }
        if (isNumber) { // Nếu toàn bộ ký tự là số
            break; // Thoát khỏi vòng lặp nhập lại
        } else {
            printf("Vui lòng chỉ nhập các chữ số. Nhập lại: "); // Yêu cầu nhập lại
        }
    }
    // Kiểm tra nếu chuỗi là palindrome
    int left = 0; // Vị trí bắt đầu của chuỗi
    int right = 0; // Vị trí kết thúc của chuỗi
    while (str[right] != '\0') { // Tìm vị trí kết thúc của chuỗi
        right++;
    }
    right--; // Đặt vị trí kết thúc vào ký tự cuối cùng
    int isPalindrome = 1; // Biến kiểm tra có phải palindrome hay không
    while (left < right) { // So sánh ký tự từ đầu và cuối chuỗi
        if (str[left] != str[right]) { // Nếu ký tự không khớp
            isPalindrome = 0; // Đánh dấu không phải palindrome
            break; // Thoát khỏi vòng lặp
        }
        left++; // Di chuyển vị trí bắt đầu về phía trước
        right--; // Di chuyển vị trí kết thúc về phía sau
    }
    if (isPalindrome) { // Nếu là palindrome
        printf("%s là số đối xứng (palindrome).\n", str); // Thông báo là palindrome
    } else {
        printf("%s không phải là số đối xứng (palindrome).\n", str); // Thông báo không phải palindrome
    }
    return 0; // Kết thúc chương trình
}