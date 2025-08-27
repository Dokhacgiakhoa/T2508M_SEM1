#include<stdio.h>

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
double div(int a, int b){
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
int main()
{
    int  choice =0;
    int a;
    int b;
    int result =0;
    while (1)
    { 
        printf("Please enter your choice (1-9) \n");
        scanf("%d",&choice);
        printf("Enter a and b \n");
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
            double divResult = div(a,b);
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