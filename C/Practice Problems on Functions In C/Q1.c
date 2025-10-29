#include <stdio.h>

int addition(int a, int b) {
    return a+b;
}

int main() {
    int a, b, sum=0;

    printf("Enter two numbers: "); 
    scanf("%d%d", &a, &b);
    sum = addition(a, b);
    printf("Sum = %d\n", sum);
    return 0;
}