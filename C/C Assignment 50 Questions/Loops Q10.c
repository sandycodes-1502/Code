#include <stdio.h>
#include <stdbool.h>
int main() {
    int num, i;
    bool isPrime = true;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num <= 1) isPrime = false;
    for(i=2; i*i <= num; i++) {
        if(num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);
    return 0;
}