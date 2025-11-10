#include <stdio.h>

int main() {
    int a = 5;
    int *pint = &a;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of ptr a: %p\n", (void*)pint);
    printf("Value pointed by ptr: %d\n", *pint);
    return 0;
}