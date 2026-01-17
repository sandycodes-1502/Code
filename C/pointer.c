#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int *pint = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Value of ptr a: %p\n", pint);
    printf("Value pointed by ptr: %d\n", *pint);
    return 0;
}