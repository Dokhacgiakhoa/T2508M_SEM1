#include <stdio.h>
int main() {
    int x = 0;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}