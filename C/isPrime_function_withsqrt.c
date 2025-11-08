#include <stdio.h>
#include <math.h>

int isPrime(int number) {
    int sqrtNum = (int)(sqrt(number));
    if (number <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrtNum; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}