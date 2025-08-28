// in ra hello world
#include <stdio.h>
// Khai báo nhập tiếng việt
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    #endif
    printf("Hello world!\n");
    return 0;
}