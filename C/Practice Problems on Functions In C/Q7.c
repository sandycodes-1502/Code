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