// Đề bài: In ra các số chẵn từ 1 đến 100 (dùng while).
#include <stdio.h>
int main() {
    int i = 2; // Khai báo i bằng 2
    while (i <= 100) { // Vòng lặp khi i nhỏ hơn hoặc bằng 100
        printf("%d ", i); // In ra giá trị của i
        while (i % 10 == 0) { // Điiều kiện khi i chia hết cho 10
            printf("\n"); // thì in xuống dòng
            break; // sau khi xuống dòng thì thoát vòng lặp
        }
        i += 2; // Tăng i lên 2 để lấy số chẵn tiếp theo
    }
    return 0;
}