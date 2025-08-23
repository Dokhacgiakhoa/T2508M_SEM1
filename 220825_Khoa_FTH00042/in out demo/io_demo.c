#include<stdio.h>
int main() {
    int a = 10;
    float b = 24.5556;
    char x = 'A';

    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", x);
    printf("Integer %d, Float %.2f, Character %c\n", a, b, x);

    printf("Enter an Integer: \n");
    scanf(" %d", &a);
    printf("Enter a Float: \n");
    scanf(" %f", &b);
    printf("Enter a Character: \n");
    scanf(" %c", &x);

    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", x);
    printf("Integer %d, Float %.2f, Character %c\n", a, b, x);
    return 0;
}