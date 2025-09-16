#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
    int *poy;
    int var = 10;
    printf("%d\n", var);
    printf("%p\n", &var);
    poy = &var;
    printf("%d\n", poy);
    printf("%p\n", poy);
    printf("%p\n", &poy);
    
    return 0;
}