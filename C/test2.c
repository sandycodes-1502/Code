#include <stdio.h>

int addition() {
    int a, b, sum;
    printf("Enter two number [a, b]: \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    return sum;
}

int main() {
    int total;
    printf("VS Code on Windows works\n");
    addition();
    total = addition();
    printf("The Total is : %d", total);
    return 1;
}

