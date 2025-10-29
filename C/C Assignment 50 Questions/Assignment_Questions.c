/* If-Else / Nested If-Else Programs */

/* 1. Check Even or Odd */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number to check even or odd: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
    return 0;
}

/* 2. Check Positive, Negative, or Zero */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number to check positive, negative, or zero: ");
    scanf("%d", &num);
    if(num > 0)
        printf("Positive\n");
    else if(num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    return 0;
}

/* 3. Largest of Two Numbers */
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if(a > b)
        printf("%d is larger.\n", a);
    else
        printf("%d is larger.\n", b);
    return 0;
}

/* 4. Largest of Three Numbers */
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a >= b) {
        if(a >= c)
            printf("%d is largest.\n", a);
        else
            printf("%d is largest.\n", c);
    } else {
        if(b >= c)
            printf("%d is largest.\n", b);
        else
            printf("%d is largest.\n", c);
    }
    return 0;
}

/* 5. Leap Year Check */
#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
    return 0;
}

/* 6. Absolute Value */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0)
        printf("Absolute value: %d\n", -num);
    else
        printf("Absolute value: %d\n", num);
    return 0;
}

/* 7. Vowel or Consonant */
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is a consonant.\n", ch);
    return 0;
}

/* 8. Divisible by 5 and 11 */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 5 == 0 && num % 11 == 0)
        printf("%d is divisible by both 5 and 11.\n", num);
    else
        printf("%d is not divisible by both 5 and 11.\n", num);
    return 0;
}

/* 9. Pass or Fail */
#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks >= 40)
        printf("Pass\n");
    else
        printf("Fail\n");
    return 0;
}

/* 10. Voting Eligibility */
#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18)
        printf("Eligible to vote.\n");
    else
        printf("Not eligible to vote.\n");
    return 0;
}


/* Switch Case Programs */

/* 1. Day of the Week */
#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid day number\n");
    }
    return 0;
}

/* 2. Simple Calculator */
#include <stdio.h>
int main() {
    char op;
    float num1, num2;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);
    switch(op) {
        case '+': printf("Result: %.2f\n", num1 + num2); break;
        case '-': printf("Result: %.2f\n", num1 - num2); break;
        case '*': printf("Result: %.2f\n", num1 * num2); break;
        case '/': 
            if(num2 != 0) 
                printf("Result: %.2f\n", num1 / num2);
            else 
                printf("Error: Division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}

/* 3. Grade Based on Marks */
#include <stdio.h>
int main() {
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d", &marks);
    switch(marks/10) {
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'F'; break;
    }
    printf("Grade: %c\n", grade);
    return 0;
}

/* 4. Month Name */
#include <stdio.h>
int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case 1: printf("January\n"); break;
        case 2: printf("February\n"); break;
        case 3: printf("March\n"); break;
        case 4: printf("April\n"); break;
        case 5: printf("May\n"); break;
        case 6: printf("June\n"); break;
        case 7: printf("July\n"); break;
        case 8: printf("August\n"); break;
        case 9: printf("September\n"); break;
        case 10: printf("October\n"); break;
        case 11: printf("November\n"); break;
        case 12: printf("December\n"); break;
        default: printf("Invalid month number\n");
    }
    return 0;
}

/* 5. Vowel or Consonant */
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);
    }
    return 0;
}

/* 6. Unit Conversion */
#include <stdio.h>
int main() {
    int choice;
    float value;
    printf("Choose conversion:\n1. cm to m\n2. m to km\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter value: ");
    scanf("%f", &value);
    switch(choice) {
        case 1: printf("%.2f cm = %.2f m\n", value, value/100); break;
        case 2: printf("%.2f m = %.2f km\n", value, value/1000); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}

/* 7. Days in a Month */
#include <stdio.h>
int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n"); break;
        case 2:
            printf("28 or 29 days\n"); break;
        default:
            printf("Invalid month number\n");
    }
    return 0;
}

/* 8. Even or Odd */
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    switch(num % 2) {
        case 0: printf("%d is even.\n", num); break;
        case 1: case -1: printf("%d is odd.\n", num); break;
    }
    return 0;
}

/* 9. Multiplication Table */
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table for %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }
    return 0;
}

/* 10. Area Calculator */
#include <stdio.h>
#define PI 3.14159
int main() {
    int choice;
    float area, radius, length, width, base, height;
    printf("Choose shape to calculate area:\n1. Circle\n2. Rectangle\n3. Triangle\nEnter choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter length and width: ");
            scanf("%f%f", &length, &width);
            area = length * width;
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f%f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of triangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}


/* Loops Programs */

/* 1. First 10 Natural Numbers */
#include <stdio.h>
int main() {
    for(int i=1; i<=10; i++) printf("%d ", i);
    printf("\n");
    return 0;
}

/* 2. Sum of First N Natural Numbers */
#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter N: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) sum += i;
    printf("Sum = %d\n", sum);
    return 0;
}

/* 3. Factorial */
#include <stdio.h>
int main() {
    int n, fact=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) fact *= i;
    printf("Factorial = %d\n", fact);
    return 0;
}

/* 4. Multiplication Table */
#include <stdio.h>
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i=1; i<=10; i++) printf("%d x %d = %d\n", num,i,num*i);
    return 0;
}

/* 5. Sum of Even Numbers up to N */
#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter N: ");
    scanf("%d", &n);
    for(int i=2; i<=n; i+=2) sum += i;
    printf("Sum of even numbers = %d\n", sum);
    return 0;
}

/* 6. Sum of Odd Numbers up to N */
#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter N: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i+=2) sum += i;
    printf("Sum of odd numbers = %d\n", sum);
    return 0;
}

/* 7. Fibonacci Series up to N Terms */
#include <stdio.h>
int main() {
    int n, t1=0, t2=1, nextTerm;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}

/* 8. Reverse a Number */
#include <stdio.h>
int main() {
    int num, rev=0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reversed Number = %d\n", rev);
    return 0;
}

/* 9. Check Palindrome Number */
#include <stdio.h>
int main() {
    int num, rev=0, rem, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if(original == rev)
        printf("%d is a palindrome\n", original);
    else
        printf("%d is not a palindrome\n", original);
    return 0;
}

/* 10. Check Prime Number */
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

/* 11. Power Calculation Without pow() */
#include <stdio.h>
int main() {
    int base, exp, i;
    long result = 1;
    printf("Enter base and exponent: ");
    scanf("%d%d", &base, &exp);
    for(i=1; i<=exp; i++) {
        result *= base;
    }
    printf("%d^%d = %ld\n", base, exp, result);
    return 0;
}

/* 13. Sum of Digits */
#include <stdio.h>
int main() {
    int num, sum=0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("Sum of digits = %d\n", sum);
    return 0;
}

/* 14. Simple Star Triangle */
#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/* 15. Number Pyramid Pattern */
#include <stdio.h>
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=rows - i; j++) {
            printf("  ");
        }
        for(int k=1; k<=i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}

/* One Dimensional Array*/

/* 1. Read and Print Elements of an Array */
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/* 2. Sum of Elements in an Array */
#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;
}

/* 3. Largest Element in an Array */
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
    }
    printf("Largest element = %d\n", largest);
    return 0;
}

/* 4. Smallest Element in an Array */
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Smallest element = %d\n", smallest);
    return 0;
}

/* 5. Reverse an Array */
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Reversed array: ");
    for(int i=n-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/* 6. Count Even and Odd Elements */
#include <stdio.h>
int main() {
    int n, even=0, odd=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);
    return 0;
}

/* 7. Linear Search in Array */
#include <stdio.h>
int main() {
    int n, target, flag=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &target);
    for(int i=0; i<n; i++) {
        if(arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("Element %d not found in the array\n", target);
    return 0;
}

/* 8. Sort Array in Ascending Order */
#include <stdio.h>
int main() {
    int n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

/* 9. Copy One Array to Another */
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter %d elements for the first array:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr1[i]);
    }
    for(int i=0; i<n; i++) {
        arr2[i] = arr1[i];
    }
    printf("Copied array elements are: ");
    for(int i=0; i<n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}

/* 10. Second Largest Element in an Array */
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int secondLargest = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    printf("Second largest element = %d\n", secondLargest);
    return 0;
}

/* Two Dimensional Arrays Programs */

/* 11. Read and Print a Matrix */
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat[i][j]);
    printf("Matrix is:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

/* 12. Find Sum of All Elements in a Matrix */
#include <stdio.h>
int main() {
    int rows, cols, sum=0;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat[i][j]);
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            sum += mat[i][j];
    printf("Sum of all elements = %d\n", sum);
    return 0;
}

/* 13. Sum of Each Row and Each Column of a Matrix */
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat[i][j]);
    // Row sums
    for(int i=0; i<rows; i++) {
        int rowSum=0;
        for(int j=0; j<cols; j++)
            rowSum += mat[i][j];
        printf("Sum of row %d = %d\n", i+1, rowSum);
    }
    // Column sums
    for(int j=0; j<cols; j++) {
        int colSum=0;
        for(int i=0; i<rows; i++)
            colSum += mat[i][j];
        printf("Sum of column %d = %d\n", j+1, colSum);
    }
    return 0;
}

/* 14. Transpose of a Matrix */
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat[i][j]);
    printf("Transpose of the matrix:\n");
    for(int j=0; j<cols; j++) {
        for(int i=0; i<rows; i++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

/* 15. Matrix Addition and Subtraction */
#include <stdio.h>
int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);
    int mat1[rows][cols], mat2[rows][cols], sum[rows][cols], diff[rows][cols];
    printf("Enter elements of first matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat1[i][j]);
    printf("Enter elements of second matrix:\n");
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            scanf("%d", &mat2[i][j]);
    // Addition and Subtraction
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    printf("Matrix Addition:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    printf("Matrix Subtraction:\n");
    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}
