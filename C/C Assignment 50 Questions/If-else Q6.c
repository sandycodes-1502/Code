#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0)
        printf("Absolute value: %d\n", -num);
    else
        printf("Absolute value: %d\n", num);
    return 0;
}