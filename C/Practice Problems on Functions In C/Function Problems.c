/* 1. Function to Add Two Integers */
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
    printf("Sum = %d\n", add(x, y));
    return 0;
}

/* 2. Function to Swap Two Integers Using Pointers */
#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

/* 3. Function to Reverse an Array by Reference */
#include <stdio.h>
void reverseArray(int arr[], int n) {
    int i, temp;
    for(i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    reverseArray(arr, n);
    printf("Reversed array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

/* 4. Function to Calculate Average of Array of Floats */
#include <stdio.h>
float average(float arr[], int n) {
    float sum = 0;
    for(int i=0; i<n; i++) sum += arr[i];
    return sum / n;
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter %d float elements:\n", n);
    for(int i=0; i<n; i++) scanf("%f", &arr[i]);
    printf("Average = %.2f\n", average(arr, n));
    return 0;
}

/* 5. Function to Check if a Number is Prime */
#include <stdio.h>
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i=2; i*i<=n; i++)
        if(n % i == 0) return 0;
    return 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(isPrime(num)) printf("%d is prime\n", num);
    else printf("%d is not prime\n", num);
    return 0;
}

/* 6. maxInt and maxFloat Functions */
#include <stdio.h>
int maxInt(int a, int b) {
    return (a > b) ? a : b;
}
float maxFloat(float a, float b) {
    return (a > b) ? a : b;
}
int main() {
    int i1, i2;
    float f1, f2;
    printf("Enter two integers: ");
    scanf("%d%d", &i1, &i2);
    printf("Max integer: %d\n", maxInt(i1, i2));
    printf("Enter two floats: ");
    scanf("%f%f", &f1, &f2);
    printf("Max float: %.2f\n", maxFloat(f1, f2));
    return 0;
}

/* 7. Menu-Driven Calculator Using Functions */
#include <stdio.h>
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { if(b==0) return 0; return (float)a / b; }

int main() {
    int choice, a, b;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1: printf("Result = %d\n", add(a, b)); break;
        case 2: printf("Result = %d\n", subtract(a, b)); break;
        case 3: printf("Result = %d\n", multiply(a, b)); break;
        case 4: 
            if(b==0) printf("Division by zero error!\n");
            else printf("Result = %.2f\n", divide(a, b)); 
            break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}