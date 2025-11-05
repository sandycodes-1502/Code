#include <stdio.h>

int main(void) {
    int a = 5;
    float b = 3.14;
    int *pint = &a;
    float *pfloat = &b;

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", (void*)&a);
    printf("Value of ptr a: %p\n", (void*)pint);
    printf("Value pointed by ptr: %d\n", *pint);
    printf("Float Value: %2f\n", b);
    printf("Address of b: %p\n", (void*)&b);
    printf("Value stored in pointer pFloat: %p\n", (void*)pfloat);
    printf("Value pointed by pFloat: %f\n", *pfloat);

    // Pointer arithmetic with an array
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d (Address: %p)\n", i, *(ptr + i), (void*)(ptr + i));
    }
    return 0;
}