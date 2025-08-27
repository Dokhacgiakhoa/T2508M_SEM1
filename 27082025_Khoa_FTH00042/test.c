#include<stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

// Việc cần làm:
// Viết hàm tính tổng
// Viết hàn trừ 2 số
// Viết hàm nhân 2 số
// Viết hàm chia 2 số

// Trong lập trình, luôn luôn ghi nhớ có 2 quá trình
// Quá trình 1 là định nghĩa hàm, ....
// Quá trình 2 là gọi hàm

// Định nghĩa hàm tính tổng hai số a và b
int summary(int a, int b)
{
    int total;
    total = a + b; // 3 + 5 = 8
    return total;
}
// Định nghĩa hàm trừ hai số a và b
int sub(int a, int b){
    int result;
    result = a - b;
    return result;
}
// Định nghĩa hàm nhân 2 số a và b
int multiple(int a, int b){
    int result;
    result = a * b;
    return result;
}
// Định nghĩa phép chia 2 số.
double chia(double a, double b){
    double result;
    if (b!=0)
    {
      result = a/b;
    }
    else
    {
        result = 0;
        printf("Can not div by zero \n");
    }
    return result;
    
}
int main() {
#ifdef _WIN32
    SetConsoleOutputCP (CP_UTF8);
    SetConsoleCP (CP_UTF8);
#endif
    
    int  choice =0;
    int a;
    int b;
    int result =0;
    while (1)
    { 
        printf("1. Tính tổng 2 số.\n");
        printf("2. Tính hiệu 2 số.\n");
        printf("3. Tính tích 2 số.\n");
        printf("4. Tính thương 2 số.\n");
        printf("9. Thoát chương trình.\n");
        printf("Nhập lựa chọn của bạn (1-9)\n");
        scanf("%d",&choice);
        printf("Nhập 2 số a và b \n");
        scanf("%d %d",&a,&b);
        switch (choice)
        {
        case 1:
            printf("You chose option 1 Summary 2 numbers \n");
            // Gọi hàm tính tổng hai số
            result = summary(a,b); // result =8;
            printf("Summary: %d\n", result);
            break;
        case 2: 
            printf("You chose option 2 Subtract 2 numbers \n");
            // Gọi hàm trừ 2 số
            result = sub(a,b);
            printf("Subtraction: %d\n", result);
            break;
        case 3:
            printf("You chose option 3 Multiply 2 numbers \n");
            // Gọi hàm nhân 2 số
            result = multiple(a,b);
            printf("Multiplication: %d\n", result);
            break;
        case 4:
            printf("You chose option 4 Divide 2 numbers \n");
            // Gọi hàm chia 2 số
            double divResult = chia(a,b);
            printf("Division = %f\n", divResult);
            break;
        case 9:
            printf("You chose option 9\n. Exit");
            return 0;
        default:
            printf("Invalid choice. Please choose again.");
            break;
        }
    }
    
}