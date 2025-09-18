/* 2. Dấu của số 
Trả về -1 nếu số âm, 0 nếu bằng 0, 1 nếu dương.	
Prototype: int sign_i(int x); */
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int sign_i(int x)
{
    if (x < 0)
        return -1;
    else if (x == 0)
        return 0;
    else
        return 1;
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif
    int x;
    char c;
    printf("Nhập vào số nguyên n: \n");
    while (scanf("%d%c", &x, &c) != 2 || c != '\n')
    {
        printf("Giá trị nhập vào không hợp lệ, vui lồng nhập lại: ");
        while (getchar() != '\n');
    }
    printf("Trả về kết quả %d\n", sign_i(x));
    return 0;
}