#include <stdio.h>

int fibonacci(int num) {
    if (num <= 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    int result = fibonacci(n);
    printf("Fibonacci number at position %d is %d\n", n, result);

    return 0;
}