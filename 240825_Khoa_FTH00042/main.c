#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    for (int i = 1; i <= 10; i+=2) {
        printf("i = %d\n", i);
    }
// In ra màn hình các số chẵn trong khoảng từ 2 cho đến 100
    for (int i = 2; i <= 100; i+=2) {
        printf("số chẵn thứ %d = %d\n", i / 2, i);
    }
// Viết chương trình tìm các số chia hết cho 5 từ 0 đến 100, và hiển thị ra màn hình các số đó.
    for (int i = 0; i <= 100; i+=5) {
        printf("Bội số thứ %d của 5 là %d\n", i / 5 + 1, i);
    }
/* Viết chương trình tìm các số chia hết cho 3 trong khoảng từ min đến max,
hiển thị các số đó ra màn hình, trong đố giá trị min và max được nhập vào từ bàn phím. */
    int min, max;
    printf("Nhập giá trị min và max: ");
// kiểm tra giá trị nhập vào, nếu không phải số nguyên thì yêu cầu nhập lại
    while (scanf("%d %d", &min, &max) != 2) { // vòng lặp kiểm tra nếu giá trị nhập vào không hợp lệ
        printf("Giá trị nhập vào không hợp lệ. Vui lòng nhập lại: ");
        while (getchar() != '\n'); // Xóa bộ đệm nhập
    }
    for (int i = min; i <= max; i++) { // vòng lặp từ min đến max
        if (i % 3 == 0) { // kiểm tra nếu i chia hết cho 3
            printf("số chia hết cho 3 trong khoảng từ %d đến %d là: %d\n", min, max, i); //in ra kết quả
        }
    }
/* Viết chương trình tìm số chia hết cho một số bất kỳ trong khoảng từ min đến max,
hiển thị các số đó ra màn hình, trong đố các giá trị min, max và số chia được nhập vào từ bàn phím. */
    int sochia;
    printf("Nhập giá trị min, max và số chia: ");
// kiểm tra giá trị nhập vào, nếu không phải số nguyên thì yêu cầu nhập lại
    while (scanf("%d %d %d", &min, &max, &sochia) != 3 || sochia == 0 || min > max) { // kiểm tra số chia bằng 0 và giá trị nhập vào không hợp lệ
        printf("Giá trị nhập vào không hợp lệ. Vui lòng nhập lại: ");
        while (getchar() != '\n'); // Xóa bộ đệm nhập
    }
    for (int i = min; i <= max; i++) { // vòng lặp từ min đến max
        if (i % sochia == 0) { // kiểm tra nếu i chia hết cho sochia
            printf("số thứ %d chia hết cho %d trong khoảng từ %d đến %d là: %d\n", (i-min) / 7 + 1, sochia, min, max, i); //in ra kết quả
        }
    }
    return 0;
}