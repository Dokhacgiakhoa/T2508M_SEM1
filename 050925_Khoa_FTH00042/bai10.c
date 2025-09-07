/* Đếm số nguyên tố trong mảng 
Cơ sở lýthuye-t: Thử chia đe-n √n.	
Yêu caCu: Vie-t is_prime và count_prime_in_array.	
Prototype gợi ý: int is_prime(int n); int count_prime_in_array(const int a[], int n);	
Vı́dụ I/O:	
[2,4,5,9] → 2 */

#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int count_prime_in_array(const int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (is_prime(a[i]))
            count++;
    return count;
}

int main()
{
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    int n;
    printf("Nhập số phần tử của mảng: "); scanf("%d", &n);
    int a[n];
    printf("Nhập mảng:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int count = count_prime_in_array(a, n);
    printf("Số lượng số nguyên tố trong mảng: %d", count);
    return 0;
}